#include <queue>
#include <vector>

int kth_largest(std::vector<int> values, int k) {

    std::priority_queue<int> pq;

    for (int i = 0; i < values.size(); i++) {
        pq.push(values[i]);
    }

    for (int i = 0; i < k - 1; i++) {
        pq.pop();
    }

    return pq.top();
}