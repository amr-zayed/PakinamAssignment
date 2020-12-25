#pragma once
#include "shape3d.h"
class Sphere : public Shape3D
{
private:
	double Radius;
public:
	Sphere(double, double, double, double);
	double CalculateArea();
	double CalculateVolume();
	void SetRadius(double);
	double getRadius();
	void PrintInfo();
	~Sphere(void);
};

