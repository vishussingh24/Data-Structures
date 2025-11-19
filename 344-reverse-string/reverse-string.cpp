class Solution {
public:

    

    void reverseString(vector<char>& s) {
        if(s.empty()){
            return;
        }
        int temp=s.front();
        s.erase(s.begin());
        reverseString(s);
        s.push_back(temp);
    }
};