#include <iostream>
#include <memory>

int main()
{
    // Create a shared_ptr. The reference count is now 1.
    std::shared_ptr<int> p1 = std::make_shared<int>(123);
    std::cout << "Initial reference count: " << p1.use_count() << '\n';

    // Create two more shared_ptrs from the first one.
    // Each copy increases the reference count.
    std::shared_ptr<int> p2 = p1;
    std::cout << "Reference count after creating p2: " << p1.use_count() << '\n';

    std::shared_ptr<int> p3 = p1;
    std::cout << "Reference count after creating p3: " << p1.use_count() << '\n';

    std::cout << "\n--- Accessing the shared value ---\n";
    std::cout << "Value accessed through p1: " << *p1 << '\n';
    std::cout << "Value accessed through p2: " << *p2 << '\n';
    std::cout << "Value accessed through p3: " << *p3 << '\n';

    return 0;
}