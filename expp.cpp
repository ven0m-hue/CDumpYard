#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int MissingNumber(vector<int>& a, int n) {
        // Your code goes here
        sort(a.begin(), a.end());
        
        for(int i = 0; i< n; i++)
        {
            if (a[0] != 1)
            {
                return n-1;
            }

            else if(a[i+1] != a[i] + 1)
            {
                return a[i] + 1;
            }
        }
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.MissingNumber(array, n) << "\n";
    }
    return 0;
}  