#pragma once
#include <iostream>
using namespace std;

struct sinhvien
{
	char* hoTen = new char[50];
	int toan, ly, hoa;
};
typedef struct sinhvien SINHVIEN;

istream& operator>>(istream& inDev, SINHVIEN& ps);
ostream& operator<<(ostream& outDev, SINHVIEN& ps);