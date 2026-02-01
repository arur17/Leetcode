impl Solution {
    pub fn minimum_cost(nums: Vec<i32>) -> i32 {
        let n = nums.len();
        let mut ans = i32::MAX;

        for i in 1..=n - 2 {
            for j in i + 1..=n - 1 {
                let cost = nums[0] + nums[i] + nums[j];
                ans = ans.min(cost);
            }
        }

        ans
    }
}
