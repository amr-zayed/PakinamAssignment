#pragma once
class Shape3D
{
private:
	double X_ref;
	double Y_ref;
	double Z_ref;
public:
	Shape3D(double, double, double);
	virtual double CalculateArea() = 0;
	virtual double CalculateVolume() = 0;
	virtual int Compare(Shape3D*);
	void TranslateShape(double x=5,double y=5, double z=5 );
	virtual void PrintInfo();
};

