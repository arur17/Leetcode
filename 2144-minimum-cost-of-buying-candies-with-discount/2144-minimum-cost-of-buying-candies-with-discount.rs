impl Solution {
    pub fn minimum_cost(cost: Vec<i32>) -> i32 {
        if cost.len() <= 1 {
            return cost[0];
        } else if cost.len() <= 2 {
            return cost[0] + cost[1];
        }
        let mut min_cost = 0;

        let mut dec_cost = cost.clone();
        dec_cost.sort_by(|a,b| b.cmp(a));
        for (i, value) in dec_cost.iter().enumerate() {
            if i % 3 != 2 {
                min_cost += value;
            }
        }
        return min_cost;
    }
}