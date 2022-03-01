#include "Devise.h"
#include <iostream>
#include <assert.h> 

using namespace std;

Devise::Devise()
{
    this->argent = 0;
    this->symbol = "MAD";
}

Devise::Devise(double argent, string sym)
{
    
    if (argent <= 0) {
        this->argent = 0;

    }
    else
    {
        this->argent = argent;
    }
    this->symbol = sym;

}

bool Devise::operator>(Devise dev)
{
    return (this->argent > dev.argent);
}

bool Devise::operator>=(Devise dev)
{
    return (this->argent >= dev.argent);
}

Devise& Devise::operator-=(Devise dev)
{
    this->argent -= dev.argent;
    return *this;
}

Devise& Devise::operator+=(Devise dev)
{
    this->argent += dev.argent;
    return *this;
}

Devise Devise::operator*(double num)
{
    return Devise(this->argent * num,this->symbol);
}

Devise Devise::operator/(double num)
{
    assert(num != 0);
    return Devise(this->argent / num, this->symbol);
}

string Devise::toString() const
{
    return to_string(this->argent) + " " + this->symbol;
}
