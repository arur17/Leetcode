impl Solution {
    pub fn is_trionic(nums: Vec<i32>) -> bool {
        let n = nums.len();
        if n < 4 {
            return false;
        }
        let mut i = 0;
        while i + 1 < n && nums[i] < nums[i + 1] {
            i += 1;
        }
        if i == 0 {
            return false;
        }

        let p = i;

        while i + 1 < n && nums[i] > nums[i + 1] {
            i += 1;
        }
        if i == p {
            return false;
        }

        let q = i;
        while i + 1 < n && nums[i] < nums[i + 1] {
            i += 1;
        }

        i == n - 1 && q < n - 1
    }
}
