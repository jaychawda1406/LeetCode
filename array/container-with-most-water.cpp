class Solution {
public:
    int maxArea(vector<int>& height) {
        // TC: O(n^2) it will give TLE because of constraints so we should optimize it.

        // int maxWater = 0;
        // for(int i=0;i<height.size();i++){
        //     for(int j=i+1;j<height.size();j++){
        //         int w = j-i;
        //         int ht = min(height[i],height[j]);
        //         int currArea = w * ht;

        //         maxWater = max(maxWater,currArea);
        //     }
        // }
        // return maxWater;

        int maxWater = 0;
        int lp = 0,rp = height.size()-1;
        while(lp < rp){
            int w = rp - lp;
            int ht = min(height[lp],height[rp]);
            int currWater = w * ht;
            maxWater = max(currWater,maxWater);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxWater;
    }
};