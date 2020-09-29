#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a[4];
	for(int i=0; i<4; ++i)
		cin >> a[i];
	sort(a, a+3);
	cout << max(0, a[3]-(a[1]-a[0]))+max(0, a[3]-(a[2]-a[1])) << "\n";
}
