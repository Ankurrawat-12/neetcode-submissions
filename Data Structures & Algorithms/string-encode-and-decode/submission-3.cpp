class Solution {
    vector<int> hash;
public:

    string encode(vector<string>& strs) {
        if(strs.size() == 0){
            return "NULL";
        }
        string encoded_message = "";
        for(string s: strs){
            encoded_message += s;
            hash.push_back(encoded_message.size());
        }
        return encoded_message;
    }

    vector<string> decode(string s) {
        if(s == "NULL"){
            return {};
        }
        if(s.size() == 0){
            return {""};
        }

        vector<string> decoded_message;
        string str = "";
        int i = 0;
        for(int j = 0; j <= s.size(); j++){
            if(hash[i] == j){
                decoded_message.push_back(str);
                str = "";
                i++;
            }
            str += s[j];  
        }
        return decoded_message;
    }
};
