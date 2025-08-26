#include <iostream>
#include <memory>

int main()
{
    // Create a unique_ptr to an integer. Memory is managed automatically.
    std::unique_ptr<int> p = std::make_unique<int>(123);

    std::cout << "The value of a pointed-to object is: " << *p << '\n';

    // No need to manually delete p; memory is freed when p goes out of scope.
    return 0;
}