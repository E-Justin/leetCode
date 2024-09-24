// 2ms
// 7.9 MB

#include stdio.h

int
n_stairs(int n) {
	int a = 0;
	int b = 1;

	for (int i = 0, x = 0, y = 1, res = 0; i < n && n != 1; i++) {
			
		if (i != 1) {
			res = x + y;
			x = y;
			y = res;
		}
			

		if (i == n - 1) {
			a = res;
		}
		else if (i == n - 2) {
			b = res;
		}
	}

	return a + b;

}
