#include <cmath>
class Solution {
public:
    const long long MOD = 1e9 + 7;
    long long power(long long val, long long indx) {
        long long result = 1;
        val %= MOD;  // prevent overflow
        while (indx > 0) {
            if (indx & 1)  // if last bit is 1
                result = (result * val) % MOD;
            val = (val * val) % MOD;  // square the base
            indx >>= 1;               // divide exponent by 2
        }
        return result;
    }

    int countGoodNumbers(long long n) {

        long long even_index = (n + 1) / 2;
        long long odd_index = (n/2);
        long long a = power(5,even_index);
        long long b = power(4,odd_index);
        long long ans = (__int128(a) * b) % MOD;
        return static_cast<int>(ans);
    }
};