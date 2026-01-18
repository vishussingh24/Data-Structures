class Solution {
public:
    int v = 0;
    int c = 0;
    void countVowel(string s){
        int n = s.size();
        for(char ch: s){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                v++;
            }
            else if(ch == ' ' || ch == '0' || ch == '1' || ch == '2' || ch == '3' || ch == '4' || ch == '5' || ch == '6' || ch == '7' || ch == '8' || ch == '9'  ){
                
            }else{
                c++;
            }
            
        }
    }
    
    int vowelConsonantScore(string s) {
        int n = s.size();
        v=0, c=0;
        countVowel(s);
        

        int score = 0;
        if(c>0){
            score = v/c;
        }
        return score;
        
    }
};