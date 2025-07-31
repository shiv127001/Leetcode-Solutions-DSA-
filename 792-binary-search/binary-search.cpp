class Solution {
public:
    int search(vector<int>& nums, int target) {
        int mid,i,j,n=nums.size();
        i=0;j=n-1;
        
        while(i<=j)
        {
            mid = i+((j-i)/2);
            if(nums[mid]==target) {
                return mid;
            }
            else if (nums[mid]<target) {
                i = mid+1;
            }
            else if(nums[mid]>target){
                j=mid-1;
            }
        }
        return -1;
    }
};