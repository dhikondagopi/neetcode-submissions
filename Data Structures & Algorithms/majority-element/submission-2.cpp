class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
       int count = 0;
       int candidate = 0;
       // traverse the loop
       for(int i  = 0; i < n;i++){
        if(count == 0){
            candidate = nums[i];// choose the new element and count = 1
            count = 1;
        }else if(nums[i] == candidate){
            count++;
        }else{
            count--;
        }
       }
        return candidate;
    }
};