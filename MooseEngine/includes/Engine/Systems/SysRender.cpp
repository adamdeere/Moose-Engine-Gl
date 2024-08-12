#include "SysRender.h"
#include <string>
#include <iostream>
using namespace std;
void SysRender::OnAction(GameObjectManager* object)
{
	for (GameObject* entity : object->GetGameObjectList())
	{
        if ((entity->GetMask() & _Mask) == _Mask)
        {
            cout << "this worked " + entity->GetName() << endl;
        }
	}
}
