#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; string name;
    cin >> n;
    map <string, int> entered_names;

    for (int i = 0; i < n; i++) {
        cin >> name;

        if (entered_names[name] >= 1) 
        {
            cout << name << entered_names[name] << endl;
            entered_names[name] += 1;
        }
        else 
        {
            entered_names[name] = 1;
            cout << "OK" << endl;
        }
    }
    return 0;
}
