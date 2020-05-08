// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"

// 레벨에 올릴때 바로 호출
AMyCharacter::AMyCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// SkeletalMesh
	static ConstructorHelpers::FObjectFinder<USkeletalMesh> BodyAsset(TEXT("C:/Users/NT760/Documents/Unreal Projects/sequencer2/Content/Character/Trooper/Mesh/Trooper_Full_NoKnife.uasset"));
	
	if (BodyAsset.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(BodyAsset.Object);
	}
}

// 실행될때 한번 호출
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

