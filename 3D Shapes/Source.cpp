#include"Cuboid.h"
#include"Sphere.h"
#include<iostream>
using namespace std;

int CountCuboids(Shape3D** arr)
{
	int count = 0;
	for(int i=0;i<5;i++)
	{
		if (dynamic_cast<Cuboid*>(arr[i]))
		{
			count++;
		}
	}
	return count;
}

int CountSpheres(Shape3D** arr)
{
	int count = 0;
	for(int i=0;i<5;i++)
	{
		if (dynamic_cast<Sphere*>(arr[i]))
		{
			count++;
		}
	}
	return count;
}

void TranslateAll(Shape3D** arr, double x, double y, double z)
{
	for(int i=0;i<5;i++)
	{
		arr[i]->TranslateShape(x,y,z);
	}
}

void main()
{
	Cuboid* Cuboid1 = new Cuboid(1,1,1,3,4,5);
	Cuboid* Cuboid2 = new Cuboid(2,3,4,2,5,7);
	Sphere* Sphere1 = new Sphere(0,0,0,4);
	Sphere* Sphere2 = new Sphere(0,0,0,6);
	Sphere* Sphere3 = new Sphere(0,0,0,10);
	Shape3D** Shapes = new Shape3D*[5];
	Shapes[0]=Cuboid1;
	Shapes[1]=Cuboid2;
	Shapes[2]=Sphere1;
	Shapes[3]=Sphere2;
	Shapes[4]=Sphere3;
	system("pause");

	for (int i=0;i<5;i++)
	{
		cout<<"Volume of shape "<<i<<" :"<<Shapes[i]->CalculateVolume()<<endl;
	}
	int index;
	for (int i=0;i<5;i++)
	{
		if (Shapes[i+1])
		{
			if(Shapes[i]->Compare(Shapes[i+1]) == 1)
			{
				index=i;
			}
			else if(Shapes[i]->Compare(Shapes[i+1]) == -1)
			{
				index=i+1;
			}
			else
			{
				index = i;
			}
		}
	}
	cout<<"Info of shape with Maximum volume: " <<endl;
	Shapes[index]->PrintInfo();
	for (int i=0;i<5;i++)
	{
		cout<<"Area of shape "<<i<<" :"<<Shapes[i]->CalculateArea()<<endl;
	}

	cout<<"Number of cuboids is "<<CountCuboids(Shapes)<<" and number of spheres is "<<CountSpheres<<endl;

	Cuboid1->TranslateShape(2,0,-1);
	Sphere2->TranslateShape(-2,1,2);

	for (int i=0;i<5;i++)
	{
		Shapes[i]->PrintInfo();
	}
	TranslateAll(Shapes,10,20,30);

	for (int i=0;i<5;i++)
	{
		Shapes[i]->PrintInfo();
	}
}