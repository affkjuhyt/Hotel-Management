#ifndef PHONG_H
#define PHONG_H

#include <string>

using namespace std;

class Phong {

private:
	int maphong;
	double dientich;
	string trangthai;
	double gia;
	int r;
	int dem;

public:	

	int getMaphong() const;

	void setMaphong(int maphong);

	double getDientich() const;

	void setDientich(double dientich);

	string getTrangthai() const;

	void setTrangthai(string trangthai);

	double getGia() const;

	void setGia(double gia);
	
	int check(int r);

	void thongtinphongTro();
	void xemdanhsachPhong();
	void xemdanhsachGiamdan();
	void xemdanhsachTangdan();
	void xemthemPhong();
	void themPhong();
	void xem();
	void sapxepTang();
	void sapxepGiam();
	void suaPhong(int r);
	void htxoaPhong(int r);
	void timPhong();
};

#endif
