#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    std::vector<int> v;
    v.push_back(3);       // [3]
    v.push_back(2);       // [3,2]
    v.push_back(5);       // [3,2,5]
    cout << v[0] << "\n"; // 3
    cout << v[1] << "\n"; // 2
    cout << v[2] << "\n"; // 5

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }

    string a = "hatti";
    string b = a + a;          
    b[5] = 'v';                
    string c = b.substr(3, 4); 
    int pos = b.find("tti");  

    return 0;
}

