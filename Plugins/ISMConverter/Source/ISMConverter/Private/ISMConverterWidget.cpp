// Fill out your copyright notice in the Description page of Project Settings.


#include "ISMConverterWidget.h"
#include "DebugHelper.h"
#include "Subsystems/EditorActorSubsystem.h"

bool UISMConverterWidget::GetWorld()
{
	if (!World)
	{
		World = GEditor ? GEditor->GetEditorWorldContext().World() : nullptr;
	}

	return World != nullptr;
}

void UISMConverterWidget::GetCurrentLevelLabel()
{
	if (!GetWorld())
	{
		DebugHelper::NotificationPopup(TEXT("No world context found."));
		return;
	}

	CurrentLevelName = TEXT("Current Level Name: ") + World->GetMapName();
}
