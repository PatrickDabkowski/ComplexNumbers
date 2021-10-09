

#include "ComplexNumbers.hpp"

float ComplexNumber::modulus()
{
    return sqrt((re*re)+(im*im));
};
void ComplexNumber::show()
   {
    if(re>0)
    {
        if(im>0)
        std::cout<<re<<" + "<<im<<"i"<<std::endl;
        if(im<0)
        std::cout<<re<<" "<<im<<"i"<<std::endl;
    }
   if(re<0)
   {
       if(im<0)
           std::cout<<" "<<re<<" "<<im<<"i"<<std::endl;
       if(im>0)
       std::cout<<" "<<re<<" +"<<im<<"i"<<std::endl;
   }
       float m= modulus();
       std::cout<<"Modulus: "<< m<<std::endl;
    if(re==0)
    {
        if(im!=0)
            std::cout<<im<<"i"<<std::endl;
    }
    }
ComplexNumber::ComplexNumber(float x, float y)
{
    re=x;
    im=y;
}
ComplexNumber::ComplexNumber(const ComplexNumber &complexnumber)
{
    re= complexnumber.re;
    im= complexnumber.im;
}
ComplexNumber::ComplexNumber()
{
    re=1;
    im=1;
    show();
}
float ComplexNumber::get_re()
{
    return re;
}
float ComplexNumber::get_im()
{
    return im;
}
ComplexNumber ComplexNumber::operator+(ComplexNumber &rhs)
{
    ComplexNumber ncn;
    ncn.re= re+ rhs.get_re();
    ncn.im= im+ rhs.get_im();
    return ncn;
}
ComplexNumber ComplexNumber::operator-(ComplexNumber &rhs)
{
    ComplexNumber ncn;
    ncn.re= re- rhs.get_re();
    ncn.im= im- rhs.get_im();
    return ncn;
}
ComplexNumber ComplexNumber::operator*(ComplexNumber &rhs)
{
    ComplexNumber ncn;
    ncn.re= (re*rhs.get_re())-(im*rhs.get_im());
    ncn.im= (re*rhs.get_im())+(rhs.get_re()*im);
    return ncn;
}

