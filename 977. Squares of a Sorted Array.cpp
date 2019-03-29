class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> st;
        for(auto x : A){
            st.push_back(x * x);
        }
        sort(st.begin(), st.end());
        return st;
    }
};
