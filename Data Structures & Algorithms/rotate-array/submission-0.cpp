class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        // reverse the whole array
        reverse(nums.begin(),nums.end());
        //reverse the begin to  k elements
        reverse(nums.begin(), nums.begin() + k);
        // reverse the k elements to end
        reverse(nums.begin() + k, nums.end());
        
    }
};