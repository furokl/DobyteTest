#include <iostream>
// #include <chrono>

#include "sums.h"
// #include "tosts.h"

int main()
{
    // printTostLog();
    
    // auto start = std::chrono::high_resolution_clock::now();
    uint64_t count = getAnswer(13);
    // auto end = std::chrono::high_resolution_clock::now();
    // std::chrono::duration<double> duration = end - start;

    std::cout << "Count of beautiful numbers: " << count << '\n';
    // std::cout << "Time taken: " << duration.count() << " seconds" << '\n';

    std::cout << "Press any key to continue . . . ";
    (void)std::getchar();

    return 0;
}
