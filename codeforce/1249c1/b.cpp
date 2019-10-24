#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int q;
	cin >> q;
	for (int i = 0; i < q; ++i) {
		int n;
		cin >> n;
		while (true) {
			bool ok = true;
			int cur = n;
			while (cur > 0) {
				if (ok && cur % 3 == 2) ok = false;
				cur /= 3;
			}
			if (ok) break;
			++n;
		}
		cout << n << endl;
	}
	
	return 0;
}