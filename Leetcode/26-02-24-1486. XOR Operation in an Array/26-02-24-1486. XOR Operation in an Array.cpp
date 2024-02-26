class Solution {
public:
    int xorOperation(int n, int start) {
        int count= start;
        for(int i=1;i<n;i++) {
            count=count^(start+2*i);
        }
        return count;
    }
};
