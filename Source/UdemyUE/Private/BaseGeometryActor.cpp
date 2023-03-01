// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseGeometryActor.h"
#include "Engine/Engine.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogBaseGeometry, All, All)

// Sets default values
ABaseGeometryActor::ABaseGeometryActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>("BaseMesh");
	SetRootComponent(BaseMesh);
}

void ABaseGeometryActor::PrintString()
{
	UE_LOG(LogBaseGeometry, Display, TEXT("Casting succesfull!, Amplitude: %f"), GeometryData.Amplitude);
	UE_LOG(LogBaseGeometry, Display, TEXT("Frequency: %f"), GeometryData.Frequency);
	UE_LOG(LogBaseGeometry, Display, TEXT("Color: %s"), *GeometryData.Color.ToString());
}

// Called when the game starts or when spawned
void ABaseGeometryActor::BeginPlay()
{
	Super::BeginPlay();

	InitialLocation = GetActorLocation();

	
	//PrintTransform();
	//PrintStringTypes();
	//PrintTypes();
	
	SetColor(GeometryData.Color);

	GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, GeometryData.TimerRate, true);
}

void ABaseGeometryActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	UE_LOG(LogBaseGeometry, Error, TEXT("Actor destroyed: %s"), *GetName());
	Super::EndPlay(EndPlayReason);
}

// Called every frame
void ABaseGeometryActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	HandleMovement();
}

void ABaseGeometryActor::HandleMovement()
{
	switch (GeometryData.MoveType)
	{
	case EMovementType::Sin:
	{
		FVector CurrentLocation = GetActorLocation();
		if (GetWorld())
		{
			float Time = GetWorld()->GetTimeSeconds();
			CurrentLocation.Z = InitialLocation.Z + GeometryData.Amplitude * FMath::Sin(GeometryData.Frequency * Time);

			SetActorLocation(CurrentLocation);
		}
		
	}
	break;
	case EMovementType::Static:break;
	default:break;
	}
}

void ABaseGeometryActor::SetColor(const FLinearColor& Color)
{
	if (!BaseMesh) return;
	UMaterialInstanceDynamic* DynMaterial = BaseMesh->CreateAndSetMaterialInstanceDynamic(0);
	if (DynMaterial)
	{
		DynMaterial->SetVectorParameterValue("Color", Color);
	}
}

void ABaseGeometryActor::OnTimerFired()
{
	if (++TimerCount <= MaxTimerCount)
	{
		const FLinearColor NewColor = FLinearColor::MakeRandomColor();
		UE_LOG(LogBaseGeometry, Display, TEXT("Timer Count: %i, Color to set up: %s"), TimerCount, *NewColor.ToString());
		SetColor(NewColor);
		OnColorChanged.Broadcast(NewColor, GetName());
	}
	else
	{
		UE_LOG(LogBaseGeometry, Warning, TEXT("Timer stopped!"));
		GetWorldTimerManager().ClearTimer(TimerHandle);
		OnTimerFinished.Broadcast(this);
	}
}

void ABaseGeometryActor::PrintTypes()
{
	UE_LOG(LogBaseGeometry, Warning, TEXT("Actor has name: %s"), *GetName());
	UE_LOG(LogBaseGeometry, Warning, TEXT("WeaponsNum:%d, kills num:%i"), WeaponsNum, KillsNum);
	UE_LOG(LogBaseGeometry, Warning, TEXT("Health:%f"), Health);
	UE_LOG(LogBaseGeometry, Warning, TEXT("IsDead:%d"), IsDead);
	UE_LOG(LogBaseGeometry, Warning, TEXT("HasWeapon:%d"), static_cast<int>(HasWeapon));
}

void ABaseGeometryActor::PrintStringTypes()
{
	FString name = "John Connor";
	UE_LOG(LogBaseGeometry, Display, TEXT("Name: %s"), *name);

	FString WeaponsNumStr = "Weapons num = " + FString::FromInt(WeaponsNum);
	FString HealthStr = "Health = " + FString::SanitizeFloat(Health);
	FString IsDeadStr = "IsDead = " + FString(IsDead ? "true" : "false");

	FString Stat = FString::Printf(TEXT(" \n == All Stat == \n%s\n%s\n%s"), *WeaponsNumStr, *HealthStr, *IsDeadStr);
	UE_LOG(LogBaseGeometry, Warning, TEXT("%s"), *Stat);

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, name);
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, Stat, true, FVector2D(1.5f, 1.5f));
	}
}

void ABaseGeometryActor::PrintTransform()
{
	FTransform Transform = GetActorTransform();
	FVector Location = Transform.GetLocation();
	FRotator Rotation = Transform.Rotator();
	FVector Scale = Transform.GetScale3D();

	UE_LOG(LogBaseGeometry, Warning, TEXT("Actor has name: %s"), *GetName());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Transform: %s"), *Transform.ToString());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Location: %s"), *Location.ToString());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Rotation: %s"), *Rotation.ToString());
	UE_LOG(LogBaseGeometry, Warning, TEXT("Scale: %s"), *Scale.ToString());

	UE_LOG(LogBaseGeometry, Error, TEXT("Human Readable Transform: %s"), *Transform.ToHumanReadableString());
}