#include <iostream>
#include "convert_temp.h"
#include "do_math.h"
#include "wierd_check.h"


int main()
{
    double firstNumber;
    double secondNumber;
    char basicMathoperator;

    std::cout << "What is the first number?  ";
    std::cin >> firstNumber;

    std::cout << "What is the second number?  ";
    std:: cin >> secondNumber;

    std::cout << "What is the operator? (correct operators: +, -, *, /)  ";
    std::cin >> basicMathoperator;

    DoMath math;

    std::cout << "result:  " << math.doMathBasic(firstNumber, secondNumber, basicMathoperator) << std::endl;

    double numberToOperate;
    char Operatorchar;

    std::cout << "What is the number to operate upon?  ";
    std::cin >> numberToOperate;

    std::cout << "What is the operator? (correct operators are: p, s, r, c, a, f)\n" << "p - power\n" << "s - square root\n";
    std::cout << "f - round down\n" << "r - round\n" << "c - round up\n" << "a - absolute value of x\n";
    std::cin >> Operatorchar;

    std::cout << "result:  " << math.doMathSpecial(numberToOperate, Operatorchar) << std::endl;

    Convert convert;

    double temperatureNumber;
    char tempOperator;

    std::cout << "What is the temperature number?  ";
    std::cin >> temperatureNumber;

    std::cout << "What is the Operator of the convetion? (correct operators C, F)  ";
    std::cin >> tempOperator;

    std::cout << "result:  " << convert.convertTemp(temperatureNumber, tempOperator) << std::endl;


    Wierd wierdFunction;

    std::string randomString;

    std::cout << "Type anything you like or not...   ";
    std::cin >> randomString;

    std::cout << wierdFunction.wierdCheck(randomString) << std::endl;

    return 0;
}