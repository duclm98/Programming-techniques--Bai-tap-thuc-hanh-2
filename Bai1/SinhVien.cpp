#include "SinhVien.h"

istream& operator>>(istream& inDev, SINHVIEN& sv) {
	cout << "Nhap ho ten sinh vien: ";
	inDev.getline(sv.hoTen, 50);
	cout << "Nhap diem toan: ";
	inDev >> sv.toan;
	cout << "Nhap diem ly: ";
	inDev >> sv.ly;
	cout << "Nhap diem hoa: ";
	inDev >> sv.hoa;

	inDev.ignore();

	return inDev;
}

ostream& operator<<(ostream& outDev, SINHVIEN& sv) {
	outDev << "Ho ten: " << sv.hoTen << "\t" << "Toan: " << sv.toan << "\t" << "Ly: " << sv.ly << "\t" << "Hoa: " << sv.hoa << endl;

	return outDev;
}