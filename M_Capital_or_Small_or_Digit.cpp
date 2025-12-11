#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if (48 <= (int)x && 57 >= (int)x)
    {
        cout << "IS DIGIT" << endl;
    }
    else
    {
        cout << "ALPHA" << endl;
        if (65 <= (int)x && 90 >= (int)x)
        {
            cout << "IS CAPITAL";
        } else if (97 <= (int)x && 122 >= (int)x) {
            cout << "IS SMALL";
        }
    }

    return 0;
}