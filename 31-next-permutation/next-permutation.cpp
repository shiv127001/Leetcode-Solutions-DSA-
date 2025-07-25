#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int i, index=-1, j;
        int nextlargest=10000;
        int n = nums.size();
        for (i = n - 2; i >= 0; --i)
        {
            if (nums[i] < nums[i+1])
            {
                index = i;
                nextlargest = nums[i+1];
                break;
            }
        }
        if(index==-1)
        {
            reverse(nums.begin(), nums.end());
            return;
        }
        for (int i = n - 1; i > index; i--) 
        {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1,nums.end());
    

        // int id2;
        // for(i=index+1;i<n;++i)
        // {
        //     if(abs(nums[index]-nums[i])<nextlargest)
        //     {
        //         id2 = i;
        //         nextlargest = abs(nums[index]-nums[i]);
        //     }
        // }
        // swap(nums[index], nums[id2]);
    }
};


// #include <algorithm>
// #include <vector>
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int i,nextlargest,index=0,index2=0,j;
//         int n = nums.size();
//         if(n==1)
//             return;
//         j = n-2;
//         for(i=n-1;i>0;--i)
//         {
//             if(nums[j]<nums[i])
//             {
//                 index = j;
//                 nextlargest = nums[i];
//                 int x = nums[j];
//                 for(int k = i; k<n; ++k)
//                 {
//                     index2 = k;
//                     if(nums[j]<nums[k])
//                     {
//                         if(nums[k]<nextlargest)
//                         {
//                             nextlargest = nums[k];
//                             index2 = k;
//                         }
//                     }
//                 }
                
//             }
//         }
//         swap(nums[index],nums[index2]);
//         // reverse(nums.begin(),nums.end());
//     }
// };