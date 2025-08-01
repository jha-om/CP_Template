#include<bits/stdc++.h>

class Disjointset {
    vector<int> rank, parent;
public:
    Disjointset(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);

        for (int i = 0; i <= n;i++) {
            parent[i] = i;
        }
    }

    int findUlPar(int x) {
        if(x == parent[x]) {
            return x;
        }
        // if we write the below line, then tc: o(logn);
        // return findUlPar(x);
        return parent[x] = findUlPar(parent[x]);
    }

    void unionByRank(int u, int v) {
        int ulp_u = findUlPar(u);
        int ulp_v = findUlPar(v);

        if(ulp_u == ulp_v) {
            return;
        }

        if(rank[ulp_u] < rank[ulp_v]) {
            parent[ulp_u] = ulp_v;
        }
        else if(rank[ulp_v] < rank[ulp_u]) {
            parent[ulp_v] = ulp_u;
        }
        else {
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }

    void unionBySize() {

    }
};

using namespace std;

#define ll long long
#define nline "\n"
#define MOD 1000000007

/*Knowing of running time*/
clock_t startTime;
double getCurrentTime() {
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

int ceil_div(int a, int b) {
    return (a + b - 1) / b;
}

void solve()
{
    
}

int main() {
    startTime = clock();
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}