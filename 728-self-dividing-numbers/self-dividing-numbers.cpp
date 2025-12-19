class Solution {
public:

    bool containszero(int n){
        while(n){
            int last = n%10;
            n/=10;
            if(last == 0) return true;
        }
        return false;
    }

    bool numCanBeSelf(int n){
        int num = n;
        while(n){
            int last = n%10;
            n/=10;
            if(num%last != 0) return false;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i=left; i<=right; i++){
            if(containszero(i)) continue;
            if(numCanBeSelf(i)) ans.push_back(i);
        }
        return ans;

    }
};