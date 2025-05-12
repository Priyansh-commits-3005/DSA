#include <iostream>
using namespace std;
class Solution
{
public:
    bool isPalindrome(int x)
    {
        long rev = 0;
        if (x >= 0)
        {

            int x_temp = x;
            while (x_temp != 0)
            {
                rev = rev * 10 + x_temp % 10;
                x_temp /= 10;
            }
        }
        return x == rev;
    }
};