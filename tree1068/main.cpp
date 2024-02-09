#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> v(1000000, 0);
int main() {
	ios::sync_with_stdio(false); 
	cin.tie(0); 
	cout.tie(0);
	int n, i;
	cin >> n;
	v[1] = 0;
	for (i = 2; i <= n; i++) {
		v[i] = v[i - 1] + 1;
		if (i % 6 == 0) {
			v[i] = min(v[i / 2] + 1, v[i / 3] + 1);
			continue;
		}
		if (i % 2 == 0) {
			v[i] = min(v[i / 2] + 1, v[i - 1] + 1);

		}
		if (i % 3 == 0) {
			v[i] = min(v[i / 3] + 1, v[i - 1] + 1);
			
		}

	}


	cout << v[n];
	



}