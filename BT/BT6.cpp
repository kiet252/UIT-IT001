/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
using namespace std;
int main() {
	long long n, temp;
	cin >> n;
	temp = n;
	if (n >= 0 && n <= 9) {
		cout << temp << " khong tang dan tu trai qua phai.";
		return 0;
	}
	
	for (long long i = n; i > 10; i /= 10) {
		if (n % 10 < (n / 10) % 10) {
			cout << temp << " khong tang dan tu trai qua phai.";
			return 0;
		}
		n /= 10;
	}
	cout << temp << " tang dan tu trai qua phai.";
	return 0;
}