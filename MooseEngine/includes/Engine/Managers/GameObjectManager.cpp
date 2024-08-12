#include "GameObjectManager.h"

std::vector<GameObject*> GameObjectManager::GetGameObjectList()
{
	return _GameObjectList;
}

void GameObjectManager::AddGameObject(GameObject* object)
{
	_GameObjectList.push_back(object);
}
