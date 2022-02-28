from ast import List


class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        pre = 0
        di = {0:1}
        res = 0
        for i in nums:
            pre += i
            res += di.get(pre-goal, 0)
            if pre not in di:
                di[pre] = 1
            else:
                di[pre] += 1
        return res