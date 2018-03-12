#include "stdafx.h"
#include <utility>
#include <limits.h>
#include "Core.h"

namespace Math
{
    unsigned long long Fibonacci::previous_;  // Previous value, if any
    unsigned long long Fibonacci::current_;   // Current sequence value
    unsigned Fibonacci::index_;               // Current seq. position

    // Initialize a Fibonacci relation sequence
    // such that F(0) = a, F(1) = b.
    // This function must be called before any other function.
    Fibonacci::Fibonacci(const unsigned long long a, const unsigned long long b)
    {
        index_ = 0;
        current_ = a;
        previous_ = b; // see special case when initialized
    }

    Fibonacci::~Fibonacci()
    { }


    // Produce the next value in the sequence.
    // Returns true on success, false on overflow.
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

    // Get the current value in the sequence.
    unsigned long long Fibonacci::Current()
    {
        return current_;
    }

    // Get the current index position in the sequence.
    unsigned Fibonacci::Index()
    {
        return index_;
    }
}