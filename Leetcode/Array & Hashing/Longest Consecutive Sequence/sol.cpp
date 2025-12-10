class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size() == 0) return 0;

        unordered_set<int> s(nums.begin(), nums.end());

        int maxStreak = 1;

        for (auto x : s) {

            // x is start of sequence
            if (!s.count(x - 1)) {

                int currentStreak = 1;
                int next = x + 1;

                // count forward
                while (s.count(next)) {
                    next++;
                    currentStreak++;
                }

                maxStreak = max(maxStreak, currentStreak);
            }
        }

        return maxStreak;
    }
};
