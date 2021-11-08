// Fill out your copyright notice in the Description page of Project Settings.


#include "KeepSimulationChangesComponent.h"

// Sets default values for this component's properties
UKeepSimulationChangesComponent::UKeepSimulationChangesComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UKeepSimulationChangesComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}

void UKeepSimulationChangesComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	//FLevelEditorActionCallbacks::OnKeepSimulationChanges();
}



// Called every frame
void UKeepSimulationChangesComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

