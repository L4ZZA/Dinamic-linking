#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define MATHLIBRARY_API __declspec(dllexport)
#else
#define MATHLIBRARY_API __declspec(dllimport)
#endif

namespace Math
{
    class MATHLIBRARY_API Fibonacci
    {
    public:
        Fibonacci(const unsigned long long a, const unsigned long long b);
        ~Fibonacci();

    public:
        static unsigned long long previous_;  // Previous value, if any
        static unsigned long long current_;   // Current sequence value
        static unsigned index_;               // Current seq. position

        bool Next();
        unsigned long long Current();
        unsigned Index();

    private:

    };
}