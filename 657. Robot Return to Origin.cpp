class Solution {
public:
    bool judgeCircle(string moves) {
        int r, c;
        r = c = 0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i] == 'U') c++;
            else if(moves[i] == 'D') c--;
            else if(moves[i] == 'L') r++;
            else r--;
        }
        if(r == 0 && c == 0) return true;
        return false;
    }
};
