class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        int xorAll = 0;

        for (int num : nums)
            xorAll ^= num;

        unsigned int diff = xorAll & -((unsigned int)xorAll);

        int x = 0, y = 0;

        for (int num : nums) {
            if (num & diff)
                x ^= num;
            else
                y ^= num;
        }

        return {x, y};
    }
};
