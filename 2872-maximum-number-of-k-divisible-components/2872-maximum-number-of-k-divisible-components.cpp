class Solution {
 public:
  int maxKDivisibleComponents(int n, vector<vector<int>>& edges, vector<int>& values, int k) {
    int result = 0;
    vector<vector<int>> adjacencyList(n);
    for (const auto& edge : edges) {
      adjacencyList[edge[0]].emplace_back(edge[1]);
      adjacencyList[edge[1]].emplace_back(edge[0]);
    }
    computeSubtreeSum(adjacencyList, 0, -1, values, k, result);
    return result;
  }

 private:
  long computeSubtreeSum(const vector<vector<int>>& adjacencyList, int currentNode, int parentNode,
                         const vector<int>& values, int divisor, int& result) {
    long currentSum = values[currentNode];
    for (const int neighbor : adjacencyList[currentNode]) {
      if (neighbor != parentNode) {
        currentSum += computeSubtreeSum(adjacencyList, neighbor, currentNode, values, divisor, result);
      }
    }
    if (currentSum % divisor == 0) {
      ++result;
    }
    return currentSum;
  }
};
