#include "ImGUIActor.h"

AImGUIActor::AImGUIActor()
{

	PrimaryActorTick.bCanEverTick = true;

}

// Called every frame
void AImGUIActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	const ImGui::FScopedContext ScopedContext;
	
	if (ScopedContext)
	{
		// Your ImGui code goes here!
		ImGui::ShowDemoWindow();
	}

}

