class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
      // create the unordered_map 
      unordered_map<int,int> freq;  // values are stored and count the frequencies
      // count the frequencies
      for(int i = 0;  i < n;i++){
        freq[nums[i]]++;
      }
      // check the majority
      for(auto it : freq){
        if(it.second >n / 2){
            return it.first;
        }
      }
      return -1;
    }
};