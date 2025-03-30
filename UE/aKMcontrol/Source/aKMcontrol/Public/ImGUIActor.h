
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <imgui.h>

#include "ImGUIActor.generated.h"


UCLASS()
class AKMCONTROL_API AImGUIActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AImGUIActor();
	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
