class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans (nums.size()*2,0);
        nums.insert(nums.end(), nums.cbegin(), nums.cend());
        return nums;

    }
};