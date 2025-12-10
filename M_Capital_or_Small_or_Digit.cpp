#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    if ( 48 <=  (int)x && 57 >=  (int)x  )
    {
       cout << "IS DIGIT" << endl; 
    } else {
          cout << "ALPHA" << endl; 
    }
    
    return 0;
}