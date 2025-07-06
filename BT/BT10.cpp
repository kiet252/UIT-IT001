/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isTo(int n);

int main() {
	int n;
	cin >> n;
	cout << "Cac so nguyen to nho hon " << n << " la:" << endl;
	for (int i = 2; i < n; i++) {
		if (isTo(i)) cout << i << " ";
	}
	return 0;
}

bool isTo(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}	                         