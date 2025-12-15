class Solution {
public:
    int addDigits(int num) {
        // //Recursion:-
        // int sum = 0;
        // while(num){
        //     sum+=(num%10);
        //     num/=10;
        // }
        // if(sum<10) return sum;
        // else return addDigits(sum);  


        //0(1) :-

        if(num == 0) return 0;
        else if(num%9==0) return 9;
        else return num%9;
    }

    
};