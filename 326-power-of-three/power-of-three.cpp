class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n==0) return false;
        if (n==-1) return false;
        if (n==1) return true;
        if (n%3!=0) return false;
        return isPowerOfThree(n/3);

        // if (n <= 0) return false;
        // if (n==0) return false;
        // if (n==-1) return false;
        // double result = log(n)/log(3);
        // int nearest = round(result);
        // return fabs(result - nearest) < 1e-10; // Use a tolerance check instead of exact equality:

    }
};