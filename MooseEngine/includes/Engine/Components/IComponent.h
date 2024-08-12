#pragma once

enum ComponentTypes {
    COMPONENT_NONE = 0,
    COMPONENT_TRANSFORM = 1 << 0,
    COMPONENT_RENDER = 1 << 1,
    COMPONENT_MATERIAL = 1 << 2,
};

class IComponent
{
public:
   

    virtual ComponentTypes GetType() = 0;
};

