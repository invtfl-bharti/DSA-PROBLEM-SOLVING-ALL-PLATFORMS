class Solution
{
	public:
		long long int PowMod(long long int x, long long int n, long long int M) {
    x = x % M; // Reduce x modulo M to handle large values of x
    
    if (n == 0) return 1; // Base case: x^0 is always 1

    if (n % 2 == 0) { // If n is even
        // Recursively calculate (x^2)^(n/2) % M
        long long int y = PowMod(x * x % M, n / 2, M);
        return y;
    } else { // If n is odd
        // Recursively calculate x * (x^(n-1) % M)
        long long int y = x * PowMod(x, n - 1, M) % M;
        return y;
    }
}

};
