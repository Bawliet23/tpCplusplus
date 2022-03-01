#pragma once
#include <ctime>
#include <iostream>
using namespace std;

class Operation
{
private:
	time_t t;
	const int id;
	static int count;
	string op;
public :
	Operation(string m);
	void aff() const;
};

