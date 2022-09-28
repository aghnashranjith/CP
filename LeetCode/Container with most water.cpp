class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size()-1;
        int cur_level = min(height[i], height[j]);
        int width = j-i;
        int area = width*cur_level;
        int max_area = area;
        
        while(i<j)
        {
            while(i<j && height[i]<=cur_level)
                i++;
            
            while(i<j && height[j]<=cur_level)
                j--;
            
            cur_level = min(height[i],height[j]);
            width = j-i;
            area = width*cur_level;
            if(area>max_area)
                max_area = area;
        }
        return max_area;
    }
};