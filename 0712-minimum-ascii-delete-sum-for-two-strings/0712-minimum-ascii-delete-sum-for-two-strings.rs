impl Solution {
    pub fn minimum_delete_sum(s1: String, s2: String) -> i32 {
        let n = s1.len();
        let m = s2.len();

        let b1 = s1.as_bytes();
        let b2 = s2.as_bytes();

        let mut dp = vec![vec![0i32; m + 1]; n + 1];

        // fill bottom-up
        for i in (0..n).rev() {
            for j in (0..m).rev() {
                if b1[i] == b2[j] {
                    dp[i][j] = b1[i] as i32 + dp[i + 1][j + 1];
                } else {
                    dp[i][j] = dp[i + 1][j].max(dp[i][j + 1]);
                }
            }
        }

        let sum1: i32 = b1.iter().map(|&c| c as i32).sum();
        let sum2: i32 = b2.iter().map(|&c| c as i32).sum();

        sum1 + sum2 - 2 * dp[0][0]
    }
}
