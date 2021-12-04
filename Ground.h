#pragma once
#include "Components/Component.h"
class Ground :public Component
{
public:
	Ground(GraphicsInfo* r_GfxInfo);
	virtual void Operate();	//Calculates the volt on both terminals
	virtual void Draw(UI*);	//Draws the resistor
};
