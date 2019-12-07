#include <iostream>
#include <fstream>
#include <string>
#include <conio.h>
#include "Hoadon.h"
#include "Khachthue.h"
#include "gotoxy.h"
#include "View.h"

using namespace std;


Khachthue Hoadon::getKhachthue() {
	return khachthue;
}

void Hoadon::setThoigianthue(string thoigianthue) {
	this->thoigianthue = thoigianthue;
}

string Hoadon::getThoigianthue() {
	return thoigianthue;
}

double Hoadon::getTongtien() {
	return tongtien;
}

void Hoadon::setTongtien(double tongtien) {
	this->tongtien = tongtien;
}

void Hoadon::setNgaythanhtoan(string ngaythanhtoan) {
	this->ngaythanhtoan = ngaythanhtoan;
}

void Hoadon::themHoadon() {
	int r,m, flag, fl;
	ofstream fout("Hoadon.txt",ios::app);
	ifstream fin("Khachthue.txt", ios::in);
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t===============================QUAN LI HOA DON=====================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li hoa don > Them hoa don moi                                             =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=       Them moi hoa don                                                          =" << endl;
	cout << "\t\t\t=           Ma hoa don       :                                                    =" << endl;
	cout << "\t\t\t=           Ma phong         :                                                    =" << endl;
	cout << "\t\t\t=           Nguoi thue       :                                                    =" << endl;
	cout << "\t\t\t=           Ngay thue        :                                                    =" << endl;
	cout << "\t\t\t=           Gia phong        :                                                    =" << endl;
	cout << "\t\t\t=           Ngay thanh toan  :                                                    =" << endl;
	cout << "\t\t\t=           Tong tien        :                                                    =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	gotoxy(55,7);cin >> r;
	fl = check(r);
	if(fl) {
		gotoxy(55,16);cout << "Xin loi!! Hoa don da ton tai!!!";
	}else {
		mahoadon = r;
		gotoxy(55, 8);
		cin >> m;
		flag = kiemtra(m);
		while(!fin.eof()) {
			fin>>maphong;
			fin>>ten;
			fin>>quequan;
			fin>>ngaysinh;
			fin>>ngaythue;
			fin>>sdt;
			if (maphong == m) {
				gotoxy(55,9); cout << ten;
				gotoxy(55,10); cout << ngaythue;
				flag = 1;
				break;
			} 
			else {
				gotoxy(40,16); cout << "Phong nay chua ton tai ...!!!";
			}
		}
		gotoxy(55,11); cin >> giaphong;
		gotoxy(55,12); cin >> ngaythanhtoan;
		tongtien = giaphong * 1;
		gotoxy(55,13); cout << tongtien;
		fout << endl;
		fout << mahoadon<<endl;
		fout << maphong<<endl;
		fout << ten<<endl;
		fout << ngaythue<<endl;
		fout << giaphong<<endl;
		fout << ngaythanhtoan<<endl;
		fout << tongtien;
		gotoxy(40,16); cout << "Da them hoa don thanh cong ...!!!";
	}	
	fout.close();
	fin.close();
	gotoxy(55,19);
	cin >> lc;
	switch(lc) {
		case 0:
			{
				View v;
				v.show3();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Hoadon::xemHoadon() {
	int r, fl;
	int lc;
	ifstream fin("Hoadon.txt", ios::in);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t==========================QUAN LI HOA DON==========================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li hoa don > Tim kiem hoa don                                             =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma hoa don      :                                                     =" << endl;
	cout << "\t\t\t=           Ma phong        :                                                     =" << endl;
	cout << "\t\t\t=           Nguoi thue      :                                                     =" << endl;
	cout << "\t\t\t=           Tien nha        :                                                     =" << endl;
	cout << "\t\t\t=           Ngay thue       :                                                     =" << endl;
	cout << "\t\t\t=           Ngay thanh toan :                                                     =" << endl;
	cout << "\t\t\t=           Tong tien       :                                                     =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     1. Chinh sua hoa don                                                        =" << endl;
	cout << "\t\t\t=     2. Xoa hoa don                                                              =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	gotoxy(55, 6);
	cin >> r;
	fl = check(r);
	while(!fin.eof()) {
		fin >> mahoadon;
		fin >> maphong;
		fin >> ten;
		fin >> ngaythue;
		fin >> giaphong;
		fin >> ngaythanhtoan;
		fin >> tongtien;
		
		if(mahoadon == r) {
			gotoxy(55,7); cout << maphong;
			gotoxy(55,8); cout << ten;
			gotoxy(55,9); cout << giaphong;
			gotoxy(55,10); cout << ngaythue;
			gotoxy(55,11); cout << ngaythanhtoan;
			gotoxy(55,12); cout << tongtien;
		}
	}
	fin.close();
	gotoxy(55,21);
	cin >> lc;
	switch(lc) {
		case 1:{
			suaHoadon(r);
			break;
		}
		case 2: {
			xoaHoadon(r);
			break;
		}
		case 0: {
			{
				View v;
				v.show3();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
		}
	}
}

void Hoadon::suaHoadon(int r) {
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t===========================QUAN LI HOA DON=========================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=      Quan li hoa don > Tim kiem hoa don > Sua thong tin hoa don                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma hoa don      :                                                     =" << endl;
	cout << "\t\t\t=           Ma phong        :                                                     =" << endl;
	cout << "\t\t\t=           Nguoi thue      :                                                     =" << endl;
	cout << "\t\t\t=           Tien nha        :                                                     =" << endl;
	cout << "\t\t\t=           Ngay thue       :                                                     =" << endl;
	cout << "\t\t\t=           Ngay thanh toan :                                                     =" << endl;
	cout << "\t\t\t=           Tong tien       :                                                     =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Dong y sua                                                                =" << endl;
	cout << "\t\t\t=    2. Khong dong y                                                              =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	gotoxy(55,6);cout<<this->mahoadon;
	gotoxy(55,7);cout<<this->maphong;
	gotoxy(55,8);cout<<this->ten<<"     -->";;
	gotoxy(55,9);cout<<this->giaphong<<"     -->";;
	gotoxy(55,10);cout<<this->ngaythue<<"     -->";;
	gotoxy(55,11);cout<<this->ngaythanhtoan<<"     -->";;
	gotoxy(55,12);cout<<this->tongtien<<"     -->";;
	
	gotoxy(75,8); cin >> ten ;
	gotoxy(75,9); cin >> giaphong;
	gotoxy(75,10);cin >> ngaythue;
	gotoxy(75,11);cin >> ngaythanhtoan;
	gotoxy(75,12);cin >> tongtien;
	
	int lc;
	gotoxy(55,18); cin >> lc;
	switch(lc) {
		case 1: {
			{
				int mhd[100];
				int mph[100];
				string t[1000];
				double g[1000];
				string nt[1000];
				string ntt[1000];
				double tt[1000];
		
				ifstream fin("Hoadon.txt",ios::in);
				ofstream fout("hoa.txt",ios::app);
				int dem=1;
				while(!fin.eof()) {	
					int mah, map;
					string te, ngt, ngtt;
					double gi, tot;
			
					fin>>mah;
					fin>>map;
					fin>>te;
					fin>>ngt;
					fin>>gi;
					fin>>ngtt;
					fin>>tot;
			
					if (mah!=r){
						mhd[dem]=mah;
						mph[dem]=map;
						t[dem]=te;
						nt[dem]=ngt;
						g[dem]=gi;	
						ntt[dem]=ngtt;
						tt[dem]=tot;
						dem=dem+1;	
					} else {
						mhd[dem]=mahoadon;
						mph[dem]=maphong;
						t[dem]=ten;
						nt[dem]=ngaythue;
						g[dem]=giaphong;					
						ntt[dem]=ngaythanhtoan;
						tt[dem]=tongtien;
						dem=dem+1;
					}
				}
				fin.close();
				dem = dem - 1;
				int i=1;
				for(i=1;i<=dem-1;i++){
					fout<<mhd[i]<<endl;
					fout<<mph[i]<<endl;
					fout<<t[i]<<endl;
					fout<<nt[i]<<endl;
					fout<<g[i]<<endl;		
					fout<<ntt[i]<<endl;
					fout<<tt[i]<<endl;
				}
				fout<<mhd[i]<<endl;
				fout<<mph[i]<<endl;
				fout<<t[i]<<endl;
				fout<<nt[i]<<endl;
				fout<<g[i]<<endl;
				fout<<ntt[i]<<endl;
				fout<<tt[i];
				fout.close();
				remove("Hoadon.txt");
				rename("hoa.txt","Hoadon.txt");
			}
			break;
		}
		case 2: {
			xemHoadon();
			break;
		}
		case 0: {
			xemHoadon();
			break;
		}
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Hoadon::xoaHoadon(int r) {
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t===========================QUAN LI HOA DON=========================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=      Quan li hoa don > Tim kiem hoa don > Xoa hoa don                           =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=        Ban muon xoa phong nay ?                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=           Ma hoa don      :                                                     =" << endl;
	cout << "\t\t\t=           Ma phong        :                                                     =" << endl;
	cout << "\t\t\t=           Nguoi thue      :                                                     =" << endl;
	cout << "\t\t\t=           Tien nha        :                                                     =" << endl;
	cout << "\t\t\t=           Ngay thue       :                                                     =" << endl;
	cout << "\t\t\t=           Ngay thanh toan :                                                     =" << endl;
	cout << "\t\t\t=           Tong tien       :                                                     =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Dong y xoa                                                                =" << endl;
	cout << "\t\t\t=    2. Khong dong y xoa                                                          =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(55,8);cout<<this->mahoadon;
	gotoxy(55,9);cout<<this->maphong;
	gotoxy(55,10);cout<<this->ten;
	gotoxy(55,11);cout<<this->giaphong;
	gotoxy(55,12);cout<<this->ngaythue;
	gotoxy(55,13);cout<<this->ngaythanhtoan;
	gotoxy(55,14);cout<<this->tongtien;
	
	int lc;
	gotoxy(55,20);
	cin >> lc;
	switch(lc) {
		case 1: {
			{
				int mhd[100];
				int mph[100];
				string t[1000];
				double g[1000];
				string nt[1000];
				string ntt[1000];
				double tt[1000];
		
				ifstream fin("Hoadon.txt",ios::in);
				ofstream fout("hoa.txt",ios::app);
				int dem=1;
				while(!fin.eof()) {	
					int mah, map;
					string te, ngt, ngtt;
					double gi, tot;
			
					fin>>mah;
					fin>>map;
					fin>>te;
					fin>>ngt;
					fin>>gi;
					fin>>ngtt;
					fin>>tot;
			
					if (mah!=r){
						mhd[dem]=mah;
						mph[dem]=map;
						t[dem]=te;
						nt[dem]=ngt;
						g[dem]=gi;	
						ntt[dem]=ngtt;
						tt[dem]=tot;
						dem=dem+1;	
					}
				}
				fin.close();
				dem = dem - 1;
				int i=1;
				for(i=1;i<=dem-1;i++){
					fout<<mhd[i]<<endl;
					fout<<mph[i]<<endl;
					fout<<t[i]<<endl;
					fout<<nt[i]<<endl;
					fout<<g[i]<<endl;		
					fout<<ntt[i]<<endl;
					fout<<tt[i]<<endl;
				}
				fout<<mhd[i]<<endl;
				fout<<mph[i]<<endl;
				fout<<t[i]<<endl;
				fout<<nt[i]<<endl;
				fout<<g[i]<<endl;
				fout<<ntt[i]<<endl;
				fout<<tt[i];
				fout.close();
				remove("Hoadon.txt");
				rename("hoa.txt","Hoadon.txt");
			}
			break;
		}
		case 2: {
			xemHoadon();
			break;
		}
		case 3: {
			xemHoadon();
			break;
		}
		default: {
			cout << "\n\n\t\t\tLua chon sai....!!!";
		}
	}
}


int Hoadon::kiemtra(int m)
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

int Hoadon::check(int r)
{
	int fl=0;
	ifstream fin("Hoadon.txt",ios::in);
	while(!fin.eof())
	{
		fin >> mahoadon;
		fin >> maphong;
		fin >> ten;
		fin >> ngaythue;
		fin >> giaphong;
		fin >> ngaythanhtoan;
		fin >> tongtien;
		if(mahoadon == r)
		{
			fl=1;
			break;
		}
	}
	
	fin.close();
	return(fl);
}

