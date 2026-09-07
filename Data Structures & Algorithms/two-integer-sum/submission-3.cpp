class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) { 
       //this is if array is not sorted 
      unordered_map<int,int> mp;
      for(int i = 0; i < nums.size();i++){
        // find the needed element
        int needed = target - nums[i];
        if(mp.find(needed) != mp.end()){
            return {mp[needed],i};
        }
        mp[nums[i]] = i;// storing the value
      }
      return {};
    }
};