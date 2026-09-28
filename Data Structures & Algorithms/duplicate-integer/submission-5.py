class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        m = {}
        for i in range(len(nums)):
            m[nums[i]]=m.get(nums[i],0)+1

        return not len(nums)==len(m)
        