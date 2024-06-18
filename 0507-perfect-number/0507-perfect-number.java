class Solution {
    public boolean checkPerfectNumber(int num) {
        ArrayList<Integer> lst = new ArrayList<>();
        int sum = 0;
        for(int i=1; i<num; i++){
            if(num % i == 0){
                lst.add(i);
            }
        }
        for(int i=0; i<lst.size(); i++){
            sum += lst.get(i);
        }
        return sum == num;
        
    }
}