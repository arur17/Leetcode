class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
    long long totalWait = 0;
    long long currentTime = 0;

    for (auto &customer : customers) {
        int arrival = customer[0];
        int time = customer[1];

        if (currentTime < arrival) {
            currentTime = arrival;
        }

        currentTime += time;
        totalWait += currentTime - arrival;
    }

    return (double)totalWait / customers.size();      
    }
};