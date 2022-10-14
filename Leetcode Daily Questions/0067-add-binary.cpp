class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        string ans ;
        string carry = "0";
        while(i >= 0 and j >= 0){
            if(a[i] == '1' and b[j] =='1'){
                
                if(carry == "0"){
                    string s = "0";
                    carry = "1";
                    s += ans;
                    ans = s;
                }
                else{
                    string s = "1";
                    carry = "1";
                    s += ans;
                    ans = s;
                }
            }
            else if((a[i] == '0' and b[j] == '1') || a[i] == '1' and b[j] == '0'){
                if(carry == "0"){
                    carry = "0";
                    string s = "1";
                    s += ans;
                    ans = s;
                }
                else{
                    carry = "1";
                    string s = "0";
                    s += ans;
                    ans = s;
                }
            }
            else{
                string s = carry;
                s += ans;
                ans = s;
                carry = "0";
            }
            i--;
            j--;
        }
        
        while(i >= 0){
            if(a[i] == '1'){
                if(carry == "1"){
                    string s = "0";
                    carry = "1";
                    s += ans;
                    ans = s;
                }
                else{
                    string s = "1";
                    carry = "0";
                    s += ans;
                    ans = s;
                }
            }
            else{
                string s = carry;
                carry = "0";
                s += ans;
                ans = s;
            }
            i--;
        }
        
        while(j >= 0){
            if(b[j] == '1'){
                if(carry == "1"){
                    string s = "0";
                    carry = "1";
                    s += ans;
                    ans = s;
                }
                else{
                    string s = "1";
                    carry = "0";
                    s += ans;
                    ans = s;
                }
            }
            else{
                string s = carry;
                carry = "0";
                s += ans;
                ans = s;
            }
            j--;
        }
        
        if(carry == "1"){
            carry += ans;
            ans = carry;
        }
        
        return ans;
    }
};