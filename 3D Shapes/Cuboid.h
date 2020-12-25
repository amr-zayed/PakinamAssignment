#pragma once
#include "shape3d.h"
class Cuboid : public Shape3D
{
private:
	double Length;
	double Width;
	double Height;
public:
	Cuboid(double x, double y, double z, double length, double width, double height);
	double CalculateArea();
	double CalculateVolume();
	void SetLength(double);
	void SetWidth(double);
	void SetHeight(double);
	double getLength();
	double getWidth();
	double getHeight();
	void PrintInfo();
	~Cuboid(void);
};

