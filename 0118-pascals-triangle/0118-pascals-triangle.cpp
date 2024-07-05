class Solution {
public:
    vector<int> makeRow(int n){
        long long ans = 1;
        vector<int> row;
        row.push_back(ans);
        for(int i = 1; i< n; i++){
            ans = ans * (n-i);
            ans = ans/i;
            row.push_back(ans);
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i = 1; i <= numRows; i++){
            vector<int> inter = makeRow(i);
            answer.push_back(inter);
        }
        return answer;
    }
};