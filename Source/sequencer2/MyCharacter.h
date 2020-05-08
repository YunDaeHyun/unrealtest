// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h" //왜?
#include "GameFramework/Character.h"
#include "MyCharacter.generated.h"

UCLASS()
class SEQUENCER2_API AMyCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCharacter();// 레벨에 올릴때 바로 호출

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;// 실행될때 한번 호출

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override; //프레임당 호출

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
