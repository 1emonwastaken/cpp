//CODE TO FIND PERFECT NUMBERS TILL A NUMBER
#include <iostream>
using namespace std;
int main()
{
    int t = 99999999;
    cin >> t;
  cout << "\n\n Find the perfect numbers between 1 and " << t << ":\n";
  cout << "------------------------------------------------\n";
  int i = 1, u = 1, sum = 0;
  cout << "\n The perfect numbers between 1 to " << t << " are: \n";
  while (i <= t)
  {
    while (u <= t)
    {
      if (u < i)
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout << i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }
  return 0;
}
