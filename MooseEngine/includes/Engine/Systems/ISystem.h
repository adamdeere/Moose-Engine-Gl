#pragma once
#include <GameObjectManager.h>
#include <IComponent.h>
class ISystem
{
public:
	virtual void OnAction(GameObjectManager* object) = 0;
};

