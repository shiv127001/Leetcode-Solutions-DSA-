class Solution {
public:
    bool isPowerOfThree(int n) {
        // // method 1 using recursion 
        // if (n==0) return false;
        // if (n==-1) return false;
        // if (n==1) return true;
        // if (n%3!=0) return false;
        // return isPowerOfThree(n/3);

        // method 2 using log without using loop/recursion
        if (n <= 0) return false;
        if (n==0) return false;
        if (n==-1) return false;
        double result = log(n)/log(3);
        int nearest = round(result);
        return fabs(result - nearest) < 1e-10; // Use a tolerance check instead of exact equality:

    }
};