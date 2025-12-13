class Solution {
public:
    int trap(vector<int>& height) {
        int quantity = 0;
        int l =0,r=height.size()-1;
        int leftmax = height[l],rightmax=height[r];
        while(l<r){
            if(leftmax<=rightmax){
                quantity+=(leftmax-height[l]);
                leftmax=max(leftmax,height[++l]);
            }
            else{
                quantity+=(rightmax-height[r]);
                rightmax=max(rightmax,height[--r]);
            }
        }
        return quantity;
    }
};