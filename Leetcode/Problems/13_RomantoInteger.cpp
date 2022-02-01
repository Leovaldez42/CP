#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        unordered_map<char, int> _map;
        _map['I'] = 1;
        _map['V'] = 5;
        _map['X'] = 10;
        _map['L'] = 50;
        _map['C'] = 100;
        _map['D'] = 500;
        _map['M'] = 1000;
        for(int i=1; i<=s.length(); i++) {
            if(_map[s[i-1]] < _map[s[i]]) {
                ans = ans + _map[s[i]] - _map[s[i-1]];
                i++;
            } else {
                ans += _map[s[i-1]];
            }
        }
        return ans;
    }
};