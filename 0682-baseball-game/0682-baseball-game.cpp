class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> answer;
        for( auto op : ops){
            if(op == "+"){
                int size = answer.size();
                if(size>=2){
                    answer.push_back(answer[size-1] + answer[size-2]);
                }
                else answer.push_back(stoi(op));
            }
            else if (op == "C"){
                if(!answer.empty()){
                    answer.pop_back();
                }
            }
            else if(op == "D"){
                if(!answer.empty()){
                    answer.push_back(2*answer.back());
                }
            }
            else answer.push_back(stoi(op));
        }
        int sum {0};
        for(auto op:answer){
            sum += op;
        }
        return sum;
    }
};