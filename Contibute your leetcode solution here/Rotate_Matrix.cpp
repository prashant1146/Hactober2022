#include<bits/stdc++.h>
using namespace std;

//Function to rotate the matrix


void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),low,high,temp;

        //Finding Transpose of matrix

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        low=0;
        high=n-1;

        //Rotating matrix
         
        while(low<high){
            for(int k=0;k<n;k++)
            {
                temp=matrix[k][low];
                matrix[k][low]=matrix[k][high];
                matrix[k][high]=temp;
            }
            low++;
            high--;
        }
    }

//Driver Code

int main(){
    int n;
    cout<<"Enter length of matrix : ";
    cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    cout<<"\nEnter elements of matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    
    //Calling Function to rotate matrix

    rotate(matrix);
    return 0;
}