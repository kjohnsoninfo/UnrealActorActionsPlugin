// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EditorUtilityWidget.h"
#include "ISMConverterWidget.generated.h"

/**
 * 
 */
UCLASS()
class ISMCONVERTER_API UISMConverterWidget : public UEditorUtilityWidget
{
	GENERATED_BODY()

public:
#pragma region Level

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="CurrentLevelName")
	FString CurrentLevelName = TEXT("Current Level Name: ");

	UFUNCTION(CallInEditor, BlueprintCallable)
	void GetCurrentLevelLabel();

#pragma endregion

private:
	class UWorld* World;

	bool GetWorld();

};
