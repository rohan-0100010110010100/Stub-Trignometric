#include <iostream>
#include "lookup_gen.h"
#include <math.h>
using namespace std;

constexpr int fib(const int i)
{
    constexpr auto srt5 = sqrt(5);
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;

    return static_cast<int>((pow(1 + srt5, i) - pow(1 - srt5, i)) / (pow(2, i) * srt5));
}
int main()
{
    const std::array<uint16_t, 2048> lookup_table = lookup_table_expand<uint16_t, 2048>::values;
    for(int i: lookup_table)
        cout << i << " ";
    cout << fib(2);
    
    return 0;
}
