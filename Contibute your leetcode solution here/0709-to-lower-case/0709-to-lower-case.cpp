class Solution {
public:
    bool iscapital(char c){
        if(c >= 'A' and c <= 'Z')return true;
        return false;
    }
    string toLowerCase(string s) {
        for(int i = 0; i < s.size(); i++){
            if(isalpha(s[i]) and iscapital(s[i]))s[i] = tolower(s[i]);
        }
        return s;
    }
};