func twoSum(nums []int, target int) []int {
    nums_map := make(map[int]int);
    for i := 0; i < len(nums); i++ {
        nums_map[nums[i]] = i;
    }
    for i := 0; i < len(nums); i++ {
        var key int = target - nums[i];
        if _, ok := nums_map[key]; ok && nums_map[key] != i{
            return []int {i, nums_map[key]}
        }
    }
    return []int {}
}