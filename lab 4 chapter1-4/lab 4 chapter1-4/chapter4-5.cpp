#include <iostream>
#include <bitset>
#include <deque>
#include <stack>
#include <queue>
#include <vector>
#include <functional>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

int main() {
    cout << "=== Bitset Example ===" << endl;
    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << "s[4]: " << s[4] << endl;
    cout << "s[5]: " << s[5] << endl;

    bitset<10> s2(string("0010011010"));
    cout << "s2[4]: " << s2[4] << endl;
    cout << "s2[5]: " << s2[5] << endl;
    cout << "Number of ones: " << s2.count() << endl;

    bitset<10> a(string("0010110110"));
    bitset<10> b(string("1011011000"));
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;

    cout << "\n=== Deque Example ===" << endl;
    deque<int> d;
    d.push_back(5);
    d.push_back(2);
    d.push_front(3);
    d.pop_back();
    d.pop_front();
    
    cout << "Deque elements: ";
    for (int num : d) {
        cout << num << " ";
    }
    cout << endl;

    cout << "\n=== Stack Example ===" << endl;
    stack<int> st;
    st.push(3);
    st.push(2);
    st.push(5);
    cout << "Top element: " << st.top() << endl;
    st.pop();
    cout << "Top element after pop: " << st.top() << endl;

    cout << "\n=== Queue Example ===" << endl;
    queue<int> q;
    q.push(3);
    q.push(2);
    q.push(5);
    cout << "Front element: " << q.front() << endl;
    q.pop();
    cout << "Front element after pop: " << q.front() << endl;

    cout << "\n=== Priority Queue Example ===" << endl;
    priority_queue<int> pq;
    pq.push(3);
    pq.push(5);
    pq.push(7);
    pq.push(2);
    cout << "Top element: " << pq.top() << endl;
    pq.pop();
    cout << "Top element after pop: " << pq.top() << endl;
    pq.pop();
    pq.push(6);
    cout << "Top element after push(6): " << pq.top() << endl;
    pq.pop();

    priority_queue<int, vector<int>, greater<int>> min_pq;
    min_pq.push(3);
    min_pq.push(5);
    min_pq.push(7);
    min_pq.push(2);
    cout << "Min priority queue top: " << min_pq.top() << endl;

    cout << "\n=== Policy-based Data Structures Example ===" << endl;
    typedef tree<int, null_type, less<int>, rb_tree_tag,
                 tree_order_statistics_node_update> indexed_set;
    
    indexed_set iset;
    iset.insert(2);
    iset.insert(3);
    iset.insert(7);
    iset.insert(9);
    
    auto x = iset.find_by_order(2);
    cout << "Element at position 2: " << *x << endl;
    
    cout << "Position of 7: " << iset.order_of_key(7) << endl;
    
    cout << "Position of 6: " << iset.order_of_key(6) << endl;
    cout << "Position of 8: " << iset.order_of_key(8) << endl;

    return 0;
}