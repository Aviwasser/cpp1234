#include "CircularInt.hpp"
/* Constructor */
CircularInt::CircularInt(int fiRst , int laSt)
{
    first = fiRst;
    last=laSt;
    temp = fiRst;
};
CircularInt::CircularInt(const CircularInt& other)
{
    first = other.first;
    last = other.last;
    temp = other.temp;
};

CircularInt& CircularInt::operator=(const CircularInt& c)
{
    return *this;
}
const CircularInt operator+(const int num,const CircularInt& c )
{
    CircularInt copy(c);
   
    return copy;
}
const CircularInt operator-(const CircularInt& c1 , const CircularInt& c2)
{
    CircularInt temp(c1);

    return temp;

}
const CircularInt operator+(const CircularInt& c , const int num)
{
    CircularInt copy(c);
  
    return copy;
}
const CircularInt operator+(CircularInt const& c1 , CircularInt const& c2)
{

    CircularInt temp(c1);
  
    return temp;

}
CircularInt& CircularInt::operator=( int n)
{
    return *this;
}
const CircularInt operator-(const int num, CircularInt const& c )
{
    CircularInt cpy(c);
    return cpy;
}
const CircularInt operator-(const CircularInt& c , const int num)
{
    CircularInt cpy(c);
    return cpy;
}

CircularInt CircularInt::operator-()
{
    CircularInt cpy(*this);
    return cpy;
}
const CircularInt operator*(const CircularInt& c , const int num)
{
    CircularInt cpy(c);
    return cpy;
}
CircularInt& CircularInt::operator/=(const int num)
{
    return *this;
}
CircularInt& CircularInt::operator%=(const int other)
{
    return *this;
}
ostream& operator<< (ostream& os ,CircularInt const& obj)
{
    return os;
}
istream& operator>>(istream& input, CircularInt& obj)
{
    return input;
}
const CircularInt operator*(const int num , const CircularInt& c)
{
    CircularInt cpy(c);
    return cpy;
}
const CircularInt operator/(CircularInt const& c , const int num)
{
    CircularInt cpy(c);
    return cpy;
}
const CircularInt operator%(const CircularInt& c , const int num)
{
    CircularInt cpy(c);
    return cpy;
}
CircularInt& CircularInt::operator++()
{
    return *this;
}
CircularInt CircularInt::operator++(const int other)
{
    CircularInt cpy(*this);
    return cpy;
}
CircularInt& CircularInt::operator--()
{
    return *this;
}
CircularInt CircularInt::operator--(const int other)
{
    CircularInt cpy(*this);
    return cpy;
}
bool operator==(const CircularInt c1 , const CircularInt c2)
{
    return 0;
}
bool operator!=(const CircularInt c1 , const CircularInt c2)
{
    return 0;
}
bool operator>(const CircularInt c1 , const CircularInt c2)
{
    return 0;
}
bool operator<(const CircularInt c1 , const CircularInt c2)
{
    return 0;
}
bool operator>=(const CircularInt c1 , const CircularInt c2)
{
    return 0;
}
bool operator<=(const CircularInt c1 , const CircularInt c2)
{
    return 1;
}
CircularInt& CircularInt::operator+=(const CircularInt& other)
{
    return *this;
}
CircularInt& CircularInt::operator+=(const int other)
{
    return *this;
}
CircularInt& CircularInt::operator-=(const CircularInt& other)
{
    return *this;
}
CircularInt& CircularInt::operator-=(const int other)
{
    return *this;
}

CircularInt& CircularInt::operator*=(const int other)
{
    return *this;
}
CircularInt& CircularInt::operator*=(const CircularInt& other)
{
    return *this;
}
