class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int f = 0;
        // if(nums.size()==1){
        //     return;
        // }
        // int r = nums.size()-1;
        // int f = nums.size()-1;

        // while(f<=r && f>=0 && r>=0)
        // {
        //     while(nums[f]!=0){--f;}
        //     if (nums[r]!=0 && nums[f]==0)
        //     {
        //         int temp = nums[r];
        //         nums[r] = nums[f];
        //         nums[f] = temp;
        //         // r--;
        //     }
        //     // f++;
        //     r--;
        // }

        int lastzerofound = 0;
        for(int i=0;i<nums.size();++i)
        {
            if(nums[i] != 0)
            {
                nums[lastzerofound] = nums[i];
                lastzerofound++;
            }
        }
        for(int i = lastzerofound;i<nums.size();++i)
        {
            nums[i] = 0;
        }
    }
};