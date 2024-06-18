class Solution {
    public List<String> fizzBuzz(int n) {
        List<String> lst = new ArrayList<>();
        
        for(int i = 1; i<=n; i++){
        
            if(i % 5 == 0 && i % 3 == 0){
                String c = Integer.toString(i);
                c = "FizzBuzz";
                lst.add(c);
            }
            else if(i % 3 == 0){
                String a = Integer.toString(i);
                a = "Fizz";
                lst.add(a);
            }
            else if(i % 5 == 0){
                String b = Integer.toString(i);
                b = "Buzz";
                lst.add(b);
            }
            // if(i % 5 == 0 && i % 3 == 0){
            // String c = Integer.toString(i);
            //     c = "FizzBuzz";
            //     lst.add(c);
            // }
            else if (i % 5 != 0 && i % 3 != 0) {
                lst.add(Integer.toString(i));
            }
        }

        return lst;
    }
}