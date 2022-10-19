// Name of problem : 152. Maximum Product Subarray
// Problem link : https://leetcode.com/problems/maximum-product-subarray/
// Contributed by Sanjoy Saha [github : SanjoySaha24]

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int maxLeft = nums[0];
        int maxRight = nums[0];

        int prod = 1;

        bool zeroPresent = false;

        for (auto i : nums)
        {
            prod *= i;
            if (i == 0)
            {
                zeroPresent = true;
                prod = 1;
                continue;
            }
            maxLeft = maxProduct(maxLeft, prod);
        }

        prod = 1;

        for (int j = nums.size() - 1; j >= 0; j--)
        {
            prod *= nums[j];
            if (nums[j] == 0)
            {
                zeroPresent = true;
                prod = 1;
                continue;
            }
            maxRight = maxProduct(maxRight, prod);
        }

        if (zeroPresent)
            return maxProduct(maxProduct(maxLeft, maxRight), 0);
        return maxProduct(maxLeft, maxRight);
    }
};