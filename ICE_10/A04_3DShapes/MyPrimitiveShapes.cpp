#include "MyPrimitive.h"
//C--D
//|  |
//A--B
//This will make the triang A->B->C and then the triang C->B->D
void MyPrimitive::AddQuad(vector3 a_vBottomLeft, vector3 a_vBottomRight, vector3 a_vTopLeft, vector3 a_vTopRight)
{
	AddVertexPosition(a_vBottomLeft);
	AddVertexPosition(a_vBottomRight);
	AddVertexPosition(a_vTopLeft);

	AddVertexPosition(a_vTopLeft);
	AddVertexPosition(a_vBottomRight);
	AddVertexPosition(a_vTopRight);
}
void MyPrimitive::GenerateCube(float a_mSize, vector3 a_vColor)
{
	//If the size is less than this make it this large
	if (a_mSize < 0.01f)
		a_mSize = 0.01f;

	//Clean up Memory
	Release();
	Init();

	float fValue = 0.5f * a_mSize;
	//3--2
	//|  |
	//0--1
	vector3 point0(-fValue, -fValue, fValue); //0
	vector3 point1(fValue, -fValue, fValue); //1
	vector3 point2(fValue, fValue, fValue); //2
	vector3 point3(-fValue, fValue, fValue); //3

	//7--6
	//|  |
	//4--5
	vector3 point4(-fValue, -fValue, -fValue); //4
	vector3 point5(fValue, -fValue, -fValue); //5
	vector3 point6(fValue, fValue, -fValue); //6
	vector3 point7(-fValue, fValue, -fValue); //7

	//F
	AddQuad(point0, point1, point3, point2);

	//B
	AddQuad(point5, point4, point6, point7);

	//L
	AddQuad(point4, point0, point7, point3);

	//R
	AddQuad(point1, point5, point2, point6);

	//U
	AddQuad(point3, point2, point7, point6);

	//D
	AddQuad(point4, point5, point0, point1);

	//Compile the object in this color and assign it this name
	CompileObject(a_vColor);
}
void MyPrimitive::GenerateCone
(float a_fRadius, float a_fHeight, int a_nSubdivisions, vector3 a_vColor)
{
	if (a_nSubdivisions < 3)
		a_nSubdivisions = 3;
	if (a_nSubdivisions > 360)
		a_nSubdivisions = 360;

	//Clean up Memory
	Release();
	Init();

	//Your Code Goes Here instead of the next three lines
	AddVertexPosition(vector3(-0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.00f, 0.75f, 1.00f));

	//Compile the object in this color and assign it this name
	CompileObject(a_vColor);
}
void MyPrimitive::GenerateCylinder(float a_fRadius, float a_fHeight, int a_nSubdivisions, vector3 a_vColor)
{
	if (a_nSubdivisions < 3)
		a_nSubdivisions = 3;
	if (a_nSubdivisions > 360)
		a_nSubdivisions = 360;

	//Clean up Memory
	Release();
	Init();

	//Your Code Goes Here instead of the next three lines
	AddVertexPosition(vector3(-0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.00f, 0.75f, 1.00f));

	//Compile the object in this color and assign it this name
	CompileObject(a_vColor);
}
void MyPrimitive::GenerateTube(float a_fOuterRadius, float a_fInnerRadius, float a_fHeight, int a_nSubdivisions, vector3 a_vColor)
{
	if (a_nSubdivisions < 3)
		a_nSubdivisions = 3;
	if (a_nSubdivisions > 360)
		a_nSubdivisions = 360;

	//Clean up Memory
	Release();
	Init();

	//Your Code Goes Here instead of the next three lines
	AddVertexPosition(vector3(-0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.00f, 0.75f, 1.00f));

	//Compile the object in this color and assign it this name
	CompileObject(a_vColor);
}
void MyPrimitive::GenerateSphere(float a_fRadius, int a_nSubdivisions, vector3 a_vColor)
{
	//Sets minimum and maximum of subdivisions
	if (a_nSubdivisions < 1)
	{
		GenerateCube(a_fRadius * 2, a_vColor);
		return;
	}
	if (a_nSubdivisions > 6)
		a_nSubdivisions = 6;

	//Clean up Memory
	Release();
	Init();

	//Your Code Goes Here instead of the next three lines
	AddVertexPosition(vector3(-0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.75f, 0.00f, 1.00f));
	AddVertexPosition(vector3(0.00f, 0.75f, 1.00f));

	//Compile the object in this color and assign it this name
	CompileObject(a_vColor);
}