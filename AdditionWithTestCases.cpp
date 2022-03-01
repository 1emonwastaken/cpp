#include <iostream>
using namespace std;
int addition()
{
    int a, b, s;
    cin >> a;
    cin >> b;
    s = a + b;
    cout << s;
    return 0;
}
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        addition();
        cout << "\n";
    }
}
