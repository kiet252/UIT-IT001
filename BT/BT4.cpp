/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
using namespace std;
int main() {
	long long n;
	cin >> n;
	if (n == 0) {
		cout << 0;
		return 0;
	}
	
	for (long long i = n; i > 0; i /= 10) {
		cout << n % 10;
		n /= 10;
	}
	return 0;
}