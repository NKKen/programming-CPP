#include <iostream>

int main()
{
    
    try
    {
        std::cout << "Throwing an int exception..." << '\n';
        throw 123;
    }
    catch (int ex)
    {
        std::cout << "Integer exception: " << ex << " caught and handled." << '\n';
    }

    std::cout << "\n--- Demonstrate catching a double exception ---\n";

    
    try
    {
        std::cout << "Throwing a double exception..." << '\n';
        throw 456.789;
    }
    catch (double ex)
    {
        std::cout << "Double exception: " << ex << " caught and handled." << '\n';
    }

    return 0;
}