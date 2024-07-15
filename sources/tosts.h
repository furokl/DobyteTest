#pragma once

#include <cstdint>

namespace Tosts
{
    constexpr int tostNum = 8;
}

uint64_t tostBase0(int base);
uint64_t tostBase1(int base);
uint64_t tostBase2(int base);
uint64_t tostBase3(int base);
uint64_t tostBase4(int base);
uint64_t tostBase5(int base);
uint64_t tostBase6(int base);
uint64_t tostBase7(int base);

uint64_t callTostBase(int base);
void printTostLog();