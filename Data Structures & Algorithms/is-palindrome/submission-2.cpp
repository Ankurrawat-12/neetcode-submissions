class Solution {
public:

    bool isAlphaNumeric(char c){
        if(((48 <= c) && (c <= 57)) || ((65 <= c) && (c <= 90)) || ((97 <= c) && (c <= 122))){
            return true;
        }
        return false;
    }

    bool isPalindrome(string s) {
            if(s.empty()) return true;

            int start = 0;
            int end = s.size() - 1;
            while(start < end){
                if(!(isalnum(s[start]))){
                    start++;
                    continue;
                }
                
                if(!(isalnum(s[end]))){                    
                    end--;
                    continue;
                }

                if(tolower(s[start]) != tolower(s[end])){
                    return false;
                }

                start++;
                end--;
            }

            return true;
    }
};
