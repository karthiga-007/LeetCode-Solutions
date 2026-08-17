# Last updated: 8/17/2026, 7:30:18 PM
class Solution:
    def maxArea(self, height):
        l, r = 0, len(height) - 1
        max_area = 0

        while l < r:
            h = min(height[l], height[r])
            w = r - l
            max_area = max(max_area, h * w)

            if height[l] < height[r]:
                l += 1
            else:
                r -= 1

        return max_area
        