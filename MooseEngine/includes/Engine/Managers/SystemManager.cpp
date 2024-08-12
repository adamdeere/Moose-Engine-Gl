#include "SystemManager.h"

void SystemManager::AddSystem(ISystem* system)
{
	_SystemList.push_back(system);
}

void SystemManager::ActionSystems(GameObjectManager* manager)
{
	for (ISystem* system : _SystemList)
	{
		system->OnAction(manager);
	}

}
