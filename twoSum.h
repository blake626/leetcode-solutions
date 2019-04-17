class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        int curr;
        
        for(int i=0; i < nums.size(); i++){
            curr = nums[i];
            for(int j=0; j < nums.size(); j++){
                if(curr + nums[j] == target && i != j){
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }
            }
        }
        
        
    }
};