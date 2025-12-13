class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0,r=height.size()-1;
        int maxwater=0;
        while(l<r){
            int h = min(height[l],height[r]);
            int water = (r-l)*(h);
            maxwater = max(maxwater,water);
            if(height[l]>height[r]) r--;
            else l++;
        }
        return maxwater;
    }
};