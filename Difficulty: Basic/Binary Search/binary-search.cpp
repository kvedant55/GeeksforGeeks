//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int i = -1, l = 0, r = n - 1;
        while(l <= r){
            int mid = (l + r)/2;
            if(k == arr[mid]){
                i = mid;
                break;
            }
            else if(k > arr[mid]){
                l = mid + 1;
            }
            else if(k < arr[mid]){
                r = mid - 1;
            }
        }
        return i;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}

// } Driver Code Ends