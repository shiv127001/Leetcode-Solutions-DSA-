class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int i,n=nums.size();
        int prod = 1,cnt=0,ind;
        vector<int> numzeros(n,0);
        int cnt2=0;
        for(i=0;i<n;++i)
        {
            if(nums[i] != 0)
            {
                prod *= nums[i];
                cnt2++;
            }
            if(nums[i] == 0)
            {
                cnt++;
                numzeros[i]++;
            }
        }
        if(cnt2 == 0)
        {
            prod=0;
        }
        if(cnt>1)
        {
            vector<int> answer(n,0);
            return answer;
        }
        if(cnt>=1)
        {
            vector<int> answer(n,0);
            for(i = 0;i<n;++i)
            {
                if(numzeros[i] == 1)
                    answer[i] = prod;
            }
            return answer;
        }
        vector<int> answer(n,prod);
        for(i=0;i<n;++i)
        {
            if(nums[i] != 0)
                answer[i] = answer[i]/nums[i];
        }
        return answer;
    }
};