class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // BRUTE FORCE APPROACH
        // vector<int> ans(nums.size(),1);

        // for(int i=0;i<nums.size();i++){

        //     for(int j=0;j<nums.size();j++){
        //         if(nums[i] != nums[j]){
        //             ans[i] *= nums[j];
        //         }
        //     }
        // }
        // return ans;
        int n = nums.size();
        vector<int> ans(n, 1);
        vector<int> prefix(n, 1);
        vector<int> suffix(n, 1);

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * nums[i - 1];
        }
        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] * nums[i + 1];
        }
        for (int i = 0; i < n; i++) {
            ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};