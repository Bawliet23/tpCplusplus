#pragma once
#include <iostream>
#include <string>
using namespace std;

class Devise
{
private :
	double argent;
	string symbol;
public:
	Devise();
	Devise(double argent, string sym);
	bool operator>(Devise dev);
	bool operator>=(Devise dev);
	Devise& operator-=(Devise dev);
	Devise& operator+=(Devise dev);
	Devise operator*(double num);
	Devise operator/(double num);
	string toString() const;
};

