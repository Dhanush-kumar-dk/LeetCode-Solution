
 leetcode solution
  class Solution {
  public:
      int reverse(int x) {
  {
      long res;
      res = 0;
      while (x)
      {
          res = res * 10 + x % 10;
          x /= 10;
      }
      res = (res < INT_MIN || res > INT_MAX ) ? 0 : res;
      return (res);
  }

     }
 };

##

#include <iostream>
using namespace std;
int main()
{
    int x;
    long res;
    res = 0;
    cin >> x;
    while (x)
    {
        res = res * 10 + x % 10;
        x /= 10;
    }
    cout << res << endl;
    return (0);
}
