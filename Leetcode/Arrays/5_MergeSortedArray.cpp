#include<iostream>
#include<vector>
using namespace std;

class Solution {
	public:
		void merge(vector<int>& a, int n, vector<int>& b, int m) {
		// Reversing the arrays
		reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

		// Taking pointers
        int i = m, j = 0, ind = 0;
		
        while(i < (n + m) && j < m) {

			if(a[i] > b[j]) {
                a[ind] = a[i];
                i++;
            }
            else {
                a[ind] = b[j];
                j++;
            }
            ind++;
        }
		
        while(j < m) 
            a[ind++] = b[j++];
          	
        reverse(a.begin(), a.end());
    }
};