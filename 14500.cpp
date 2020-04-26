#include <iostream>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	int mat[n][m];
	int ans = 0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			//i: vertical , j: horizontal
			//4 vertical
			if ((i + 3) < n) {
				int temp = mat[i][j] + mat[i + 1][j] + mat[i + 2][j] + mat[i + 3][j];
				if (ans < temp) {
					ans = temp;
				}
			}
			//4 horizontal
			if ((j + 3) < m) {
				int temp = mat[i][j] + mat[i][j + 1] + mat[i][j + 2] + mat[i][j + 3];
				if (ans < temp) {
					ans = temp;
				}
			}
			//square
			if ((i + 1) < n && (j + 1) < m) {
				int temp = mat[i][j] + mat[i + 1][j] + mat[i][j + 1] + mat[i + 1][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			//L shape 0, 180
			if ((i + 2) < n && (j + 1) < m) {
				int temp1 = mat[i][j] + mat[i + 1][j] + mat[i + 2][j] + mat[i + 2][j + 1];
				int temp2 = mat[i][j] + mat[i][j + 1] + mat[i + 1][j + 1] + mat[i + 2][j + 1];
				if (ans < temp1) {
					ans = temp1;
				}
				if (ans < temp2) {
					ans = temp2;
				}
			}
			//L shape 90 270
			if ((i + 1) < n && (j + 2) < m) {
				int temp1 = mat[i][j] + mat[i + 1][j] + mat[i][j + 1] + mat[i][j + 2];
				int temp2 = mat[i][j + 2] + mat[i + 1][j] + mat[i + 1][j + 1] + mat[i + 1][j + 2];
				if (ans < temp1) {
					ans = temp1;
				}
				if (ans < temp2) {
					ans = temp2;
				}
			}
			//opposite L 0 180
			if ((i + 2) < n && (j + 1) < m) {
				int temp1 = mat[i+2][j] + mat[i][j+1] + mat[i + 1][j+1] + mat[i + 2][j + 1];
				int temp2 = mat[i][j] + mat[i][j + 1] + mat[i + 1][j] + mat[i + 2][j];
				if (ans < temp1) {
					ans = temp1;
				}
				if (ans < temp2) {
					ans = temp2;
				}
			}
			//opposite L 90 270
			if ((i + 1) < n && (j + 2) < m) {
				int temp1 = mat[i][j] + mat[i + 1][j] + mat[i+1][j + 1] + mat[i+1][j + 2];
				int temp2 = mat[i][j] + mat[i][j+1] + mat[i][j + 2] + mat[i + 1][j + 2];
				if (ans < temp1) {
					ans = temp1;
				}
				if (ans < temp2) {
					ans = temp2;
				}
			}
			//Z shape 0=180
			if ((i + 2) < n && (j + 1) < m) {
				int temp = mat[i][j] + mat[i + 1][j] + mat[i + 1][j + 1] + mat[i + 2][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			//Z shape 90 = 270
			if ((i + 1) < n && (j + 2) < m) {
				int temp = mat[i][j + 1] + mat[i][j + 2] + mat[i + 1][j] + mat[i + 1][j + 1];
				if (ans < temp) {
					ans = temp;
				}
			}
			//opposite Z 0=180
			if ((i + 2) < n && (j + 1) < m) {
				int temp = mat[i][j+1] + mat[i + 1][j+1] + mat[i+1][j] + mat[i + 2][j];
				if (ans < temp) {
					ans = temp;
				}
			}
			//opposite Z 90 = 270
			if ((i + 1) < n && (j + 2) < m) {
				int temp = mat[i][j] + mat[i][j + 1] + mat[i + 1][j+1] + mat[i + 1][j + 2];
				if (ans < temp) {
					ans = temp;
				}
			}
			//で, ぬ shape
			if ((i + 1) < n && (j + 2) < m) {
				int temp1 = mat[i][j] + mat[i][j + 1] + mat[i][j + 2] + mat[i + 1][j + 1];
				int temp2 = mat[i + 1][j] + mat[i + 1][j + 1] + mat[i + 1][j + 2] + mat[i][j + 1];
				if (ans < temp1) {
					ans = temp1;
				}
				if (ans < temp2) {
					ans = temp2;
				}
			}
			// っ, た shape
			if ((i + 2) < n && (j + 1) < m) {
				int temp1 = mat[i][j+1] + mat[i+1][j + 1] + mat[i+1][j] + mat[i + 2][j + 1];
				int temp2 = mat[i][j] + mat[i + 1][j] + mat[i+2][j] + mat[i+1][j + 1];
				if (ans < temp1) {
					ans = temp1;
				}
				if (ans < temp2) {
					ans = temp2;
				}
			}
		}
	}

	cout << ans;

	return 0;
}