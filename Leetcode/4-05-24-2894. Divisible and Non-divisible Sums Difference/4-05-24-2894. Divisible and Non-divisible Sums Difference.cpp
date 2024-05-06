class Solution {
public:
    int differenceOfSums(int n, int m) {
        int sumNdiv = 0;
        int sumdiv = 0;
        
        for(int i=1;i<=n;i++) {
            if(i % m != 0) {
                sumNdiv+=i;
            }
            else if(i % m == 0) {
                sumdiv+=i;
            }
        }
        return (sumNdiv-sumdiv);
        
    }
};
