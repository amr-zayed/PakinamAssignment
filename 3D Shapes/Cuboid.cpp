#include "Cuboid.h"
#include<iostream>
using namespace std;

Cuboid::Cuboid(double x, double y, double z, double length, double width, double height): Shape3D(x , y, z)
{

}

double Cuboid::CalculateArea()
{
	return Length*Width*2+Length*Height*2+Height*Width*2;
}

double Cuboid::CalculateVolume()
{
	return Length*Width*Height;
}

void Cuboid::SetLength(double l)
{
	Length = l;
}

void Cuboid::SetWidth(double w)
{
	Width= w;
}

void Cuboid::SetHeight(double h)
{
	Height=h;
}

double Cuboid::getLength()
{
	return Length;
}

double Cuboid::getWidth()
{
	return Width;
}

double Cuboid::getHeight()
{
	return Height;
}

void Cuboid::PrintInfo()
{
	Shape3D::PrintInfo();
	cout<<"Length = " <<Length <<endl <<"Width = " <<Width <<endl <<"Height = "<<Height<<endl;
}
Cuboid::~Cuboid(void)
{
}
