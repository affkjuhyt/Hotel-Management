#ifndef HOADON_H
#define HOADON_H

#include <iostream>
#include <string>
#include "Khachthue.h"

using namespace std;

class Hoadon : public Khachthue {

private:
	int mahoadon;
	double giaphong;
	string thoigianthue;
	double tongtien;
	string ngaythanhtoan;
	Khachthue khachthue;

public:
	int getMahoadon();
	void setMahoadon(int mahoadon);
	double getGiaphong();
	void setGiaphong(double giaphong);
	Khachthue getKhachthue();
	void setThoigianthue(string thoigianthue);
	string getThoigianthue();
	double getTongtien();
	void setTongtien(double tongtien);
	string getNgaythanhtoan();
	void setNgaythanhtoan(string ngaythanhtoan);

	void themHoadon();
	
	void xemHoadon();

	void suaHoadon(int r);

	void xoaHoadon(int r);
	
	int kiemtra(int m);
	int check(int r);
};

#endif
