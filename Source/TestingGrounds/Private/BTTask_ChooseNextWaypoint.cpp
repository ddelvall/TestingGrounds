// Fill out your copyright notice in the Description page of Project Settings.

#include "BTTask_ChooseNextWaypoint.h"
#include "BehaviorTree/BlackboardComponent.h"

EBTNodeResult::Type UBTTask_ChooseNextWaypoint::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	
	auto BlackboardComp = OwnerComp.GetBlackboardComponent();
	auto Index = BlackboardComp->GetValueAsInt(IndexKey.SelectedKeyName);
	UE_LOG(LogTemp, Warning, TEXT("Waypoint Index: %i"), Index);
	return EBTNodeResult::Succeeded;
}



