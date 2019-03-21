class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;
        for(int i=0; i<emails.size(); i++){
            string str = "";
            bool plus = false, atThe = false;
            for(int j=0; j<emails[i].size(); j++){
                if(!plus){
                    // if plus is not found yet
                    if(emails[i][j] == '.' && !atThe) continue;
                    else{
                        if(emails[i][j] == '+' && !atThe){
                            plus = true;
                        }
                        else str += emails[i][j];
                    }
                }
                else{
                    // if plus is found then find the @
                    if(emails[i][j] == '@'){
                        plus = false;
                        atThe = true;
                        str += '@';
                    }
                }
            }
            //cout << str << endl;
            st.insert(str);
        }
        return st.size();
    }
};
