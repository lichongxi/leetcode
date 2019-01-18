class Solution:
    def twoSum(self, nums, target):
        index = 0
        nums_dict = {}
        for num in nums:
            nums_dict[num] = index
            index+=1
            
        index = 0
        for num in nums:
            key = target - num
            if key in nums_dict and nums_dict[key] != index:
                return [index, nums_dict[key]]
            index+=1
        return [0, 0]
