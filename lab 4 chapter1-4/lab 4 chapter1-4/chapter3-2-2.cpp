#include <iostream>
using namespace std;

int main()
{
    struct P
    {
        int x, y;
        bool operator<(const P &p)
        {
            if (x != p.x)
                return x < p.x;
            else
                return y < p.y;
        }
    };
    P a = {1, 2}, b = {2, 3};
    if (a < b)
        cout << "true";
    else
        cout << "false";
}



