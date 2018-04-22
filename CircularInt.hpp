#pragma once
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class CircularInt{
private:
    
public:
    /* Variable */
    int first; 
    int last;
    int temp;
    /* Constructor */
    CircularInt(int , int);
    CircularInt(CircularInt&);
    CircularInt& operator=(int);
    CircularInt& operator=(CircularInt&);
    friend const CircularInt operator+(int, CircularInt&);
    friend const CircularInt operator+(CircularInt&, int);
    friend const CircularInt operator+(CircularInt const&, CircularInt const&);
    friend const CircularInt operator-(int, CircularInt const&);
    friend const CircularInt operator-(CircularInt&, int);
    friend const CircularInt operator-(CircularInt& , CircularInt&);
    CircularInt operator-();
    friend const CircularInt operator*(CircularInt& , int);
    friend const CircularInt operator*(int, CircularInt& );
    friend const CircularInt operator/(CircularInt const& , int);
    friend const CircularInt operator%(CircularInt&, const int);
    CircularInt& operator++();
    CircularInt operator++(int);
    CircularInt& operator--();
    CircularInt operator--(int);
    friend bool operator==(CircularInt, CircularInt );
    friend bool operator!=(const CircularInt c1 , const CircularInt c2); 
    friend bool operator>(const CircularInt c1 , const CircularInt c2); 
    friend bool operator<(const CircularInt c1 , const CircularInt c2);  
    friend bool operator>=(const CircularInt c1 , const CircularInt c2); 
    friend bool operator<=(const CircularInt c1 , const CircularInt c2); 
    /* Compound assignment operators */
    CircularInt& operator+=(const int other);
    CircularInt& operator+=(const CircularInt& other);
    CircularInt& operator-=(const int other);
    CircularInt& operator-=(const CircularInt& other);
    CircularInt& operator*=(const int other);
    CircularInt& operator*=(const CircularInt& other);  
    CircularInt& operator/=(const int other);
    CircularInt& operator%=(const int other);
    /* IOstream */
    friend ostream& operator<<(std::ostream& os, CircularInt const& obj);
    friend istream& operator>>(istream& input, CircularInt& obj);
};
