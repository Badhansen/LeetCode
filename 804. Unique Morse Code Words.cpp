class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> s = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string> st;
        for(int i=0; i<words.size(); i++){
            string str = "";
            for(int j=0; j<words[i].size(); j++){
                str += s[words[i][j] - 'a'];
            }
            st.insert(str);
        }
        return st.size();
    }
};
