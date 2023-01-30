#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int m, int cnt = 0;
	cin >> s >> m;
	char top = s[0];
	
	vector<char> v1, vector<int> v2;
	v1.push_back(top);
	for(int i = 1; i <= s.size(); i++) {
		if(top == s[i]) {
			cnt++;
		} else {
			v1.push_back(s[i]);
			v2.push_back(cnt + 1);
			cnt = 0;
			top = s[i];
		}
	}
	v1.resize(v1.size() - 1);
	
	int max = 0, int n;
	vector<char> v, vector<char> v3;
	for(int i = 0; i < v2.size(); i++) {
		if(v2[i] > max) {
			max = v2[i];
		}
	}
	while(max > 0) {
		for(int i = 0; i < v2.size(); i++) {
			if(v2[i] == max) {
				v.push_back(v1[i]);
			}
		}
		sort(v.begin(), v.end());
		n = max;
		if(max > m) n = m;
		for(int i = 0; i < v.size(); i++) {
			for(int k = 0; k < n; k++) {
				v3.push_back(v[i]);
			}
		}
		v.clear();
		max--;
	}
	
	cnt = 0, top = '1';
	for(int i = 0; i < v3.size(); i++) {
		if(v3[i] == top) {
			cnt++;
		} else {
			cnt = 0;
			top = v3[i];
		}
		if(cnt < m) {
			cout << v3[i];
		}
	}
}
