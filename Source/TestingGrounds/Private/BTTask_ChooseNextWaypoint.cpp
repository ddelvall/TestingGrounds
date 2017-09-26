// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_ChooseNextWaypoint.h"

EBTNodeResult::Type UBTTask_ChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Warning, TEXT("AI in C++"));
	return EBTNodeResult::Succeeded;
}



