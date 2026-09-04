class Solution {
public:
    bool ispal(string x){
        string y=x;
        reverse(x.begin(),x.end());
        if(x==y) return true;
        else return false;
    }
    
    void bt(string & s,int index,vector<string>& current,vector<vector<string>>& result){
        if(index==s.size()){
            result.push_back(current);
            return;
        }
        string temp="";

        for(int i=index;i<s.size();i++){
            temp+=s[i];
            if(ispal(temp)){
                current.push_back(temp);
                bt(s,i+1,current,result);
                current.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        if(s.empty())
        return result;

        if(s.size()==1){
            result.push_back({s});
            return result;
        }
        vector<string>current;
        bt(s,0,current,result);
        return result;
    }
};