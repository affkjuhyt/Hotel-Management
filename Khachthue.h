#ifndef KHACHTHUE_H
#define KHACHTHUE_H
#include <string>
#include "Phong.h"

using namespace std;

class Khachthue {

protected:
	int maphong;
	string ten;
	string sdt;
	string quequan;
	string ngaysinh;
	string ngaythue;

public:
	
	int getMaphong();
	string getTen();

	string getSdt();

	string getQuequan();

	string getNgaysinh();

	string getNgaythue();

	string getNgaydi();
	
	int kiemtra(int m);
	string kiemtra(string t);
	
	void xemDanhsachthue();
	void timkiemNguoithue();
	void thongtinNguoithue(int m);
	void thongtin(string t);
	void themNguoithue();
	void suaNguoithue(int m);
	void xoaNguoiThue(int m);
	void timKiemkhachthue();
	void timNguoithuetheoten();
	void timNguoithuetheophong();
};

#endif
