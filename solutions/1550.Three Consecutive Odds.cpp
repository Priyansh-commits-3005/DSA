#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        // sliding window
        int odd_flag = 0; // 0 is true
        for (int i = 1; i < arr.size() - 1; i++)
        {
            if (arr[i - 1] % 2 != 0 && arr[i + 1] % 2 != 0 && arr[i] % 2 != 0)
            {
                odd_flag = 1;
                break;
            }
            else
            {
                odd_flag = 0;
            }
        }
        if (odd_flag == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

// optimizes solution
class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int cnt = 0;
        for (int x : arr)
        {
            if (x & 1)
            {
                if (++cnt == 3)
                {
                    return true;
                }
            }
            else
            {
                cnt = 0;
            }
        }
        return false;
    }
};