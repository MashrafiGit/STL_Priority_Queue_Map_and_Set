#include <bits/stdc++.h>
using namespace std;

int main()
{

    map<string, int> mp;

    mp["tamim"] = 5;
    mp["hamim"] = 3;
    mp["nazim"] = 1;
    mp["abid"] = 0;

    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    cout << endl;

    if (mp.count("abid"))
        cout << "It has" << endl;
    else
        cout << "It hasn't" << endl;

    return 0;
}