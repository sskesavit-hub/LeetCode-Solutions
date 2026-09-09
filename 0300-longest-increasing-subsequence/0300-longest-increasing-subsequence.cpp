class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>res;
            for(int i:nums){
                int p = lower_bound(res.begin(),res.end(),i)-res.begin();

                if(p==res.size())
                    res.push_back(i);
                else
                    res[p]=i;
                
            }
        return res.size();
    }
};