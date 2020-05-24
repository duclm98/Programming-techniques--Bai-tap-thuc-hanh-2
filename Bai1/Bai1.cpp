// Bai1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "MangSinhVien.h"

int main()
{
	SINHVIEN* A = sinhVienArrIn();
	cout << "Danh sach sinh vien: " <<endl;
	sinhVIenArrOut(A);
	return 0;
}
