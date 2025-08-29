#include <bits/stdc++.h>
using namespace std;

int main()
{

    priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(30);
    pq.push(10);
    pq.push(2);

    cout << pq.top() << endl;
    pq.pop();
    cout << pq.top() << endl;
    
    if (!pq.empty())
        cout << "Size:" << pq.size() << endl;


    return 0;
}