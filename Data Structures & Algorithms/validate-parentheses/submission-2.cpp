class Solution {
public:
    bool isValid(string s) {
        if(s.size() < 2){
            return false;
        }
        
        stack<char> storage;
        storage.push('0');

        for(char c: s){
            if(c == '{' || c == '[' || c == '('){
                storage.push(c);
            }
            else if(c == '}'){
                if(storage.top() == '{') storage.pop();
                else return false;
            }
            else if(c == ']'){
                if(storage.top() == '[') storage.pop();
                else return false;
            }
            else if(c == ')'){
                if(storage.top() == '(') storage.pop();
                else return false;
            }
        }

        if(storage.top() == '0') return true;
        return false;
    }
};
