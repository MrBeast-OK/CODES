class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        set<int> s(nums.begin(), nums.end());
        for (int i = 1; i <= n ; i++)
        {
            if (s.find(i) == s.end())
            return i;
        }
        return (n+1);
    }
};