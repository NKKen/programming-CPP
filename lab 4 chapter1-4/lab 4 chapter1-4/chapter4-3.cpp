#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3
    if (m.count("aybabtu"))
    {
        // key exists
    }
    for (auto x : m)
    {
        cout << x.first << " " << x.second << "\n";
    }
}