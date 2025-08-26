#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<int, std::string> mymap = {
        {1, "First"},
        {2, "Second"},
        {3, "Third"},
        {4, "Fourth"}
    };

    for (const auto& el : mymap)
    {
        std::cout << el.first << ' ' << el.second << '\n';
    }
}