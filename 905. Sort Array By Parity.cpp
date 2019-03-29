class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> st;
        deque<int> dt;
        for(auto x : A){
            if(x & 1){
                dt.emplace_back(x);
            }
            else{
                dt.emplace_front(x);
            }
        }
        while(!dt.empty()){
            st.emplace_back(dt.front());
            dt.pop_front();
        }
        return st;
    }
};
