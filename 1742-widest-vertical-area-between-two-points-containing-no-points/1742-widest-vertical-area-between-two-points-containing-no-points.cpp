#include <vector>
#include <algorithm>

class Solution {
public:
    int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points) {
        // Sort the points based on their x-coordinates
        std::sort(points.begin(), points.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[0] < b[0];
        });

        int max_width = 0;
        // Calculate the maximum difference between consecutive x-coordinates
        for (int i = 1; i < points.size(); ++i) {
            max_width = std::max(max_width, points[i][0] - points[i - 1][0]);
        }

        return max_width;
    }
};
