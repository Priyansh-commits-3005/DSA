
class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {
        // need pointer will use i and j as iterators through nums1 and num2 and then use k for placing
        //  for any given place we will use comparison between nums[i] and nums[j] for which one is bigger and we will place that
        //  since the lists are decsending , starting at end makes it much better as the largest of both elements would be at the end

        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;

        while (j >= 0)
        {
            if (i >= 0 && nums1[i] > nums2[j])
            {
                nums1[k] = nums1[i];
                i--;
            }
            else
            {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }
    }
};