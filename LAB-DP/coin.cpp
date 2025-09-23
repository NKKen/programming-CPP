#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void minCoins(int n, vector<int> coins) {
    vector<int> dp(n + 1, INT_MAX);   // เก็บจำนวนเหรียญน้อยที่สุด
    vector<int> lastCoin(n + 1, -1); // เก็บว่าใช้เหรียญอะไรในการทอน

    dp[0] = 0; // base case

    for (int i = 1; i <= n; i++) {
        for (int c : coins) {
            if (i - c >= 0 && dp[i - c] != INT_MAX) {
                if (dp[i - c] + 1 < dp[i]) {
                    dp[i] = dp[i - c] + 1;
                    lastCoin[i] = c; // เก็บว่าใช้เหรียญ c
                }
            }
        }
    }

    if (dp[n] == INT_MAX) {
        cout << "Cannot make change for " << n << endl;
        return;
    }

    // แสดงจำนวนเหรียญทั้งหมด
    cout << "Minimum coins needed: " << dp[n] << endl;

    // แสดงเหรียญที่ใช้ (ย้อนรอยจาก lastCoin)
    cout << "Coins used: ";
    int amount = n;
    while (amount > 0) {
        cout << lastCoin[amount] << " ";
        amount -= lastCoin[amount];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter amount: ";
    cin >> n;

    vector<int> coins = {1, 4, 5, 10}; // เหรียญที่ใช้ได้

    minCoins(n, coins);

    return 0;
}
