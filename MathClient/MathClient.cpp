// MathClient.cpp : Client app for MathLibrary DLL.
#include "stdafx.h"
#include <iostream>
#include "MathLibrary.h"
#include "Fibonacci.h"

int main()
{
    Math::Fibonacci f(1, 1);
    do
    {
        std::cout << f.Index() << ": "
            << f.Current() << std::endl;
    } while (f.Next());
    std::cout << f.Index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;


    //// Initialize a Fibonacci relation sequence.
    //Math::fibonacci_init(1, 1);
    //// Write out the sequence values until overflow.
    //do {
    //    std::cout << Math::fibonacci_index() << ": "
    //        << Math::fibonacci_current() << std::endl;
    //} while (Math::fibonacci_next());
    //// Report count of values written before overflow.
    //std::cout << Math::fibonacci_index() + 1 <<
    //    " Fibonacci sequence values fit in an " <<
    //    "unsigned 64-bit integer." << std::endl;
}