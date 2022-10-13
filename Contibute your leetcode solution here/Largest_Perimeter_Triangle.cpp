#include<bits/stdc++.h>
using namespace std;

//Function to check the validity if sides of triangle
bool chk(int m,int n,int o)
{
    if((m+n>o)&&(m+o>n)&&(o+n>m))
        return true;
    return false;
}


int largestPerimeter(vector<int>& nums) {
    int a,b,c;
    sort(nums.begin(),nums.end(),greater<int>());
    a=(nums[0]);
    b=(nums[1]);
    for(int i=2;i<nums.size();i++){
        c=nums[i];
        if(chk(a,b,c))
            return a+b+c;
        else{
            a=b;
            b=c;
        }
    }
    return 0;
}

//Driver Code
int main(){
    int n,ans;
    cout<<"Enter length of nums array";
    vector<int>nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    ans=largestPerimeter(nums);
    cout<<ans;
    return 0;
}