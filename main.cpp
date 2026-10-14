#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 double number = 12.75;


    int c_style = (int)number;
    int cpp_style = static_cast<int>(number);

    printf("C-style cast: %d\n", c_style);
    
    printf("C++ static_cast: %d\n", cpp_style);

    return 0;
}