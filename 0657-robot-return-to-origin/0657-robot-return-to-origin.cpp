class Solution {
public:
    bool judgeCircle(string moves) {
        int verti = 0;
        int hori = 0;

        for (char c : moves) {
            if (c == 'U') verti++;
            else if (c == 'D') verti--;
            else if (c == 'L') hori++;
            else if (c == 'R') hori--;
        }

        return verti == 0 && hori == 0;
    }
};