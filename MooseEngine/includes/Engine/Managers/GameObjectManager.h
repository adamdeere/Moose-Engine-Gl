#pragma once
#include <vector>
#include <GameObject.h>
#include<iterator>

class GameObjectManager
{
public:
	
	std::vector<GameObject*> GetGameObjectList();
	void AddGameObject(GameObject* object);

private:
	std::vector<GameObject*> _GameObjectList;
};

