class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Binary search
        int low = 0;
        int high = nums.size()-1;
        int numberfound = -1;
        int x = target;
        while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == x)
            numberfound = mid;
        if (nums[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
        if (numberfound == -1)
            {return {-1,-1};}

        if(nums.size()==1 && nums[0]==target)
        {
            return {0,0};
        }
        int start,end;
        start = 0;
        end = nums.size()-1;
        vector<int> result;
        while(start<=end)
        {
            if(nums[start]==target){
                result.push_back(start);
                break;
            }
            start++;
        }
        while(start<=end)
        {
            if(nums[end]== target){
                result.push_back(end);
                break;
            }
            end--;
        }

        vector<int> fr;
        fr.push_back(result[0]);
        int n = result.size();
        fr.push_back(result[n-1]);
        return fr;
    }
};