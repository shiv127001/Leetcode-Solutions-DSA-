class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i,j,n=nums.size();
        int result = nums[0];
        for(i=0;i<n;++i)
        {
            int prod = nums[i];
            for (j=i+1;j<n;++j)
            {
                result = max(prod,result);
                prod = prod*nums[j];
            }
            result = max(result,prod);
        }
        return result;
    }
};