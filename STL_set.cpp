#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    set<int> s;

    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    for (auto it = s.begin(); it != s.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl;

    if (s.count(40))
        cout << "40 is available" << endl;
    else
        cout << "40 ain't available" << endl;

    return 0;
}