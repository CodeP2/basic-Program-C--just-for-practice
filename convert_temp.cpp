#include <iostream>
#include "convert_temp.h"


double Convert::convertTemp(double number, char op)
{
    if(op=='c' || 'C'){
        std::cout << "the convertion from F to C equals to: ";
        return (number - 32) / 1.8;
    }
    else if(op=='f' || op=='F'){
        std::cout << "The convertion from C to F equals to: ";
        return (number + 32) * 1.8;
    }
    else{
        std::cout << "That's an incorrect operator!" << std::endl;
    }
}