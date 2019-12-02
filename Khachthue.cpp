#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <string>
#include "gotoxy.h"
#include "Phong.h"
#include "Khachthue.h"
#include "View.h"

int Khachthue::getMaphong() {
	return maphong;
}

string Khachthue::getTen() {
	return ten;
}

string Khachthue::getSdt() {
	return sdt;
}

string Khachthue::getQuequan() {
	return quequan;
}

string Khachthue::getNgaysinh() {
	return ngaysinh;
}

string Khachthue::getNgaythue() {
	return ngaythue;
}


void Khachthue::xemDanhsachthue() {
	int lc;
	ifstream fin("Khachthue.txt",ios::in);
	int flag;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t============================QUAN LI KHACH THUE PHONG=================================" << endl;
	cout << "\t\t\t=                                                                                   =" << endl;
	cout << "\t\t\t=  Quan li khach thue > DS khach thue phong                                         =" << endl;
	cout << "\t\t\t=                                                                                   =" << endl;
	cout << "\t\t\t=                                                                                   =" << endl;
	cout << "\t\t\t=" << setw(10) << "So phong" << setw(10) << "Ten" << setw(13) << "Dia chi" << setw(15) << "Ngay sinh" << setw(15)<<"Ngay thue" <<setw(10)<<"SDT"<<"          ="<< endl;
	while(!fin.eof()) {	
				fin>>maphong;
				fin>>ten;
				fin>>quequan;
				fin>>ngaysinh;
				fin>>ngaythue;
				fin>>sdt;
				cout << "\t\t\t=" << setw(10) << maphong << setw(10) << ten << setw(13) << quequan << setw(15) << ngaysinh<< setw(15) << ngaythue << setw(10) << sdt <<"          ="<< endl;
	}
	cout << "\t\t\t=                                                                                   =" << endl;
	cout << "\t\t\t=                                                                                   =" << endl;
	cout << "\t\t\t=   1. Xem thong tin khach hang                                                     =" << endl;
	cout << "\t\t\t=   0. Tro ve trang truoc                                                           =" << endl;
	cout << "\t\t\t=====================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	fin.close();
	
	cin >> lc;
	switch(lc) {
		case 1:
			timkiemNguoithue();
			break;
		case 0:
			{
				View v;
				v.show2();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Khachthue::timkiemNguoithue() {
	
	ifstream fin("Khachthue.txt",ios::in);
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t==========================QUAN LI KHACH THUE PHONG=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li khach thue phong > Xem thong tin khach hang                            =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=       Thong tin chi tiet khach hang phong:                                      =" << endl;
	cout << "\t\t\t=           Ten           :                                                       =" << endl;
	cout << "\t\t\t=           Ngay sinh     :                                                       =" << endl;
	cout << "\t\t\t=           So dien thoai :                                                       =" << endl;
	cout << "\t\t\t=           Dia chi       :                                                       =" << endl;
	cout << "\t\t\t=           Ngay thue     :                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     1. Chinh sua thong tin                                                      =" << endl;
	cout << "\t\t\t=     2. Xoa thong tin                                                            =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	int m, flag;
	gotoxy(70, 6);
	cin >> m;
	flag=kiemtra(m);
	while(!fin.eof()) {
			fin>>maphong;
			fin>>ten;
			fin>>quequan;
			fin>>ngaysinh;
			fin>>ngaythue;
			fin>>sdt;
			if (maphong == m) {
				gotoxy(53,7); cout << ten;
				gotoxy(53,8); cout << ngaysinh;
				gotoxy(53,9); cout << sdt;
				gotoxy(53,10); cout << quequan;
				gotoxy(53,11); cout << ngaythue;
				flag = 1;
				break;
		}
	}	
	if(flag==0) {
		cout << "\t\t\t=            Xin loi nhap lai so phong....!!                                     =" << endl;
	}
	fin.close();
	gotoxy(52,20); cin >> lc;
	switch(lc) {
		case 1:
			suaNguoithue(m);
			break;
		case 2:
			xoaNguoiThue(m);
			break;
		case 0:
			xemDanhsachthue();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	
}

void Khachthue::themNguoithue() {
	int m, flag;
	ofstream fout("Khachthue.txt",ios::app);
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t========================QUAN LI KHACH THUE PHONG===================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li khach thue phong > Them khach thue moi                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=       Them moi khach thue                                                       =" << endl;
	cout << "\t\t\t=           Ma phong   :                                                          =" << endl;
	cout << "\t\t\t=           Ten        :                                                          =" << endl;
	cout << "\t\t\t=           Dia chi    :                                                          =" << endl;
	cout << "\t\t\t=           Ngay sinh  :                                                          =" << endl;
	cout << "\t\t\t=           Ngay thue  :                                                          =" << endl;
	cout << "\t\t\t=           SDT        :                                                          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(49,7);
	cin>>m;
	flag=kiemtra(m);
	if(flag) {
		gotoxy(30,13);cout << "Xin loi!! Phong nay da co nguoi thue!!!";
	}else {
		maphong = m;
		gotoxy(49,8);cin>>ten;
		gotoxy(49,9);cin>>quequan;
		gotoxy(49,10);cin>>ngaysinh;
		gotoxy(49,11);cin>>ngaythue;
		gotoxy(49,12);cin>>sdt;
		
		fout << endl;
		fout << maphong << endl;
		fout << ten << endl;
		fout << quequan << endl;
		fout << ngaysinh << endl;
		fout << ngaythue << endl;
		fout << sdt;
		gotoxy(30,15);cout << "Da them khach thue thanh cong...!!!";
	}
	
	fout.close();
	
	gotoxy(52,18);cin>>lc;		
	switch(lc) {
		case 0:
			{
				View v;
				v.show2();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Khachthue::timKiemkhachthue() {
	int lc;
	ifstream fin("Khachthue.txt",ios::in);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t============================QUAN LI KHACH THUE PHONG===============================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    Quan li khach thue phong > Tim kiem thong tin khach thue                     =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Tim kiem theo ma phong:                                                     =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=            1. Tim kiem theo ten                                                 =" << endl;
	cout << "\t\t\t=            2. Tim kiem theo so phong                                            =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	gotoxy(52,15); cin >> lc;
	switch(lc) {
		case 1:
			timNguoithuetheoten();
			break;
		case 2:
			timNguoithuetheophong();
			break;
		case 0:
			{
				View v;
				v.show2();	
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	
}
void Khachthue::suaNguoithue(int m) {
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t===========================QUAN LI KHACH THUE PHONG================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=      Quan li khach thue > Xem thong tin khach thue > Sua thong tin              =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma phong   :                                                          =" << endl;
	cout << "\t\t\t=           Ten        :                                                          =" << endl;
	cout << "\t\t\t=           Dia chi    :                                                          =" << endl;
	cout << "\t\t\t=           Ngay sinh  :                                                          =" << endl;
	cout << "\t\t\t=           Ngay thue  :                                                          =" << endl;
	cout << "\t\t\t=           SDT        :                                                          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Dong y sua                                                                =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(50,6);cout<<this->maphong;
	gotoxy(50,7);cout<<this->ten<<"     -->";;
	gotoxy(50,8);cout<<this->quequan<<"     -->";;
	gotoxy(50,9);cout<<this->ngaysinh<<"     -->";;
	gotoxy(50,10);cout<<this->ngaythue<<"     -->";;
	gotoxy(50,11);cout<<this->sdt<<"     -->";;
	
	gotoxy(70,7); cin >> ten;
	gotoxy(70,8); cin >> quequan;
	gotoxy(70,9);cin >> ngaysinh;
	gotoxy(70,10);cin >> ngaythue;
	gotoxy(70,11);cin >> sdt;
	
	int lc;
	gotoxy(51,16); cin >> lc;
	switch(lc) {
		case 1:
			{
				int mph[100];
				string t[1000];
				string qq[1000];
				string ns[1000];
				string nt[1000];
				string sd[1000];
		
				ifstream fin("Khachthue.txt",ios::in);
				ofstream fout("khach.txt",ios::app);
				int dem=1;
				while(!fin.eof()) {	
					int map;
					string te,qu,ngs,ngt,s;
			
					fin>>map;
					fin>>te;
					fin>>qu;
					fin>>ngs;
					fin>>ngt;
					fin>>s;
			
					if (map!=m){
						mph[dem]=map;
						t[dem]=te;
						qq[dem]=qu;
						ns[dem]=ngs;
						nt[dem]=ngt;
						sd[dem]=s;
						dem=dem+1;	
					} else {
						mph[dem]=maphong;
						t[dem]=ten;
						qq[dem]=quequan;
						ns[dem]=ngaysinh;
						nt[dem]=ngaythue;
						sd[dem]=sdt;
						dem=dem+1;
					}
				}
				fin.close();
				dem = dem - 1;
				int i=1;
				for(i=1;i<=dem-1;i++){
					fout<<mph[i]<<endl;
					fout<<t[i]<<endl;
					fout<<qq[i]<<endl;
					fout<<ns[i]<<endl;
					fout<<nt[i]<<endl;
					fout<<sd[i]<<endl;
				}
				fout<<mph[dem]<<endl;
				fout<<t[dem]<<endl;
				fout<<qq[dem]<<endl;
				fout<<ns[dem]<<endl;
				fout<<nt[dem]<<endl;
				fout<<sd[dem];
				fout.close();
				remove("Khachthue.txt");
				rename("khach.txt","Khachthue.txt");	
			}
			break;
		case 0:
			timkiemNguoithue();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	
}

void Khachthue::xoaNguoiThue(int m) {
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t=========================QUAN LI KHACH THUE PHONG==================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Quan li khach thue > Xem thong tin khach thue > Xoa thong tin               =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=      Ban co muon xoa phong nay khong?                                           =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma phong   :                                                          =" << endl;
	cout << "\t\t\t=           Ten        :                                                          =" << endl;
	cout << "\t\t\t=           Dia chi    :                                                          =" << endl;
	cout << "\t\t\t=           Ngay sinh  :                                                          =" << endl;
	cout << "\t\t\t=           Ngay thue  :                                                          =" << endl;
	cout << "\t\t\t=           SDT        :                                                          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Dong y                                                                    =" << endl;
	cout << "\t\t\t=    2. Khong dong y                                                              =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(50,8);cout<<this->maphong;
	gotoxy(50,9);cout<<this->ten;
	gotoxy(50,10);cout<<this->quequan;
	gotoxy(50,11);cout<<this->ngaysinh;
	gotoxy(50,12);cout<<this->ngaythue;
	gotoxy(50,13);cout<<this->sdt;
	
	int lc;
	gotoxy(51,19); cin >> lc;
	switch(lc) {
		case 1:
			{
				int mph[100];
				string t[1000];
				string qq[1000];
				string ns[1000];
				string nt[1000];
				string sd[1000];
		
				ifstream fin("Khachthue.txt",ios::in);
				ofstream fout("khach.txt",ios::app);
				int dem=1;
				while(!fin.eof()) {	
					int map;
					string te,qu,ngs,ngt,s;
			
					fin>>map;
					fin>>te;
					fin>>qu;
					fin>>ngs;
					fin>>ngt;
					fin>>s;
			
					if (map!=m){
						mph[dem]=map;
						t[dem]=te;
						qq[dem]=qu;
						ns[dem]=ngs;
						nt[dem]=ngt;
						sd[dem]=s;
						dem=dem+1;	
					}
				}
				fin.close();
				dem = dem - 1;
				int i=1;
				for(i=1;i<=dem-1;i++){
					fout<<mph[i]<<endl;
					fout<<t[i]<<endl;
					fout<<qq[i]<<endl;
					fout<<ns[i]<<endl;
					fout<<nt[i]<<endl;
					fout<<sd[i]<<endl;
				}
				fout<<mph[dem]<<endl;
				fout<<t[dem]<<endl;
				fout<<qq[dem]<<endl;
				fout<<ns[dem]<<endl;
				fout<<nt[dem]<<endl;
				fout<<sd[dem];
				fout.close();
				remove("Khachthue.txt");
				rename("khach.txt","Khachthue.txt");
			}
			break;
		case 2:
			timkiemNguoithue();
			break;
		case 0:
			timkiemNguoithue();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	
}

void Khachthue::timNguoithuetheophong() {
	int lc;
	ifstream fin("Khachthue.txt",ios::in);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t===========================QUAN LI KHACH THUE PHONG================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    QL khach thue phong > TK thong tin khach thue > Tim kiem theo phong          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Tim kiem theo phong                                                         =" << endl;
	cout << "\t\t\t=     Nhap so phong :                                                             =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Ma phong      Ten      Dia chi    Ngay sinh     Ngay thue      SDT          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Xem thong tin khach hang                                                  =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	int m, flag;
	gotoxy(46, 7);
	cin >> m;
	flag=kiemtra(m);
	while(!fin.eof()) {
			fin>>maphong;
			fin>>ten;
			fin>>quequan;
			fin>>ngaysinh;
			fin>>ngaythue;
			fin>>sdt;
			if (maphong == m) {
				gotoxy(35,11); cout << maphong;
				gotoxy(44,11); cout << ten;
				gotoxy(53,11); cout << quequan;
				gotoxy(62,11); cout << ngaysinh;
				gotoxy(76,11); cout << ngaythue;
				gotoxy(90,11); cout << sdt;
				flag = 1;
				break;
		}
	}	
	if(flag==0) {
		cout << "\t\t\t=            Xin loi nhap lai so phong....!!                                     =" << endl;
	}	
	
	gotoxy(54,20);cin >> lc;
	switch(lc) {
		case 0:
			timKiemkhachthue();
			break;
		case 1:
			thongtinNguoithue(m);
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	fin.close();
}

void Khachthue::thongtinNguoithue(int m) {
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t==========================QUAN LI KHACH THUE PHONG=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li khach thue phong > Xem thong tin khach hang                            =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma phong      :                                                       =" << endl;
	cout << "\t\t\t=           Ten           :                                                       =" << endl;
	cout << "\t\t\t=           Ngay sinh     :                                                       =" << endl;
	cout << "\t\t\t=           So dien thoai :                                                       =" << endl;
	cout << "\t\t\t=           Dia chi       :                                                       =" << endl;
	cout << "\t\t\t=           Ngay thue     :                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(53,6);cout<<this->maphong;
	gotoxy(53,7);cout<<this->ten;
	gotoxy(53,8);cout<<this->ngaysinh;
	gotoxy(53,9);cout<<this->sdt;
	gotoxy(53,10);cout<<this->quequan;
	gotoxy(53,11);cout<<this->ngaythue;
	
	gotoxy(51,18); cin>>lc;
	switch(lc) {
		case 0:
			timNguoithuetheophong();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}
void Khachthue::timNguoithuetheoten() {
	int lc;
	ifstream fin("Khachthue.txt",ios::in);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t===========================QUAN LI KHACH THUE PHONG================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    QL khach thue phong > TK thong tin khach thue > Tim kiem theo ten            =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Tim kiem theo ten                                                           =" << endl;
	cout << "\t\t\t=     Nhap ten      :                                                             =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Ma phong      Ten      Dia chi    Ngay sinh     Ngay thue      SDT          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Xem thong tin khach hang                                                  =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	string t, flag;
	gotoxy(46, 7);
	cin >> t;
	flag = kiemtra(t);
	while(!fin.eof()) {
			fin>>maphong;
			fin>>ten;
			fin>>quequan;
			fin>>ngaysinh;
			fin>>ngaythue;
			fin>>sdt;
			if (ten == t) {
				gotoxy(35,11); cout << maphong;
				gotoxy(44,11); cout << ten;
				gotoxy(53,11); cout << quequan;
				gotoxy(62,11); cout << ngaysinh;
				gotoxy(76,11); cout << ngaythue;
				gotoxy(90,11); cout << sdt;
				flag = 1;
				break;
		}
	}	
	if(flag == "") {
		cout << "\t\t\t=            Xin loi nhap lai ten...!!                                     =" << endl;
	}	
	
	gotoxy(54,20);cin >> lc;
	switch(lc) {
		case 0:
			timKiemkhachthue();
			break;
		case 1:
			thongtin(t);
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	fin.close();
}

void Khachthue::thongtin(string t) {
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t==========================QUAN LI KHACH THUE PHONG=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li khach thue phong > Xem thong tin khach hang                            =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma phong      :                                                       =" << endl;
	cout << "\t\t\t=           Ten           :                                                       =" << endl;
	cout << "\t\t\t=           Ngay sinh     :                                                       =" << endl;
	cout << "\t\t\t=           So dien thoai :                                                       =" << endl;
	cout << "\t\t\t=           Dia chi       :                                                       =" << endl;
	cout << "\t\t\t=           Ngay thue     :                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(53,6);cout<<this->maphong;
	gotoxy(53,7);cout<<this->ten;
	gotoxy(53,8);cout<<this->ngaysinh;
	gotoxy(53,9);cout<<this->sdt;
	gotoxy(53,10);cout<<this->quequan;
	gotoxy(53,11);cout<<this->ngaythue;
	
	gotoxy(51,18); cin>>lc;
	switch(lc) {
		case 0:
			timNguoithuetheoten();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}
string Khachthue::kiemtra(string t) {
	string flag="";
	ifstream fin("Khachthue.txt",ios::in);
	while(!fin.eof())
	{
		fin >> maphong;
		fin >> ten;
		fin >> quequan;
		fin >> ngaysinh;
		fin >> sdt;
		if(ten == t)
		{
			flag=1;
			break;
		}
	}
	
	fin.close();
	return(flag);
}
int Khachthue::kiemtra(int m)
{
	int flag=0;
	ifstream fin("Khachthue.txt",ios::in);
	while(!fin.eof())
	{
		fin >> maphong;
		fin >> ten;
		fin >> quequan;
		fin >> ngaysinh;
		fin >> sdt;
		if(maphong == m)
		{
			flag=1;
			break;
		}
	}
	
	fin.close();
	return(flag);
}
