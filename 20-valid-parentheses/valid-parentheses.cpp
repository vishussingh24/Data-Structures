class Solution {
public:

    

    bool isValid(string s) {
        stack<char> ch;

        for(int i=0; i<s.size(); i++){
            if( s[i] == '(' || s[i] == '{' || s[i] == '['){
                ch.push(s[i]);
            }
            else if(s[i] == ')' || s[i] == '}' || s[i] == ']'){

                if(ch.empty()) return false;
                char top = ch.top();
                if((s[i] == ')' && top != '(') || (s[i] == '}' && top != '{') || (s[i] == ']' && top != '[') ){
                    return false;
                }
                ch.pop();
            }
        }
        return ch.empty();
    }
};