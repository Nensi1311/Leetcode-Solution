class Solution {
public:
    string decodeMessage(string key, string message) {
        char ch = 'a';
        map<char, char> mp;
        for(int i=0; i<key.length(); i++){
            if(key[i] != ' ' && mp.find(key[i])==mp.end()){
                mp[key[i]] = ch++; 
            }
        }

        for(int i=0; i<message.length(); i++){
            if(message[i] != ' '){
                message[i] = mp[message[i]];
            }
        }
        return message;
    }
};