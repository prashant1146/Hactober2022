Solution: Two Traversals

Approach:

Idea is to find the maximum product from both sides,i.e, once in a forwarding direction and another in the backward direction.

Following are the steps for the approach:

Iteration from left to right once to get maximum product for forward direction.
If zero is encountered, we set all variables again to initial value.
Iteration from right to left once again to get maximum product for backward direction.
If zero is encountered, we set all variables again to zero to find a new subarray with maximum product.
Once both iterations are completed, the overall result for the maximum product subarray of the given array is the maximum product obtained from both the iterations. 

Code:-
#include<bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int>& nums) {
    int maxLeft = nums[0];
    int maxRight = nums[0];
    
    int prod = 1;
    
    bool zeroPresent =  false;
    
    for(auto i:nums) {
        prod *= i;
        if(i == 0) {
            zeroPresent = true;
            prod = 1;
            continue;
        }
        maxLeft = max(maxLeft,prod);
    }
    
    prod = 1;
    
    for(int j=nums.size()-1;j>=0;j--) {
        prod *= nums[j];
        if(nums[j] == 0) {
            zeroPresent = true;
            prod = 1;
            continue;
        }
        maxRight = max(maxRight,prod);
    }
    
    if(zeroPresent) return max(max(maxLeft,maxRight),0);
    return max(maxLeft,maxRight);
}

int main() {
    vector<int> nums = {1,2,-3,0,-4,-5};
    cout<<"The maximum product subarray: "<<maxProductSubArray(nums);
    return 0;
}

Output: The maximum product subarray: 20

Time Complexity: O(N)

Reason: O(N) iteration two times for computing maximum product.

Space Complexity: O(1)

Reason: No extra data structures are used for computation.
