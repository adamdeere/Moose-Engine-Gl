#pragma once
#include <vector>
#include <GameObject.h>
#include<iterator>
#include <ISystem.h>
#include <GameObjectManager.h>

class SystemManager
{
public:
	std::vector<ISystem*> _SystemList;
	void AddSystem(ISystem* system);

	void ActionSystems(GameObjectManager* manager);
};

