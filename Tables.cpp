#include <iostream>
using namespace std;

int main()
{
    int i, t, j;
    int num[t];


    cout << "Tables generator \n" << "Enter the number you want the tables for: \n";
    cin >> j;

    cout << "Enter how long you want the table to be:" << endl;
    cin >> t;


    for(i  = 1; i < t + 1; i++)
    {
        num[i] = i;
        cout << j << " x " << i << " = " << i *j << endl;
    }
}
