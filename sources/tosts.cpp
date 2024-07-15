#include "tosts.h"

#include "sums.h"
#include <iostream>

uint64_t tostBase0(int base)
{
    return 0;
}

uint64_t tostBase1(int base)
{
    return 1;
}

uint64_t tostBase2(int base)
{
    uint64_t result = 0;
    
    for (int a = 0; a < base; ++a)
        for (int b = 0; b < base; ++b)
            if (a == b) result++;

    return result;
}

uint64_t tostBase3(int base)
{
    uint64_t result = 0;
    
    for (int a = 0; a < base; ++a)
        for (int c = 0; c < base; ++c)
            if (a == c) result++;

    result *= base;
    return result;
}


uint64_t tostBase4(int base)
{
    uint64_t result = 0;
    
    for (int a = 0; a < base; ++a)
        for (int b = 0; b < base; ++b)
            for (int c = 0; c < base; ++c)
                for (int d = 0; d < base; ++d)
                    if (a + b == c + d) result++;
    
    return result;
}

uint64_t tostBase5(int base)
{
    uint64_t result = 0;
    
    for (int a = 0; a < base; ++a)
        for (int b = 0; b < base; ++b)
            for (int c = 0; c < base; ++c)
                for (int d = 0; d < base; ++d)
                    if (a + b == c + d) result++;

    result *= base;
    return result;
}

uint64_t tostBase6(int base)
{
    uint64_t result = 0;
    
    for (int a = 0; a < base; ++a)
        for (int b = 0; b < base; ++b)
            for (int c = 0; c < base; ++c)
                for (int d = 0; d < base; ++d)
                    for (int e = 0; e < base; ++e)
                        for (int f = 0; f < base; ++f)
                            if (a + b + c == d + e + f) result++;
    
    return result;
}

uint64_t tostBase7(int base)
{
    uint64_t result = 0;
    
    for (int a = 0; a < base; ++a)
        for (int b = 0; b < base; ++b)
            for (int c = 0; c < base; ++c)
                for (int d = 0; d < base; ++d)
                    for (int e = 0; e < base; ++e)
                        for (int f = 0; f < base; ++f)
                            if (a + b + c == d + e + f) result++;

    result *= base;
    return result;
}

uint64_t callTostBase(int base) {
    switch (base) {
    case 0: return tostBase0(base);
    case 1: return tostBase1(base);
    case 2: return tostBase2(base);
    case 3: return tostBase3(base);
    case 4: return tostBase4(base);
    case 5: return tostBase5(base);
    case 6: return tostBase6(base);
    case 7: return tostBase7(base);
    default: return -1;
    }
}

void printTostLog()
{
    for (int base = 0; base < Tosts::tostNum; ++base) {
        if (callTostBase(base) == getAnswer(base)) {
            std::cout << "Test_" << base << " Success" << '\n';
        } else {
            std::cerr << "Test_" << base << " Failed" << '\n';
        }
    }
}