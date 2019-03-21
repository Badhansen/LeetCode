class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string words;
        string str = "";
        while(ss >> words){
            reverse(words.begin(), words.end());
            str += words;
            str += " ";
        }
        str.pop_back();
        return str;
    }
};
