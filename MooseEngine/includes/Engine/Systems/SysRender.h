#pragma once
#include <GameObjectManager.h>
#include <ISystem.h>

class SysRender: public ISystem
{
public:
	void OnAction(GameObjectManager* object);

private:
	const int _Mask = (int)ComponentTypes::COMPONENT_RENDER | (int)ComponentTypes::COMPONENT_TRANSFORM;
};

