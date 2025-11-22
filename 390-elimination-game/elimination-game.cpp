class Solution {
public:



    long long lastRemaining(long long n) {
        long long head=1;
        long long step=1;
        long long remaining =n;
        bool leftToRight = true;

        while(remaining >1){

            if(leftToRight || (remaining)%2==1){
                head+=step;
            }
            remaining/=2;
            step*=2;
            leftToRight = !leftToRight;
        }
        return head;
    }
    //help from gpt
};