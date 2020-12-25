#include "Sphere.h"
#include<iostream>
using namespace std;

Sphere::Sphere(double x, double y, double z, double r):Shape3D(x,y,z)
{
	Radius = r;
}

double Sphere::CalculateArea()
{
	return 4*3.14*Radius*Radius;
}

double Sphere::CalculateVolume()
{
	return (4/3)*3.14*Radius*Radius*Radius;
}

void Sphere::SetRadius(double r)
{
	Radius = r;
}

double Sphere::getRadius()
{
	return Radius;
}

void Sphere::PrintInfo()
{
	Shape3D::PrintInfo();
	cout<<"Radius = " <<Radius<<endl;
}
Sphere::~Sphere(void)
{
}
