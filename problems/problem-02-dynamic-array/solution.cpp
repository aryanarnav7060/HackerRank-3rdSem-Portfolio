#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> seq(n);
    int lastAnswer = 0;
    
    while (q--) {
        int type, x, y;
        cin >> type >> x >> y;
        int idx = (x ^ lastAnswer) % n;
        
        if (type == 1) {
            seq[idx].push_back(y);
        } else {
            lastAnswer = seq[idx][y % seq[idx].size()];
            cout << lastAnswer << endl;
        }
    }
    
    return 0;
}