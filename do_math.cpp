#include <iostream>
#include <cmath>
#include "do_math.h"

double DoMath::doMathBasic(double first, double second, char op)
{
    switch (op)
    {
    case '+':
        return first + second;
        break;
    case '-':
        return first - second;
        break;
    case '*':
        return first * second;
        break;
    case '/':
        return first / second;
        break;
    
    default:
        std::cout << "thats not a correct operator!\n";
        return 0;
        break;
    }

}

double DoMath::doMathSpecial(double number, char op)
{
    switch (op)
    {
    case 'P':
    case 'p':
        return std::pow(number, 2);
        break;
    case 'S':
    case 's':
        return std::sqrt(number);
        break;
    case 'F':
    case 'f':
        return std::floor(number);
        break;
    case 'R':
    case 'r':
        return std::round(number);
        break;
    case 'C':
    case 'c':
        return std::ceil(number);
        break;
    case 'a':
    case 'A':
        return std::abs(number);
        break;

    default:
        std::cout << "that's incorrect operator\n";
        break;
    }
}