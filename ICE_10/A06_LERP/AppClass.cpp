#include "AppClass.h"
void AppClass::InitApplication(String a_sWindowName)
{
	super::InitApplication("Assignment  06 - LERP"); //Base's Init Application
}

void AppClass::InitUserVariables(void)
{
	//Sets the camera
	m_pCamera->SetPositionAndView(vector3(0.0f, 0.0f, 15.0f), vector3(0.0f));

	// Color of the screen
	m_v4ClearColor = vector4(REBLACK,1); // Set the clear color to black

	//Loads the character
	m_pMeshMngr->LoadModel("Sorted\\WallEye.obj", "WallEye");
}

void AppClass::Update(void)
{
	//Update the system clock
	m_pSystem->UpdateTime();

	//Update the Mesh Manager
	m_pMeshMngr->Update(false);

	//Lets us know how much time has passed since the last call
	float fTimeSpan = m_pSystem->LapClock();

	//cumulative time
	static float fRunTime = 0.0f;
	fRunTime += fTimeSpan;

	//example
	m_pMeshMngr->SetModelMatrix(glm::translate(vector3(0.0f)), "WallEye"); //set the model's position
	m_pMeshMngr->AddSphereToQueue(glm::translate(vector3(1.0f)) * glm::scale(vector3(0.1f)), RERED, SOLID); //render a sphere
	printf("\rfTimeSpan: %.3f, fRunSpan: %.3f, fDuration: %.3f                 ", fTimeSpan, fRunTime, fDuration); //prints out the information

	//Adds all instances to the render list DOES NOT NEED CHANGES
	m_pMeshMngr->AddInstanceToRenderList("ALL");
}

void AppClass::Release(void)
{
	//doesnt need changes unless you add new pointers
	super::Release();
}