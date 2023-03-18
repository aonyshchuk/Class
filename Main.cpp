#include <iostream>
#include <Windows.h>
#include <string.h>

using namespace std; 

#include "Reservoir.h"

Reservoir::Reservoir() 
{
	Reservoir_Name = new char[15];
	width = 0;
	length = 0;
	depth = 0;
	area = 0;
	volume = 0;
}

Reservoir::Reservoir(const char* _name, double _width, double _length, double _depth)
{
	width = _width;
	length = _length;
	depth = _depth;

	Reservoir_Name = new char[strlen(_name)];
	

}

Reservoir::Reservoir(const Reservoir& obj)
{

	Reservoir_Name = new char[strlen(obj.Reservoir_Name)];

	width = obj.width;
	length = obj.length;
	depth = obj.depth;
	area = obj.area;
	volume = obj.volume;
}

long double Reservoir::Volume(Reservoir*res, int countreservoir)
{
	long double volume=0;

	volume = Getwidth() * Getlength() * Getdepth();
	Setvolume(volume);


	return volume;
}


long double Reservoir::Area(Reservoir* res, int countreservoir)
{
	long double area=0;

	
		area = Getwidth() * Getlength();
		Setarea(area);

		return area; 
	
}

char* Reservoir::GetReservoir_Name()
{
	return Reservoir_Name;
}

double Reservoir::Getwidth()
{
	return width;
}

double Reservoir::Getlength()
{
	return length;
}

double Reservoir::Getdepth()
{
	return depth;
}


long double Reservoir::Getarea()
{
	return area;
}

long double Reservoir::Getvolume()
{
	return volume;
}

void Reservoir::SetReservoir_Name(char* _Reservoir_Name)
{
		delete[] Reservoir_Name;
}

void Reservoir::Setwidth(double _width)
{
	width = _width;
}

void Reservoir::Setlength(double _length)
{
	length = _length;
}

void Reservoir::Setdepth(double _depth)
{
	depth = _depth;
}


void Reservoir::Setarea(long double _area)
{
	area = _area;
}

void Reservoir::Setvolume(long double _volume)
{
	volume = _volume;
}
