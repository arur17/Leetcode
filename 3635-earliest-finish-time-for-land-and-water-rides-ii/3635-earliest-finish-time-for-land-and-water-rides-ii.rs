impl Solution {
    fn solve(
        first_start: Vec<i32>,
        first_dur: Vec<i32>,
        second_start: Vec<i32>,
        second_dur: Vec<i32>,
    ) -> i64 {
        let m = second_start.len();

        let mut rides: Vec<(i64, i64)> = second_start
            .into_iter()
            .zip(second_dur.into_iter())
            .map(|(s, d)| (s as i64, d as i64))
            .collect();

        rides.sort_by_key(|x| x.0);

        let starts: Vec<i64> = rides.iter().map(|x| x.0).collect();

        let mut pref = vec![0i64; m];
        pref[0] = rides[0].1;

        for i in 1..m {
            pref[i] = pref[i - 1].min(rides[i].1);
        }

        let mut suff = vec![0i64; m];
        suff[m - 1] = rides[m - 1].0 + rides[m - 1].1;

        for i in (0..m - 1).rev() {
            suff[i] = suff[i + 1].min(rides[i].0 + rides[i].1);
        }

        let mut ans = i64::MAX;

        for (s, d) in first_start.into_iter().zip(first_dur.into_iter()) {
            let t = s as i64 + d as i64;

            let idx = starts.partition_point(|&x| x <= t);

            let mut cur = i64::MAX;

            if idx > 0 {
                cur = cur.min(t + pref[idx - 1]);
            }

            if idx < m {
                cur = cur.min(suff[idx]);
            }

            ans = ans.min(cur);
        }

        ans
    }

    pub fn earliest_finish_time(
        land_start_time: Vec<i32>,
        land_duration: Vec<i32>,
        water_start_time: Vec<i32>,
        water_duration: Vec<i32>,
    ) -> i64 {
        let a = Self::solve(
            land_start_time.clone(),
            land_duration.clone(),
            water_start_time.clone(),
            water_duration.clone(),
        );

        let b = Self::solve(
            water_start_time,
            water_duration,
            land_start_time,
            land_duration,
        );

        a.min(b)
    }
}