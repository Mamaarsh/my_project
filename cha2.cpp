#include <iostream>
#include <string.h>

using namespace std;

int main()
{   
    string a;
    int b;
    cin >> a;

    b = a.length();

    for(int i=0;i<b;i++)
    {
        cout << a[i] << ": ";
        for(int j=0;j<(a[i]-48);j++)
        {
            cout << a[i];
        }
        cout << "\n";
    }

    return 0;
}