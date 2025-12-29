impl Solution {
    pub fn longest_palindrome(s: String) -> String {
        let char_vec: Vec<char> = s.chars().collect();
        let n = char_vec.len();
        if n <= 1 {
            return s;
        }

        let mut start = 0;
        let mut max_len = 1;

        fn expand(char_vec: &Vec<char>, mut l: i32, mut r: i32) -> (i32, i32) {
            let n = char_vec.len() as i32;
            while l >= 0 && r < n && char_vec[l as usize] == char_vec[r as usize] {
                l -= 1;
                r += 1;
            }
            (l + 1, r - 1)
        }

        for i in 0..n {
            let (l1, r1) = expand(&char_vec, i as i32, i as i32);
            let len1 = (r1 - l1 + 1) as usize;
            if len1 > max_len {
                max_len = len1;
                start = l1 as usize;
            }
            let (l2, r2) = expand(&char_vec, i as i32, i as i32 + 1);
            let len2 = (r2 - l2 + 1) as usize;
            if len2 > max_len {
                max_len = len2;
                start = l2 as usize;
            }
        }

        char_vec[start..start + max_len].iter().collect()
    }
}