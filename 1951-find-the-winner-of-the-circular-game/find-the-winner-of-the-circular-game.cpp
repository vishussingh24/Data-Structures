class Solution {
public:
    int funct(int n, int k, int i) {
        // if (arr.size() == 1)
        //     return arr[0];

        // i = (k + i - 1) % arr.size();
        // arr.erase(arr.begin() + i);
        // return funct(arr, k, i);/
        if(n==1) return i;
        return (funct(n-1, k, i)+k)%n;
 
    }

    int findTheWinner(int n, int k) {
        // vector<int> temp;
        // for (int i = 1; i < n + 1; i++)
        //     temp.push_back(i);
        // return funct(temp, k, 0);
        return funct(n, k, 0)+1;
    }
};