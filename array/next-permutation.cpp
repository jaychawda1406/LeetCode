class Solution {
public:
    void nextPermutation(vector<int>& A) {
        //Optimal Approach
        //Find the Pivot
        int pivot = -1;
        for(int i = A.size()-2;i>=0;i--){
            if(A[i] < A[i+1]){
                pivot = i;
                break;
            }
        }
        if(pivot == -1){
            reverse(A.begin(),A.end()); //without using extra space
            return;
        }
            //Step:2
        for(int i = A.size()-1;i>pivot;i--){
            if(A[i] > A[pivot]){
                swap(A[i],A[pivot]);
                    break;
            }
        }
            //Step:3
            // reverse(A.begin() + pivot + 1,A.end());
        int i = pivot + 1;
        int j = A.size()-1;
        while(i <= j){
            swap(A[i],A[j]);
            i++;
            j--;
        }
    }
};