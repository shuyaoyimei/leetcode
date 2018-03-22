class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> T = {  { 'I' , 1 },
                                        { 'V' , 5 },
                                        { 'X' , 10 },
                                        { 'L' , 50 },
                                        { 'C' , 100 },
                                        { 'D' , 500 },
                                        { 'M' , 1000 } };
        int length = s.size(),result = 0;
        if(length == 0){
            return 0;
        }
        for(int i = 0; i< length-1; ++i){
            if(T[s[i]] < T[s[i+1]]){
                result -= T[s[i]];
            }
            if(T[s[i]] >= T[s[i+1]]){
                result += T[s[i]];
            }
        }
        result += T[s[length -1]];
        return result;
    }
};
