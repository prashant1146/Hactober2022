#include <bits/stdc++.h>
using namespace std;


int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=nums.size()-1;i>=2;i--)
        {
            if(nums[i]<nums[i-1]+nums[i-2])
            {
                return nums[i]+nums[i-1]+nums[i-2];
            }
            
        }
        return 0;
}
int main()
{
    vector<int> nums;
    nums.push_back(5);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(6);
    cout<<"The largest perimeter of triangle is "<<" "<<largestPerimeter(nums)<<endl;

}