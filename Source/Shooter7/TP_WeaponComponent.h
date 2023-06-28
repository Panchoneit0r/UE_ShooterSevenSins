// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "TP_WeaponComponent.generated.h"

class AShooter7Character;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTER7_API UTP_WeaponComponent : public UStaticMeshComponent
{
	GENERATED_BODY()

public:

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;
	
	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector MuzzleOffset;
	
	/** Sets default values for this component's properties */
	UTP_WeaponComponent();

	UFUNCTION(BlueprintImplementableEvent, Category="Weapon")
	void FireTrigered();

	UFUNCTION(BlueprintImplementableEvent, Category="Weapon")
	void FireEnd();

	UFUNCTION(BlueprintCallable)
	void AttachWeapon();

protected:

private:
	/** The Character holding this weapon*/
	AShooter7Character* Character;
};
