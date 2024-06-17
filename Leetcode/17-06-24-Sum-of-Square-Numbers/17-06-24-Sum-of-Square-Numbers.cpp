class Solution {
    public boolean judgeSquareSum(int c) {
        if(c == 0) {
            return true;
        }
        long i = 0;
        long j = (long) Math.sqrt(c);
        while(i <= j && i < c && j >= 1) {
            long sum = i * i + j * j;
            if( sum == c) {
                return true;
            }
            else if( sum > c) {
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
}
