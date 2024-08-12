#include "GameObject.h"

GameObject::GameObject(std::string name)
    : _Name(name), _Mask(ComponentTypes::COMPONENT_NONE)
{
}

std::string GameObject::GetName()
{
    return _Name;
}

void GameObject::AddComponent(IComponent* component)
{
    _ComponentList.push_back(component);
    _Mask |= (int)component->GetType();
}

int GameObject::GetMask() const
{
    return _Mask;
}

std::vector<IComponent*> GameObject::GetComponentList()
{
    return _ComponentList;
}
