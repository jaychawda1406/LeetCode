class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) { //O(nlogn + n^3)
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());


        for(int i=0;i<n;i++){
            if(i>0 && nums[i] == nums[i-1]) continue; // optimisation no 1
            for(int j=i+1;j<n;){ 
                int p=j+1, q=n-1;
                while(p<q){
                    long long sum = (long long) nums[i]+(long long)nums[j]+
                    (long long)nums[p]+(long long)nums[q];
                    if(sum<target){
                        p++;
                    }else if(sum>target){
                        q--;
                    } else{
                        ans.push_back({nums[i],nums[j],nums[p],nums[q]});
                        p++,q--;
                        while(p<q && nums[p] == nums[p-1]) p++; // optimisation no 3
                    }
                }
                j++; // optimisation no 2
                while(j<n && nums[j] == nums[j-1]) j++;   
            }
        }
        return ans;
    }
};