#include <iostream>
#include <set>

int main()
{


    std::set<int> s = {2, 5, 6, 8};
    std::cout << s.size() << "\n"; // 4
    for (int x : s)
    {
        std::cout << x << "\n";
    }
    return 0;
}