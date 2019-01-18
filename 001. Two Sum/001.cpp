class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> nums_map;
        for (int i = 0; i < nums.size(); i++) {
            nums_map.insert(std::make_pair(nums[i], i));
        }
        for (int i = 0; i < nums.size(); i++) {
            int key = target - nums[i];
            if (nums_map.find(key) != nums_map.end() && nums_map[key] != i) {
                return{ i, nums_map[key] };
            }
        }
        return{};
    }
};