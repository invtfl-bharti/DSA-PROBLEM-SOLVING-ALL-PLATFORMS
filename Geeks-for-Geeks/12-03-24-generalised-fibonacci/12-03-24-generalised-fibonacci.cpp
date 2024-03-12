//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int genFibNum(int a, int b, int c, int n, int m) {
        if (n <= 2)
            return 1;

        vector<vector<long long>> res = {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}
        };

        vector<vector<long long>> gen_fib_matrix = {
            {a, b, c},
            {1, 0, 0},
            {0, 0, 1}
        };

        n -= 2;

        while (n) {
            if (n & 1) {
                res = matrixMultiply(res, gen_fib_matrix, m);
            }
            gen_fib_matrix = matrixMultiply(gen_fib_matrix, gen_fib_matrix, m);
            n >>= 1;
        }

        long long result = 0;
        for (int i = 0; i < 3; ++i) {
            result = (result + res[0][i]) % m;
        }

        return static_cast<int>(result);
    }

private:
    vector<vector<long long>> matrixMultiply(const vector<vector<long long>>& A, const vector<vector<long long>>& B, int m) {
        int n = A.size();
        vector<vector<long long>> result(n, vector<long long>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    result[i][j] = (result[i][j] + (A[i][k] * B[k][j]) % m) % m;
                }
            }
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a,b,c,n,m;
        
        cin>>a>>b>>c>>n>>m;

        Solution ob;
        cout << ob.genFibNum(a,b,c,n,m) << endl;
    }
    return 0;
}
// } Driver Code Ends
