//CODE TO FIND IF A GIVEN INTEGER IS PRIME OR NOT.
#include <iostream>
using namespace std;
int main()
{
    int i, t, factors = 0;
    cin >> t;
    for(i = 1; i <= t; i++)
    {
        if(t % i == 0)
        {
            factors++;
        }
    }
    if(factors == 2)
    {
        cout << "This number is prime.";
    }
    else
    {
        cout << "This number isn't prime.";
    }
}
