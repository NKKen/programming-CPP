#include <iostream>
#include <algorithm>
#include <set>
#include <iterator>
#include <vector>
#include <string>
#include <ranges>




int main()
{
    std::set<int> s = {10, 50, 20, 40, 30};
    int x = 40;
    int y = 99;

    if (s.empty()) {
        std::cout << "The set is empty." << std::endl;
        return 1;
    }

    std::cout << "Elements in the set (sorted automatically):" << std::endl;
    for (int element : s) {
        std::cout << element << " ";
    }
    std::cout << "\n\n";

    std::cout << "First element: " << *s.begin() << std::endl;
    std::cout << "Last element: " << *s.rbegin() << std::endl;
    std::cout << "\n";

    std::cout << "Searching for value " << x << "..." << std::endl;
    auto it_x = s.find(x);
    if (it_x != s.end()) {
        std::cout << "Value " << *it_x << " was found in the set." << std::endl;
    } else {
        std::cout << "Value " << x << " was not found." << std::endl;
    }
    std::cout << "\n";

    std::cout << "Searching for value " << y << "..." << std::endl;
    auto it_y = s.find(y);
    if (it_y == s.end()) {
        std::cout << "Value " << y << " was not found, as expected." << std::endl;
    }

    return 0;
}