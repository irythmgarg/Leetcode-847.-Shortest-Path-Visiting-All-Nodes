class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int n = graph.size();  // Number of nodes
        int finali = (1 << n) - 1;  // Bitmask representing all nodes visited

        set<pair<int, int>> st;  // To track visited (node, mask) pairs
        queue<pair<int, int>> q; // Queue for BFS traversal

        // Initialize the queue with all nodes as starting points
        for (int i = 0; i < n; i++) {
            st.insert({i, 1 << i});
            q.push({i, 1 << i});
        }

        int path = 0;

        // Perform BFS
        while (!q.empty()) {
            int p = q.size();
            while (p--) {
                auto top = q.front();
                q.pop();

                // If all nodes are visited
                if (top.second == finali)
                    return path;

                // Visit all neighbors
                for (int a : graph[top.first]) {
                    int there = top.second | (1 << a); // Update visited mask
                    if (st.find({a, there}) == st.end()) {
                        q.push({a, there});
                        st.insert({a, there});
                    }
                }
            }
            path++; // Increment path length (number of steps)
        }

        return -1; // Just a fallback (problem guarantees a solution)
    }
};
