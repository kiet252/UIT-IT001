/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n <= 9 && n >= 1) {
		cout << "Da doc duoc gia tri " << n;
	} else {
		cout << "Khong doc duoc gia tri!";
	}
	return 0;
}