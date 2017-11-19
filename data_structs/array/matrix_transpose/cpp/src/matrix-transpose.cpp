#include "iostream"

using namespace std;
int main(int argc, char const *argv[])
 {
	int m, n;
	cin >> m;
	cin >> n;
	int matrix[m][n];
	for (int i = 0; i < m; ++i){
		for (int j = 0; j < n; ++j){
			cin >> matrix[i][j];
		}
	} 	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cout << matrix[j][i] << " ";
		}
		cout << endl;
	}
 	return 0;
 }