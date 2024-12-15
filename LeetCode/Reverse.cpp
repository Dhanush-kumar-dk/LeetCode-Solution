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