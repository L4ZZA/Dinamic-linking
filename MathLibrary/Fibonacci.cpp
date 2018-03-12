#include "stdafx.h"
#include <utility>
#include <limits.h>
#include "Fibonacci.h"

namespace Math
{
    unsigned long long Fibonacci::previous_;  // Previous value, if any
    unsigned long long Fibonacci::current_;   // Current sequence value
    unsigned Fibonacci::index_;               // Current seq. position

    Fibonacci::Fibonacci(const unsigned long long a, const unsigned long long b)
    {
        index_ = 0;
        current_ = a;
        previous_ = b; // see special case when initialized
    }

    Fibonacci::~Fibonacci()
    { }


    bool Fibonacci::Next()
    {
        // check to see if we'd overflow result or position
        if ((ULLONG_MAX - previous_ < current_) ||
            (UINT_MAX == index_))
        {
            return false;
        }

        // Special case when index == 0, just return b value
        if (index_ > 0)
        {
            // otherwise, calculate next sequence value
            previous_ += current_;
        }
        std::swap(current_, previous_);
        ++index_;
        return true;
    }

    unsigned long long Fibonacci::Current()
    {
        return current_;
    }

    unsigned Fibonacci::Index()
    {
        return index_;
    }
}