
#pragma once

class Reservoir
{
private:

	char* Reservoir_Name = nullptr;
	double width;
	double length;
	double depth;
	long double area;
	long double volume;

public:

	Reservoir();
	
	Reservoir(const char* _name, double _width, double _length, double _depth);

	Reservoir(const Reservoir& obj);

	//long double Area(Reservoir* res, int countreservoir);

	void Area(Reservoir* res, int countreservoir);
	
	//long double Volume(Reservoir* res, int countreservoir);

	void Volume(Reservoir* res, int countreservoir);
	
	char* GetReservoir_Name();
	double Getwidth();
	double Getlength();
	double Getdepth();
	long double Getarea();
	long double Getvolume();

	
	
	void SetReservoir_Name(char* _Reservoir_Name);
	void Setwidth(double _width);
	void Setlength(double _length);
	void Setdepth(double _depth);
	void Setarea(long double _area);
	void Setvolume(long double _volume);
};


