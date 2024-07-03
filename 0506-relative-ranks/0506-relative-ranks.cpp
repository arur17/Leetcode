class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> answer(n);
        vector<int> sortedScore = score;
        sort(sortedScore.begin(), sortedScore.end(), greater<int>());
        unordered_map<int, int> rankMap;
        for (int i = 0; i < n; ++i) {
            rankMap[sortedScore[i]] = i + 1;
        }
        for (int i = 0; i < n; ++i) {
            int rank = rankMap[score[i]];
            if (rank == 1) {
                answer[i] = "Gold Medal";
            } else if (rank == 2) {
                answer[i] = "Silver Medal";
            } else if (rank == 3) {
                answer[i] = "Bronze Medal";
            } else {
                answer[i] = to_string(rank);
            }
        }
        
        return answer;
    }
};