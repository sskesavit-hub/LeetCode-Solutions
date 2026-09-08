class Solution {
public:
    string longestPalindrome(string s) {
        int mx=0;
        string ans;

        int n = s.size();

        vector<vector<int>> dp(n,(vector<int>(n,0)));

        for(int dif=0;dif<n;dif++){
            for(int i=0,j=i+dif;j<n;i++,j++){
                if(i==j) dp[i][j]=1;

                else if(dif==1){
                    if(s[i]==s[j])
                        dp[i][j]=2;
                }
                else if(s[i]==s[j] && dp[i+1][j-1]){
                    dp[i][j]=2+dp[i+1][j-1];
                }
                if(dp[i][j]&&j-i+1>mx){
                    mx=j-i+1;
                    ans=s.substr(i,mx);
                }
            }
        }
        return ans; 
            
    }
};