// Solution one
class Solution {
public:
    void reverseString(vector<char>& s) {


        rec(s, 0, s.size() - 1);
        /*
        reverse(s.begin(), s.end());
        for(int i=0; i<s.size(); i++){
            if(i == 0) cout << "[\""  << s[i] << '"' << ",";
            else if(i == s.size()-1){
                cout << '"' << s[i] << '"' << "]" << endl;
            }
            else cout << '"' << s[i] << '"' << ",";
        }
        */

    }
    void rec(vector<char> &v, int st, int ed){
        if(st >= ed){
            return;
        }
        rec(v, st + 1, ed - 1);
        swap(v[st], v[ed]);
    }
};

// Solution Two
class Solution {
public:
    void reverseString(vector<char>& s) {

        reverse(s.begin(), s.end());
        for(int i=0; i<s.size(); i++){
            if(i == 0) cout << "[\""  << s[i] << '"' << ",";
            else if(i == s.size()-1){
                cout << '"' << s[i] << '"' << "]" << endl;
            }
            else cout << '"' << s[i] << '"' << ",";
        }

    }
};
