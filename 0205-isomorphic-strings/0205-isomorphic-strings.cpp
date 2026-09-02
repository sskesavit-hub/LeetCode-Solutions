class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>mp;
        unordered_set<char>usedval;

        for(int i=0;i<s.size();i++){
                int key=s[i];
                int val=t[i];
                if(mp.count(key)){
                    if(mp[key]!=val)
                        return false;
                }
                else{
                    if(usedval.count(val))
                        return false;
                }
                mp[key]=val;
                usedval.insert(val);
        }
        return true;
    }
};