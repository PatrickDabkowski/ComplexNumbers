

#ifndef ComplexNumbers_hpp
#define ComplexNumbers_hpp
#include <iostream>
#include <stdio.h>
#include <math.h>
class ComplexNumber
{
    float re, im;
public:
    ComplexNumber operator+(ComplexNumber &rhs);
    ComplexNumber operator-(ComplexNumber &rhs);
    ComplexNumber operator*(ComplexNumber &rhs);
    ComplexNumber(float x, float y);
    ComplexNumber(const ComplexNumber &complexnumber);
    ComplexNumber();
    float get_re();
    float get_im();
    float modulus();
    void show();
    ~ComplexNumber()
    {
        std::cout<<"Object::Done";
    }
};


#endif
