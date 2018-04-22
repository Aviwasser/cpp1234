#include "CircularInt.hpp"
/* Constructor */
CircularInt::CircularInt(int min , int max)
{
    min_range = min;
    max_range = max;
    current_range = min;
};
CircularInt::CircularInt(const CircularInt& other)
{
    min_range = other.min_range;
    max_range = other.max_range;
    current_range = other.current_range;
};
/* Arithmetic operators */
CircularInt& CircularInt::operator=(const int num)
{
    this->current_range = num;
    (*this) += 0;
    return *this;
}
CircularInt& CircularInt::operator=(const CircularInt& c)
{
    this-> min_range = c.min_range;
    this->max_range = c.max_range;
    this->current_range = c.current_range;
    return *this;
}
const CircularInt operator+(const int num,const CircularInt& c )
{
    CircularInt copy(c);
   
    return copy;
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
const CircularInt operator-(const int num, CircularInt const& c )
{
    CircularInt copy(c);

    return copy;
}
const CircularInt operator-(const CircularInt& c , const int num)
{
    CircularInt copy(c);

    return copy;
}
const CircularInt operator-(const CircularInt& c1 , const CircularInt& c2)
{
    CircularInt temp(c1);

    return temp;

}
CircularInt CircularInt::operator-()
{
    CircularInt copy(*this);

    return copy;
}
const CircularInt operator*(const CircularInt& c , const int num)
{
    CircularInt copy(c);

    return copy;
}
const CircularInt operator*(const int num , const CircularInt& c)
{
    CircularInt copy(c);

    return copy;
}
const CircularInt operator/(CircularInt const& c , const int num)
{
    CircularInt copy(c);

    return copy;
}
const CircularInt operator%(const CircularInt& c , const int num)
{
    CircularInt copy(c);

    return copy;
}
CircularInt& CircularInt::operator++()
{
    return *this;
}
CircularInt CircularInt::operator++(const int other)
{
    CircularInt copy(*this);
    return copy;
}
CircularInt& CircularInt::operator--()
{
    return *this;
}
CircularInt CircularInt::operator--(const int other)
{
    CircularInt copy(*this);
    return copy;
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
CircularInt& CircularInt::operator+=(const int other)
{
    return *this;
}
CircularInt& CircularInt::operator+=(const CircularInt& other)
{
    return *this;
}
CircularInt& CircularInt::operator-=(const int other)
{
    return *this;
}
CircularInt& CircularInt::operator-=(const CircularInt& other)
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
CircularInt& CircularInt::operator/=(const int num)
{
  /*  if(current_range % num == 0)
    {

    }
    else 
    {
        stringstream ss;
        string s = ss.str();
        throw s;
    }*/
    return *this;
}
CircularInt& CircularInt::operator%=(const int other)
{
    return *this;
}
/* IOstream */
ostream& operator<< (ostream& os ,CircularInt const& obj)
{
    return os;
}
istream& operator>>(istream& input, CircularInt& obj)
{
    return input;
}
