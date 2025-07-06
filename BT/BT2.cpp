/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
using namespace std;
int main() {
	char chu;
	cin >> chu;
	if (chu >= 'A' && chu <= 'Z') {
		cout << char(chu + 32);
	} else if (chu >= 'a' && chu <= 'z') {
		cout << char(chu - 32);
	}
	return 0;
}