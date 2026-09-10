class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0;
        int currentjump = 0;
        int nextjump = 0;
        for(int i = 0; i < n - 1; i++) {
            nextjump = max(nextjump, i + nums[i]);
            if(i == currentjump) {
                jumps++;
                currentjump = nextjump;
            }
        }
        return jumps;
    }
};