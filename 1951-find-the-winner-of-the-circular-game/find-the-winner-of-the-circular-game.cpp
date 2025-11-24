class Solution {
public:
    int funct(vector<int>& arr, int k, int i) {
        if (arr.size() == 1)
            return arr[0];

        i = (k + i - 1) % arr.size();
        arr.erase(arr.begin() + i);
        return funct(arr, k, i);
    }

    int findTheWinner(int n, int k) {
        vector<int> temp;
        for (int i = 1; i < n + 1; i++)
            temp.push_back(i);
        return funct(temp, k, 0);
    }
};