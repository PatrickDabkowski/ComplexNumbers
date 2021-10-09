//
//  main.cpp
//  Complex Numbers
//
//  Created by Patryk Dąbkowski on 03/05/2020.
//  Copyright © 2020 Patryk Dąbkowski. All rights reserved.
//

#include <iostream>
#include "ComplexNumbers.hpp"
int main(int argc, const char * argv[]) {
    //ComplexNumber z1(1,-5);
    //z1.show();
    //ComplexNumber z2;
   // ComplexNumber z3(4,3);
   // z3.show();
    //ComplexNumber z1(0,1);
    //z1.show();
    ComplexNumber z1;
    ComplexNumber z2(3,4);
    ComplexNumber z3(z2);
    ComplexNumber z4= z1+z3;
    z4.show();
    ComplexNumber z6= z1*z3;
    z6.show();
    return 0;
}

