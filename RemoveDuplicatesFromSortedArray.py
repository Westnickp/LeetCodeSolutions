class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        counter = 0
        for k in range(len(nums)):
            try:
                if nums[counter] == nums[counter+1]:
                    nums.pop(counter+1)
                else:
                    counter += 1
            except:
                break
        return len(nums)
