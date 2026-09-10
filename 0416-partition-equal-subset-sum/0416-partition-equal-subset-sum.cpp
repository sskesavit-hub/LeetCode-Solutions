class Solution {
public:
    bool canPartition(vector<int>& ns) {
        int sum=0;

        for(int i=0;i<ns.size();i++){
            sum=sum+ns[i];
        }

        if(sum%2!=0)
            return false;
        
        int target=sum/2;

        int n = ns.size();
        int m = target;
        
        vector<vector<unsigned long long>>dp(n+1,vector<unsigned long long>(m+1,0));
        
        for(int i=1;i<=n;i++)
            dp[i][0]=1;
        
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(j<ns[i-1]){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-ns[i-1]];
                }
            }
        }
        return dp[n][m];
    }
};