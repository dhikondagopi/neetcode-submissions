class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        // by using the hashset 
        // create the set
        unordered_set<int> seen; // check the element have seen before or not
        // insert  the values in it 
        for(auto num  : nums){
        if(seen.find(num) != seen.end()){
            return true;
        }
        seen.insert(num); // insert the values into the seen variable 
    }
    return false;

    }
};