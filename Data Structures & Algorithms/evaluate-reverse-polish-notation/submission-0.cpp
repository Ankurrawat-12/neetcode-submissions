class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> storage;
        for(int i = 0; i < tokens.size(); i++){
            if((tokens[i] != "+") && (tokens[i] != "-") && (tokens[i] != "/") && (tokens[i] != "*")){
                storage.push(stoi(tokens[i]));
            }
            else{
                int a = storage.top();
                storage.pop();
                int b = storage.top();
                storage.pop();
                if(tokens[i] == "+"){
                    storage.push(b + a);
                }
                else if(tokens[i] == "-"){
                    storage.push(b - a);
                }
                else if(tokens[i] == "/"){
                    storage.push(b / a);
                }
                else if(tokens[i] == "*"){
                    storage.push(b * a);
                }
            }
        }

        return storage.top();
    }
};
