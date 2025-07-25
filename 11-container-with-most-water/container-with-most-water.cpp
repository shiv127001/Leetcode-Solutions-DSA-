class Solution {
public:
    int maxArea(vector<int>& height) {
        // // METHOD 1 BRUTE FORCE
        // int max_area=0,i,j,length,breadth;
        // int l = height.size();
        // for(i=0;i<l-1;++i)
        // {
        //     int area;
        //     for(j=i+1;j<l;++j)
        //     {
        //         length = j-i;
        //         breadth = min(height[i], height[j]);
        //         area = length*breadth;
        //         if(area >max_area) max_area = area;
        //     }
        //     cout<<max_area<<endl;
        // }
        // return max_area;

        // METHOD 2 OPTIMAL (USIGN 2 POINTER APPROACH)
        int i,left,right,length,breadth,max_area = 0,area;
        left = 0;right = height.size()-1;
        while(left<right)
        {
            breadth = min(height[left],height[right]);
            length = right-left;
            area = length* breadth;
            if(area >max_area) max_area = area;
            if(height[left]>height[right]) right--;
            else left++;
            
        }
        return max_area;
    }
};