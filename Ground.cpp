#include "Ground.h"

Ground::Ground(GraphicsInfo* r_GfxInfo) :Component(r_GfxInfo)
{}

void Ground::Draw(UI* pUI)
{
	
	pUI->DrawGround(*m_pGfxInfo); //update to draw resistor

}

void Ground::Operate()
{

}