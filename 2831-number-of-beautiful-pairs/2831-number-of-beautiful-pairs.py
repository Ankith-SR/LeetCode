import math

class Solution:
    def countBeautifulPairs(self, nums):
        c = 0
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                a = str(nums[i])
                b = str(nums[j])
                if math.gcd(int(a[0]), int(b[-1])) == 1:
                    c += 1
        return c
