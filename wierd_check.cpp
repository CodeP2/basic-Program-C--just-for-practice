#include <iostream>
#include "wierd_check.h"


std::string Wierd::wierdCheck(std::string myString)
{
    std::string message = myString.empty() ? "The string is empty" : "the string is not empty";

    return message;
}