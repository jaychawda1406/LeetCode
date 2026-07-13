class Solution {
public:
    void sortColors(vector<int>& A) {
        // 1.Brute Force Approach
        // sort(nums.begin(),nums.end());

        // 2.Optimized Approach
        // int n = nums.size();
        // int count0 = 0,count1 = 0,count2 = 0;
        // for(int i=0;i<n;i++){
        //     if(nums[i] == 0) count0++;
        //     else if(nums[i] == 0) count1++;
        //     else count2++;
        // }
        // int idx = 0;
        // for(int i = 0; i<count0;i++){
        //     nums[idx++] = 0;
        // }
        // for(int i = 0; i<count1;i++){
        //     nums[idx++] = 1;
        // }
        // for(int i = 0; i<count2;i++){
        //     nums[idx++] = 2;
        // }
        // 3.Optimal Approach Using Dutch National Flag Algorithm(DNF)
        int n = A.size();
        int mid = 0;
        int high = n - 1;
        int low = 0;

        while (mid <= high) {
            if (A[mid] == 0) {
                swap(A[low], A[mid]); 
                mid++, low++;
            } else if (A[mid] == 1) {
                mid++;
            } else {
                swap(A[high], A[mid]); 
                high--;
            }
        }
         
    }
};