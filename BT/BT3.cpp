/* Mã số sinh viên: 24520894
Họ và tên sinh viên: Cao Tuấn Kiệt
Ngày sinh: 06/08/2006
Lớp: KTPM2024.2
*/
#include <iostream>
using namespace std;
int main() {
	double a, b, c, d, e, f;
	cout << "ax + by = e" << endl << "cx + dy = f" << endl;
	//Doc gia tri a, b, e, c, d va f
	cout << "Hay nhap gia tri a: ";
	cin >> a;
	cout << "Hay nhap gia tri b: ";
	cin >> b;
	cout << "Hay nhap gia tri e: ";
	cin >> e;
	cout << "Hay nhap gia tri c: ";
	cin >> c;
	cout << "Hay nhap gia tri d: ";
	cin >> d;
	cout << "Hay nhap gia tri f: ";
	cin >> f;
	//Truong hop vo so nghiem
	if ( (a == 0 && b == 0 && e == 0) || (c == 0 && d == 0 && f == 0) ) {
		cout << "He phuong trinh co vo so nghiem.";
		return 0;
	}
	//Truong hop vo nghiem
	if ( (a == 0 && b == 0 && e != 0) || (c == 0 && d == 0 && f != 0) ) {
		cout << "He phuong trinh vo nghiem.";
		return 0;
	}
	//Truong hop tinh duoc nghiem
	double x = (e * d - b * f) / (a * d - b * c);
	double y = (a * f - e * c) / (a * d - b * c);
	cout << "x = " << x << ", y = " << y;
	return 0;
}