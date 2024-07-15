#include "sums.h"

/**
 * Рекурсивная функция для генерации всех возможных сумм для заданной глубины и хранения их в мапе.
 * 
 * @param depth     Текущая глубина рекурсии, отслеживает количество уже выбранных цифр.
 * @param sum       Текущая сумма цифр на данной глубине.
 * @param sums      Мапа, хранит количество способов достижения каждой возможной суммы.
 * @param base      Основание системы счисления и количество цифр.
 * @param midNum    Количество цифр в половине числа.
 */
void generateSums(uint16_t depth, uint16_t sum, std::unordered_map<uint16_t, uint64_t>& sums, uint16_t base, uint16_t midNum) {
    if (depth == midNum) {
        sums[sum]++;
        return;
    }
    for (uint16_t i = 0; i < base; ++i) {
        generateSums(depth + 1, sum + i, sums, base, midNum);
    }
}

/**
 * Расчет 'красивых' чисел для 13-значного числа в 13-ричной системе счисления.
 * 
 * @param base  Основание системы счисления и количество цифр.
 * @return      Количество 'красивых' чисел.
 */
uint64_t getAnswer(const uint16_t base)
{
    if (base == 0) return 0;
    std::unordered_map<uint16_t, uint64_t> sums;

    // Длина половины числа (6 цифр).
    const uint16_t midNum = base / 2u; 
    
    // Генерируем суммы для первых и последних шести цифр.
    generateSums(0, 0, sums, base, midNum);

    uint64_t count = 0;

    // Подсчет "красивых" чисел.
    for (const auto& pair : sums) {
        uint64_t m = pair.second;
        count += m * m;
    }

    // Умножаем результат на 13, так как центральная цифра может быть любой.
    if (base != midNum * 2) count *= base;

    return count;
}