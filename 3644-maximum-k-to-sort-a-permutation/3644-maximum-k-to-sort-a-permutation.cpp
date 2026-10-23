class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        return max(ranges::fold_left(nums | views::enumerate | views::filter([](auto p) { auto [i, x] = p; return x != i; }) | views::values, -1, bit_and()), 0);
    }
};