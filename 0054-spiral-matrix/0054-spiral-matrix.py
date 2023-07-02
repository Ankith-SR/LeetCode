class Solution:
    def spiralOrder(self, matrix):
        m = matrix
        l = []
        while (m):
            l += m.pop(0)
            m = list(zip(*m))[::-1]
        return l
