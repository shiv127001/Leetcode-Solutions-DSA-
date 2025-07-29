class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // Method 2 using 2 pointer method
        if(n==0){
            return;
        }
        int q=0;
        if(m==0){
            for(int ii=0;ii<n;++ii)
            {
                nums1[ii] = nums2[q];
                q++;
            }
            return ;
        }

        int i=m-1,j=n-1,k=(m+n)-1;
        while(i>=0 && j>=0)
        {
            if(nums1[i]>=nums2[j]) {
                nums1[k] = nums1[i];
                k--;i--;
            }
            else if(nums1[i]<nums2[j])
            {
                nums1[k] = nums2[j];
                k--;j--;
            }
        }
        // // if nums2 still has elements left (nums1 is already in place)
        while(j>=0)
        {
            nums1[k] = nums2[j];
            k--;j--;
        }



        // // Method 1 
        // int p,q,i=0,j=0;
        // if(n==0){
        //     return;
        // }
        // if(m==0){
        //     for(i=0;i<n;++i)
        //     {
        //         nums1[i] = nums2[j];
        //         j++;
        //     }
        //     return ;
        // }

        // int k=0;
        // for(i=m;i<(m+n);++i)
        // {
        //     nums1[i] = nums2[k];
        //     k++;
        // }
        // sort(nums1.begin(),nums1.end());
    }
};