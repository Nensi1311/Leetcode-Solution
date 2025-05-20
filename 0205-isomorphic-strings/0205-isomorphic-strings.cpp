class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> spos;
        unordered_map<char, int> tpos;

        for(int i=0; i<s.size(); i++){
            char schar = s[i];
            char tchar = t[i];

            if(spos.find(schar)==spos.end()){
                spos[schar]=i;
            }
            if(tpos.find(tchar)==tpos.end()){
                tpos[tchar]=i;
            }
            if(spos[schar]!=tpos[tchar]){
                return false;
            }
         }
         return true;
   }
};