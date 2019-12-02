#ifndef HOADON_H
#define HOADON_H

#include <iostream>
#include <string>
#include "Khachthue.h"

using namespace std;

class Hoadon {

private:
	string chuthue;
	string thoigianthue;
	double tongtien;
	string ngaythanhtoan;
	Khachthue khachthue;

public:
	string getChuthue();

	Khachthue getNguoithue();

	void setThoigianthue(string thoigianthue);

	string getThoigianthue();

	double getTongtien();

	void setTongtien(double tongtien);

	void setNgaythanhtoan(string ngaythanhtoan);

	void xemHoadon();

	void suaHoadon();

	void xoaHoadon();

	void timHoadon();
};

#endif
