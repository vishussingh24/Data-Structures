class Solution {
public:

    void help_reverse(vector<char>& s, int start, int end){
        if(start>=end){
            return;
        }
        swap(s[start], s[end]);
        help_reverse(s, start + 1, end - 1);  
    }

    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        help_reverse(s, start, end);
    }
};