class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int>R={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int res =0;
        for(int i=0; i<s.size()-1;i++){
            if(R[s[i]]<R[s[i+1]]){
                res -=R[s[i]];
            }else{
                res +=R[s[i]];
            }
        }
        return res + R[s[s.size()-1]];
    }
};
