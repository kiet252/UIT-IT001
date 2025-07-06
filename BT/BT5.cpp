/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long long n, sum;
	sum = 0;
	cin >> n;
	for (long long i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) sum += i;
		if (n % i == 0 && i != n / i ) sum += n / i;
	}
	if (sum - n == n) {
		cout << n << " la so hoan chinh.";
	} else {
		cout << n << " khong la so hoan chinh.";
	}
	return 0;
}