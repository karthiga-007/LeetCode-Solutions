# Last updated: 8/17/2026, 7:31:41 PM
class Solution:
    def twoSum(self, nums, target):
        # Dictionary to store number -> index
        num_to_index = {}
        
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_to_index:
                return [num_to_index[complement], i]
            num_to_index[num] = i