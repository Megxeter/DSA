class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int min = INT_MAX;

        for (int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            int sum = 0;

            while (a != 0) {
                int digit1 = a % 10;
                sum += digit1;
                a = a / 10;
            }

            if (sum == i) {
                if (i < min) {
                    min = i;
                }
            }
        }

        if (min != INT_MAX) {
            return min;
        }

        return -1;
    }
};