#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
  
    //recursive approach to find the subsets
    void find(vector<int> nums, int index, vector<int> ans, vector<vector<int>>& result){
        if(index>=nums.size()){
            result.push_back(ans);
            return;
        }
        
        //exclude the element
        find(nums,index+1,ans,result);
        
        //include the element
        ans.push_back(nums[index]);
        find(nums,index+1,ans,result);
    }
    
    void subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int>ans;
        find(nums,0,ans,result);
        
        print(result);
        return;
    }
    
    //printing the subsets of the input vector
    void print(vector<vector<int>> vec){
        for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            cout << vec[i][j] << " ";
        cout << endl;
    }
    }
};


int main()
{
    Solution obj;
    vector<int> nums = {1,2,3};
    obj.subsets(nums);

    return 0;
}
