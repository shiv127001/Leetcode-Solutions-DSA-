class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p,q,i=0,j=0;
        if(n==0){
            return;
        }
        if(m==0){
            for(i=0;i<n;++i)
            {
                nums1[i] = nums2[j];
                j++;
            }
            return ;
        }

        int k=0;
        for(i=m;i<(m+n);++i)
        {
            nums1[i] = nums2[k];
            k++;
        }
        sort(nums1.begin(),nums1.end());



        // while(i<m || j<n)
        // {
        //     if(nums1[i]<=nums2[j]){
        //         i++;
        //     }
        //     if(nums1[i]>nums2[j])
        //     {
        //         swap(nums1[i],nums2[j]);
        //         j++;i++;
        //     }
        // }
        // sort(nums2.begin(),nums2.end());
        // int k=0;
        // for(i=m;i<(m+n);++i)
        // {
        //     nums1[i] = nums2[k];
        //     k++;
        // }

    }
};