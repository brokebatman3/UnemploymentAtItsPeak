class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_zeros = 0;
        int count_ones = 0;
        int count_twos = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                count_zeros++;
            } else if (nums[i] == 1) {
                count_ones++;
            } else {
                count_twos++;
            }
        }
        int i = 0;
        while (count_zeros) {
            nums[i++] = 0;
            count_zeros--;
        }

        while (count_ones) {
            nums[i++] = 1;
            count_ones--;
        }
        while (count_twos) {
            nums[i++] = 2;
            count_twos--;
        }
        return;
    }
};