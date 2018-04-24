#include <iostream>
#include "lookup_gen.h"

using namespace std;

int main()
{
    const std::array<uint16_t, 2048> lookup_table = lookup_table_expand<uint16_t, 2048>::values;
    for(int i: lookup_table)
        cout << i << " ";
    
    return 0;
}
