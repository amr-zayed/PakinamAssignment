#include "Shape3D.h"
#include<iostream>
using namespace std;
Shape3D::Shape3D(double x, double y, double z)
{
	X_ref = x;
	Y_ref = y;
	Z_ref = z;
}

void Shape3D::TranslateShape(double x,double y, double z )
{
	X_ref+=x;
	Y_ref+=y;
	Z_ref+=z;
}

int Shape3D::Compare(Shape3D* Othershape)
{
	if(this->CalculateVolume() > Othershape->CalculateVolume())
	{
		return 1;
	}
	else if(this->CalculateVolume() > Othershape->CalculateVolume())
	{
		return -1;
	}
	else
	{
		return 0;
	}
}
void Shape3D::PrintInfo()
{
	cout<<"X_ref = " <<endl <<X_ref <<"Y_ref = " <<Y_ref <<endl <<"Z_ref = " <<Z_ref<<endl;
}