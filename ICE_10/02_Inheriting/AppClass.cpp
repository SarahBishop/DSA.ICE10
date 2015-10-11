#include "AppClass.h"
void AppClass::InitApplication(String a_sWindowName)
{
	//Using Base InitApplication method
	super::InitApplication("Inheriting (No keyboard control, close with Alt + F4)");
	//Changing the clear color
	m_v4ClearColor = vector4(0.0f);
}

void AppClass::InitUserVariables(void)
{
	//Enable ArcBall
	m_bArcBall = true;
	//Enable FPC
	//m_bFPC = true;
}