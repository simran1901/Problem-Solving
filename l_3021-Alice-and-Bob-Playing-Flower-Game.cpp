// https://leetcode.com/problems/alice-and-bob-playing-flower-game/description/?envType=daily-question&envId=2025-08-29

class Solution {
    int getOdd(int n) {
        return static_cast<int>(ceil(n / 2.0));
    }

    int getEven(int n) {
        return (n / 2) + 1;
    }
public:
    long long flowerGame(int n, int m) {
        // how many odds can I get till n-1 and evens till m-1 and vice versa
        return 1LL * getOdd(n-1)*getEven(m-1) + 1LL * getOdd(m-1)*getEven(n-1);
    }
};
