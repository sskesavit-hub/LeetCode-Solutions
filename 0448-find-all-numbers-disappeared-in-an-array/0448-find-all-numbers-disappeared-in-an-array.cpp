class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int>seen;
        vector<int>ans;
        for(auto x : nums) seen.insert(x);
        for(int i=1;i<=nums.size();i++){
            if(!seen.count(i))
                ans.push_back(i);
        }
        return ans;
    }
};