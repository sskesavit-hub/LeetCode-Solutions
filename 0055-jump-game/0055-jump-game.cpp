class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int currjump=0;

        for(int i=0;i<n;i++){
            if(i>currjump)
                return false;
            
            currjump=max(currjump,i+nums[i]);

            if(currjump>=n-1)
                return true;
        }
        return true;
    }
};