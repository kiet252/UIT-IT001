/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>

int uoc_chung_lon_nhat(int a, int b);

using namespace std;
int main() {
	int a, b, bcnn;
	cin >> a >> b ;
	bcnn = (a * b) / uoc_chung_lon_nhat(a, b);
	cout << bcnn;
	return 0;
}

int uoc_chung_lon_nhat(int a, int b) {
	if (b == 0) {
		return a;
	}
	return uoc_chung_lon_nhat(b, a % b);
}