#include "Operation.h"
#include  <iostream>
using namespace std;
int Operation::count = 1;

Operation::Operation(string m) : id(Operation::count++)
{
	this->t = time(0);
	this->op = m;
}

void Operation::aff() const
{
    struct tm now;
    localtime_s(&now, &(this->t));
    cout << now.tm_mday << '/'
        << (now.tm_mon + 1) << '/'
        << (now.tm_year + 1900)
        << "|N " << this->id << "|" << this->op << endl;
   
}
