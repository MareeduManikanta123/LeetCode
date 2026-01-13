class Solution {
public:
    double separateSquares(vector<vector<int>>& squares) {
        double totalArea = 0;
        double low = 1e18, high = 0;

        for (auto &s : squares) {
            totalArea += 1.0 * s[2] * s[2];
            low = min(low, (double)s[1]);
            high = max(high, (double)s[1] + s[2]);
        }

        double half = totalArea / 2.0;

        for (int iter = 0; iter < 60; iter++) {
            double mid = (low + high) / 2;
            double areaBelow = 0;

            for (auto &s : squares) {
                double y = s[1], l = s[2];

                if (mid >= y + l) {
                    areaBelow += l * l;
                } else if (mid > y) {
                    areaBelow += l * (mid - y);
                }
            }

            if (areaBelow < half)
                low = mid;
            else
                high = mid;
        }

        return low;
    }
};
