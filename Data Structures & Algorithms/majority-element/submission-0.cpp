class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        //i points first element 
        for(int i = 0; i < n; i++){
            int count = 0;
            // it will check the evry element and compares to first elemtn 
            for(int j = 0; j < n;j++){
                if(nums[i] == nums[j]){
                    // if it is equaal increase the count
                    count++;
                }

            }
            if(count > n / 2){
            return nums[i];
        } 
        }
      return -1;  
    }
};