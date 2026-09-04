class Solution {
public:
    void bt(string &d,int index,string current,vector<string>& result,unordered_map<int,string>& mp){
        if(index==d.size()){
            result.push_back(current);
            return;
        }

        int digit = d[index] - '0';
        string letter = mp[digit];

        for(int i=0;i<letter.size();i++){
            current.push_back(letter[i]);
            bt(d,index+1,current,result,mp);
            current.pop_back();
        }
    }


    vector<string> letterCombinations(string d ){

        vector<string>result;

        if(d.empty())
            return result;

        unordered_map<int,string>mp;
        mp.insert({2,"abc"});
        mp.insert({3,"def"});
        mp.insert({4,"ghi"});
        mp.insert({5,"jkl"});
        mp.insert({6,"mno"});
        mp.insert({7,"pqrs"});
        mp.insert({8,"tuv"});
        mp.insert({9,"wxyz"});

        string current="";
        bt(d,0,current,result,mp);

        return result;
            
    }
};

