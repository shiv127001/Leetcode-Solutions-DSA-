class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        // // optimal

        // // better
        int i,cnt,n=nums.size(), result;
        int low = 1, high = n - 1, duplicate = -1;

        while (low <= high) {
            int mid = (low + high) / 2;

            // Count numbers <= mid
            int count = 0;
            for (int num : nums) {
                if (num <= mid) count++;
            }

            if (count > mid) {
                // Duplicate is in [low, mid]
                duplicate = mid;
                high = mid - 1;
            } else {
                // Duplicate is in [mid+1, high]
                low = mid + 1;
            }
        }
        return duplicate;



        // // brute force
        // map<int,int> mpp;
        // int n = nums.size();
        // for(int i=0;i<n;++i)
        // {
        //     mpp[nums[i]]++;
        // }
        // int m = mpp.size(),a;
        // for(auto it:mpp)
        // {
        //     if(it.second>1) a = it.first;
        // }
        // return a;
    }
};