#pragma once
#include <string>
#include <vector>
#include <IComponent.h>

class GameObject
{
public:
	GameObject(std::string name);
	std::string GetName();

	void AddComponent(IComponent* component);
	int GetMask() const;

	std::vector<IComponent*> GetComponentList();
private:

	int _Mask;
	std::string _Name;
	std::vector<IComponent*> _ComponentList;
};

