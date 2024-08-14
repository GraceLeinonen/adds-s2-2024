#include <vector>

class Fibonacci {

    public:
    int nFibonacci(int n);
    int nFibonacciTail(int n, int next_to_last, int last);
    int nFibonacciMemoisation(int n, std::vector<int>& memo);

};