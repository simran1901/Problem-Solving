// https://leetcode.com/problems/maximum-average-pass-ratio/?envType=daily-question&envId=2025-09-01

class Solution {
    struct Ratio {
        double gain;
        int pass;
        int total;

        Ratio(double gain, int pass, int total)
            : gain(gain), pass(pass), total(total) {}
    };

    struct RatioCompare {
        bool operator()(const Ratio& a, const Ratio& b) const {
            return a.gain < b.gain; // max-heap
        }
    };

    double calculateGain(int pass, int total) {
        double before = static_cast<double>(pass) / total;
        double after = static_cast<double>(pass + 1) / (total + 1);
        return after - before;
    }

public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        priority_queue<Ratio, vector<Ratio>, RatioCompare> pq;

        for (const auto& c : classes) {
            pq.emplace(calculateGain(c[0], c[1]), c[0], c[1]);
        }

        while (extraStudents-- > 0) {
            Ratio ratio = pq.top();
            pq.pop();
            int newPass = ratio.pass + 1;
            int newTotal = ratio.total + 1;
            pq.emplace(calculateGain(newPass, newTotal), newPass, newTotal);
        }

        double ans = 0.0;
        while (!pq.empty()) {
            Ratio ratio = pq.top();
            pq.pop();
            ans += static_cast<double>(ratio.pass) / ratio.total;
        }

        return ans / classes.size();
    }
};
