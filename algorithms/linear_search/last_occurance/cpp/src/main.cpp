#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	int size, n, m, o = -1;
	cin >> size;
	cin >> n;
	for (int i = 1; i <= size; ++i) {
		cin >> m;
		if (m == n) { o = i; }
	}
	cout << o << endl;
	return 0;
}