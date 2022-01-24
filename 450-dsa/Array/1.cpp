#include<iostream>
#include<climits>
using namespace std;

struct Pair {
    int min_num;
    int max_num;
};

Pair getMinMax(int arr[], int n) {
    struct Pair minmax;
    minmax.min_num = INT_MAX;
    minmax.max_num = INT_MIN;
    for(int i=0; i<n; i++) {
        minmax.max_num = max(minmax.max_num, arr[i]);
        minmax.min_num = min(minmax.min_num, arr[i]);
    }
    return minmax;
}

int main() {
	int n;  cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)
	    cin >> arr[i];
	
	int max_num = INT_MIN;
	int min_num = INT_MAX;
	for(int i=0; i<n; i++) {
	    max_num = max(max_num, arr[i]);
	    min_num = min(min_num, arr[i]);
	}
    struct Pair minmax = getMinMax(arr, n);
    cout << minmax.min_num << " " << minmax.max_num << endl;
}