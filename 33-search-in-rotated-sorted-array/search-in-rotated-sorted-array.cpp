class Solution {
public:
    int search(vector<int>& nums, int target) {
        if (nums.size()==1)
        {
            if(nums[0] == target) return 0;
            else return -1;
        }
        if (nums.front() <= nums.back())
        {
            int low = 0;
            int high = nums.size() - 1;
            while (low <= high) 
            {
                int mid = low + (high - low) / 2;
                if (nums[mid] == target)
                    return mid;
                if (nums[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        else 
        {
            int l=0,h=nums.size()-1;
            while (l <= h)
            {
                int mid = l + (h - l) / 2;
                if(nums[mid] == target)
                    return mid;
                if(nums[mid] >= nums[l])
                {
                    if(target>=nums[l] && target<nums[mid]) h = mid-1;
                    else l = mid+1;
                }
                else{
                    if(target>nums[mid] && target<=nums[h]) l = mid+1;
                    else h = mid-1;
                }
            }
        }
    return -1;
    }
};