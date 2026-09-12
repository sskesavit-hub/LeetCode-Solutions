class Solution {
public:
    bool isp(int n){
        if(n<2) return false;

        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n =nums.size()-1;
        int evenmax = 0;
        for(int i=0;i<=n;i++){
            if(isp(nums[i][i]) && evenmax<nums[i][i])
                evenmax=max(evenmax,nums[i][i]);
            if(isp(nums[i][n-i]) && evenmax<nums[i][n-i])
                evenmax=max(evenmax,nums[i][n-i]);
        }
        return evenmax;
    }
};