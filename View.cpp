#include <iostream>
#include <conio.h>
#include <string>
#include <iomanip>
#include "View.h"
#include "Khachthue.h"
#include "Phong.h"
#include "Hoadon.h"

using namespace std;

void View::show() {
	int lc;
	while (lc!=3) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t\t===================QUAN LI PHONG TRO==================" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=                  ================                  =" << endl;
		cout << "\t\t\t=                  =     MENU     =                  =" << endl;
		cout << "\t\t\t=                  ================                  =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=                1. Quan li cac phong tro            =" << endl;
		cout << "\t\t\t=                2. Quan li khach thue phong         =" << endl;
		cout << "\t\t\t=                3. Quan li hoa don tien phong       =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t======================================================" << endl;
		cout << "\t\t\tNhap lua chon cua ban: ";
		cin >> lc;
		if ((lc > 3) or (lc < 1)) {
			cout << "\n\t\t\tNhan mot nut bat ki de tiep tuc....!!";
			getch();
		} else {
			switch(lc) {
				case 1:
					show1();
					break;
				case 2:
					show2();
					break;
				case 3:
					show3();
					break;
				default:
				{
					cout << "\n\n\t\t\tLua chon sai.....!!!";
				} 
			}
		}
		
	}
}

void View::show1() {
	int lc;
	while (lc!=4) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t\t===============QUAN LI CAC PHONG TRO==================" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=  Quan li phong tro                                 =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=               1. Xem danh sach cac phong tro       =" << endl;
		cout << "\t\t\t=               2. Tim kiem thong tin phong          =" << endl;
		cout << "\t\t\t=               3. Them phong moi                    =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=     0. Tro ve trang truoc                          =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t======================================================" << endl;
		cout << "\t\t\tNhap lua chon cua ban: ";
		cin >> lc;
		
		if ((lc > 3) or (lc < 0)) {
			cout << "\n\t\t\tNhan mot nut bat ki de tiep tuc....!!";
			getch();
		} else {
			switch(lc) {
				case 1:
					{
						Phong phong;
						phong.xemdanhsachPhong();
					}
					break;
				case 2:
					{
						Phong phong;
						phong.thongtinphongTro();
					}
					break;
				case 3:
					{
						Phong phong;
						phong.themPhong();
					}
					break;
				case 0:
					show();
					break;
				default:
				{
					cout << "\n\n\t\t\tLua chon sai.....!!!";
				} 
			}
		}
	}
}

void View::show2() {
	Khachthue khachthue;
	int lc;
	while (lc!=3) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t\t=============QUAN LI KHACH THUE PHONG=================" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=  Quan li khach thue phong                          =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=               1. Xem danh sach khach thue          =" << endl;
		cout << "\t\t\t=               2. Tim kiem thong tin khach thue     =" << endl;
		cout << "\t\t\t=               3. Them khach thue moi               =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=     0. Tro ve trang truoc                          =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t======================================================" << endl;
		cout << "\t\t\tNhap lua chon cua ban: ";
		cin >> lc;
		
		if ((lc > 3) or (lc < 0)) {
			cout << "\n\t\t\tNhan mot nut bat ki de tiep tuc....!!";
			getch();
		} else {
			switch(lc) {
				case 1:
					khachthue.xemDanhsachthue();
					break;
				case 2:
					khachthue.timKiemkhachthue();
					break;
				case 3:
					khachthue.themNguoithue();
					break;
				case 0:
					show();
					break;
				default:
				{
					cout << "\n\n\t\t\tLua chon sai.....!!!";
				} 
			}
		}
	}
}

void View::show3() {
	Hoadon hoadon;
	int lc;
	while (lc!=4) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << "\t\t\t=============QUAN LI HOA DON TIEN PHONG===============" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=  Quan li hoa don tien phong                        =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=               1. Xem thong tin hoa don             =" << endl;
		cout << "\t\t\t=               2. Them hoa don                      =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t=     0. Tro ve trang truoc                          =" << endl;
		cout << "\t\t\t=                                                    =" << endl;
		cout << "\t\t\t======================================================" << endl;
		cout << "\t\t\tNhap lua chon cua ban: ";
		cin >> lc;
		
		if ((lc > 3) or (lc < 0)) {
			cout << "\n\t\t\tNhan mot nut bat ki de tiep tuc....!!";
			getch();
		} else {
			switch(lc) {
				case 1:
					hoadon.xemHoadon();
					break;
				case 2:
					hoadon.themHoadon();
					break;
				case 0:
					show();
					break;
				default:
				{
					cout << "\n\n\t\t\tLua chon sai.....!!!";
				} 
			}
		}
	}
}
