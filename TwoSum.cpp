class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        bool brk = false;
        for (int iii = 0; iii < nums.size(); iii++) {
            for (int jjj = 0; jjj < nums.size(); jjj++) {
                if (iii >= jjj) continue;
                if (nums[iii] + nums[jjj] == target) {
                    sol = vector<int> {iii, jjj};
                    brk = true;
                    break;
                }
            }
        }
        return sol;
    }
};
