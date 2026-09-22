class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     // finding the consecutive elements of ones 
     int n  = nums.size();
     int count = 0;
     int maxCount = 0;
     for(int i = 0; i < n;i++){
        if(nums[i] == 1){
            count++;
            maxCount = max(maxCount,count);// evry iteration we need to find the max
        }else{
            count = 0; // because we dont brother about the 0s right
        }
     }
     return maxCount;
        
    }
};