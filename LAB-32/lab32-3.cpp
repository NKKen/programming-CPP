#include <iostream>

namespace MyNameSpace
{
    void myfunction();
}

void MyNameSpace::myfunction()
{
    std::cout << "Hello World from a function inside a namespace.\n";
}

int main()
{
    MyNameSpace::myfunction();
    return 0;
}