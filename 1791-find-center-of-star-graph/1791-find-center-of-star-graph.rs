impl Solution {
    pub fn find_center(edges: Vec<Vec<i32>>) -> i32 {
        let e1 = &edges[0];
        let e2 = &edges[1];

        if e1[0] == e2[0] || e1[0] == e2[1] {
            e1[0]
        } else {
            e1[1]
        }
    }
}