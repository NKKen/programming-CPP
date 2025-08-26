#include <iostream>

int main()
{
    // Variable declarations
    int x = 123;
    double d = 456.789;
    bool b = true;

    // int to double
    double doubleresult = static_cast<double>(x);
    std::cout << "Int to double: " << doubleresult << '\n';

    // double to int
    int intresult = static_cast<int>(d);
    std::cout << "Double to int: " << intresult << '\n';

    // int to bool
    bool boolresult = static_cast<bool>(x);
    std::cout << "Int to bool: " << boolresult << '\n';

    return 0;
}