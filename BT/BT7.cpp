/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
#include <cmath>
using namespace std;

bool La_Chinh_Phuong(int n);

int main() {
	long long n;
	cin >> n;
	if (La_Chinh_Phuong(n)) {
		cout << n << " la so chinh phuong.";
	} else {
		cout << n << " khong la so chinh phuong.";
	}
	return 0;
}

bool La_Chinh_Phuong(int n) {
	long long sq;
	sq = sqrt(n);
	if (sq * sq == n) {
		return true;
	} else {
		return false;
	}
}