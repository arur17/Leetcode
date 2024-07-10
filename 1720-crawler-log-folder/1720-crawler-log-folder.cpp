class Solution {
public:
    int minOperations(vector<string>& logs) {
        int count = 0;
        for(int i = 0;i<logs.size(); i++){
            if(logs[i] == "../"){
                if(count > 1){
                    count--;
                }
                else if(count == 1){
                    count = 0;
                }
            }
            else if(logs[i] == "./"){
                    count = count;
            }
            else{
                count++;
            }
        }
    return count;
    }
};