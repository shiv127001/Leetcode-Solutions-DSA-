class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i,a,n=nums.size();
        
        if(n==1) {return nums[0];}
        for(i=0;i<n-1;)
        {
            if(nums[i] == nums[i+1])
            {
                i+=2;
            }
            else {
                a = nums[i];
                break;
            }
        }
        return a;
        
    }
};