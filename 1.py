from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        sumdict = dict()
        for numidx, num in enumerate(nums):
            if target-num in sumdict.keys():
                return [sumdict[target-num], numidx]
            else:
                sumdict[num]=numidx
                