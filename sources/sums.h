#pragma once

#include <unordered_map>
#include <cstdint>

void generateSums(uint16_t depth, uint16_t sum, std::unordered_map<uint16_t, uint64_t>& sums, uint16_t base, uint16_t midNum);
uint64_t getAnswer(const uint16_t base);