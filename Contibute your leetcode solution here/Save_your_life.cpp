#include<bits/stdc++.h>
using namespace std;

string maxSum(string w,char x[], int b[],int n){
    if(w.length()==1)
        return w;
    int ma = 0;
    string ans="",temp="";
    int curr = 0;
    map<char,int> mp;
    for(int i = 0;i<n;i++){
        mp[x[i]] = b[i];
    }
    for(int i = 0;i<w.length();i++){
        if(mp.find(w[i])==mp.end())
            curr+=(int)w[i];
        else
            curr+=mp[w[i]];
        temp+=w[i];
        if(curr>ma){
            ma=curr;
        ans=temp;
        }
        if(curr<0){
            curr=0;
            temp="";
        }
    }
    if(curr>ma)
        ans = temp;
    return ans;
}

//Driver Code
int main(){
    string str,ans;
    cout<<"Enter string : ";
    cin>>str;
    int n;
    cout<<"Enter length of char array : ";
    cin>>n;
    char x[n];
    int b[n];
    cout<<"Enter elements in character array";
    for(int i=0;i<n;i++)
        cin>>x[i];
    cout<<"Enter elements in integer array";
    for(int i=0;i<n;i++)
        cin>>b[i];
    ans=maxSum(str,x,b,n);
    cout<<ans;
    return 0;
}
