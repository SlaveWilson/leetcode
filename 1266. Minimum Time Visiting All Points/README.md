# Result

1. Accepted 20 ms 10.5 MB cpp

- Runtime: 20 ms, faster than 42.39% of C++ online submissions for Minimum Time Visiting All Points.
- Memory Usage: 10.5 MB, less than 14.14% of C++ online submissions for Minimum Time Visiting All Points.

---

### Model Answer
``` C++
class Solution
{
public:
  int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int dis = 0;
        for(int i = 0; i < points.size() -1 ; ++i) {
            dis += max(abs(points[i][0]-points[i+1][0]), abs(points[i][1]-points[i+1][1]));
        }
        return dis;
    }
};
```