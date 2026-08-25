#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0;

        // Move non-zero elements to the front
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[idx] = nums[i];
                idx++;
            }
        }

        // Fill remaining positions with zero
        while (idx < nums.size()) {
            nums[idx] = 0;
            idx++;
        }
    }
};