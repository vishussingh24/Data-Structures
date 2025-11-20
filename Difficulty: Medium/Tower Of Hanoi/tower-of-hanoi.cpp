class Solution {
  public:
  
    int countSteps(int n, int from, int to, int aux){
        if(n==0){
            return 0;
        }
        
        return 1+countSteps(n-1, from, aux, to) + countSteps(n-1, aux, to, from);
    }
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        return countSteps(n, from, to, aux);
        
    }
};