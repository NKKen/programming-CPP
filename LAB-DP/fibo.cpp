#include <iostream>
using namespace std;

void CHANGE(int n) {
    int C[n+1], min;
    int d[4] = {1, 4, 5, 10}, k = 4;
    C[0] = 0; // base case

    for (int p = 1; p <= n; p++) {
        min = n;
        for (int i = 0; i < k; i++) {
            if (p >= d[i]) {
                if (C[p - d[i]] + 1 < min) {
                    min = C[p - d[i]] + 1;
                }
            }
        }
        C[p] = min;
    }

    // แสดงผลจำนวนเหรียญขั้นต่ำแต่ละค่า
    for (int i = 0; i <= n; i++) {
        cout << "C[" << i << "] = " << C[i] << endl;
    }
}

int main() {
    int n;
    cout << "Enter amount: ";
    cin >> n;
    CHANGE(n);
    return 0;
}
