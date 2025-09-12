class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n=fruits.size(),nospace = 0;int unplaced=0;
        int f,b;
        for(f=0;f<n;++f)
        {
            for(b=0;b<n;++b)
            {
                if(fruits[f]<=baskets[b]) {
                    baskets[b] =-1;
                    break;
                }
                else nospace++;
            }
            if(nospace>=n) unplaced++;
            nospace = 0;
        }

        return unplaced;
    }
};