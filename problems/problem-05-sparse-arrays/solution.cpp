#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    
    vector<string> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    vector<string> queries(q);
    for (int i = 0; i < q; i++) cin >> queries[i];
    
    for (int i = 0; i < q; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == queries[i]) count++;
        }
        cout << count << endl;
    }
    
    return 0;
}