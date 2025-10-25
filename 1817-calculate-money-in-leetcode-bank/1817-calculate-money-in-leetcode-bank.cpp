// class Solution {
// public:
//     int totalMoney(int n) {
//         int sum = 0;
//         int p = 0;
//         int k = 0;
//         int left = n%7;
//         int x = n/7;

//         for(int i = 1; i <= x; i++){
//             p++;
//             k = p;
//             for(int j = 1; j<= 7; j++){
//                 sum += p;
//                 p++;
//             }
//             p = k;
//         }

//         for(int i = 0; i<= left; i++){
//             sum = sum+p;
//             p++;
//         }
//         return sum;
//     }
// };
class Solution {
public:
    int totalMoney(int n) {
        int sum = 0;
        int weeks = n / 7;
        int days = n % 7;

        int weekStart = 1; 

        
        for (int w = 0; w < weeks; ++w) {
            for (int d = 0; d < 7; ++d) {
                sum += weekStart + d;
            }
            weekStart++; 
        }

        for (int d = 0; d < days; ++d) {
            sum += weekStart + d;
        }

        return sum;
    }
};

