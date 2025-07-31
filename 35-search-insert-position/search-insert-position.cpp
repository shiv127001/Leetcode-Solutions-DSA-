class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid,i,j,n=nums.size();
        i=0;j=n-1;
        if(n==1 && target<nums[0]) return 0;
        if(n==1 && target>nums[0]) return 1;
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
        return i; 
        // int pq;
        // if(mid==0 && target==0) {return 0;}
        // if(target>nums[mid]) {pq = mid+1;}
        // if(target<nums[mid]) {pq = mid;}
        // // if(i==j)
        // // {
        // //     if(target<nums[i]){pq =  i-1;}
        // //     if(target>nums[i]){pq =  i+1;}
        // // }       
        // return pq;

    }
};