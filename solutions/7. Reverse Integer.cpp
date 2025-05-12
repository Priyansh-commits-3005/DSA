#include <iostream>
using namespace std;
class Solution
{
public:
    int reverse(long int x)
    {

        long int rev_x = 0;
        int n;
        if (x != 0)
        {
            n = floor(log10(abs(x)) + 1);
        }
        else
        {
            n = 1;
        }
        cout << "n: " << n << endl;
        for (int i = 0; i < n; i++)
        {
            int temp = x % 10;
            x /= 10;
            cout << "temp :" << temp << endl;
            cout << "next step :" << temp * pow(10, (n - i - 1)) << endl;
            rev_x += temp * pow(10, (n - i - 1));
        }
        if (rev_x < INT_MAX && rev_x > INT_MIN)
        {
            return rev_x;
        }
        else
        {
            return 0;
        }

        // learnings
        // 1. counting digits
        // 2.handling edge case of 0 , 3. using pow(),4. using int_max and checking values after  , 5.handlign test cases ,
        // 6. when to use long int and when to use int the different limits to each
    }
    int optimized_solution(long int x)
    {
        // leaving space for the optimized solution
    }
};