// Definition for a binary tree node.
// #[derive(Debug, PartialEq, Eq)]
// pub struct TreeNode {
//   pub val: i32,
//   pub left: Option<Rc<RefCell<TreeNode>>>,
//   pub right: Option<Rc<RefCell<TreeNode>>>,
// }
// 
// impl TreeNode {
//   #[inline]
//   pub fn new(val: i32) -> Self {
//     TreeNode {
//       val,
//       left: None,
//       right: None
//     }
//   }
// }
use std::rc::Rc;
use std::cell::RefCell;
use std::collections::VecDeque;

impl Solution {
    pub fn max_level_sum(root: Option<Rc<RefCell<TreeNode>>>) -> i32 {
        let root = root.unwrap();
        let mut queue = VecDeque::new();
        queue.push_back(root);

        let mut level = 1;
        let mut best_level = 1;
        let mut max_sum = i32::MIN;

        while !queue.is_empty() {
            let size = queue.len();
            let mut level_sum = 0;

            for _ in 0..size {
                let node = queue.pop_front().unwrap();
                let node_ref = node.borrow();
                level_sum += node_ref.val;

                if let Some(left) = node_ref.left.clone() {
                    queue.push_back(left);
                }
                if let Some(right) = node_ref.right.clone() {
                    queue.push_back(right);
                }
            }

            if level_sum > max_sum {
                max_sum = level_sum;
                best_level = level;
            }

            level += 1;
        }

        best_level
    }
}
