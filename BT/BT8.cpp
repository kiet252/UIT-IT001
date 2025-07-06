/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>

int uoc_chung_lon_nhat(int a, int b);

using namespace std;
int main() {
	int a, b, ucln;
	cin >> a >> b ;
	ucln = uoc_chung_lon_nhat(a, b);
	cout << ucln;
	return 0;
}

int uoc_chung_lon_nhat(int a, int b) {
	if (a == b) {
		return a;
	} else if (a > b) {
		return uoc_chung_lon_nhat(a - b, b);
	} else {
		return uoc_chung_lon_nhat(a, b - a);
	}
}