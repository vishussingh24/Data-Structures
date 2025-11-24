class Solution {
  public:
  
    int func(int n, int k, int i){
        if(n==1){
            return i;
        }
        
        return (func(n-1, k, i)+k)%n;
        
        
    }
    int josephus(int n, int k) {
        // code heren 
        return func(n,k, 0)+1;
        
    }
};