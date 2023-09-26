class Solution {
public:
    int dir, sz;
    vector<vector<int>> ans;
    void work(int idx, vector<vector<int>> graph, vector<int> lol) {
        if (idx == sz) {
            return;
        }
        else if (idx == dir) {
            lol.push_back(idx);
            ans.push_back(lol);
            return;
        }
        for (auto j : graph[idx]) {
            lol.push_back(idx);
            work(j, graph, lol);
            lol.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        dir = graph.size() - 1;
        sz = dir + 1;
        work(0, graph, {});
        return ans;
    }
};