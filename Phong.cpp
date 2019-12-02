#include <iostream>
#include <fstream>
#include <iomanip>
#include <conio.h>
#include <string>
#include "Phong.h"
#include "gotoxy.h"
#include "View.h"

using namespace std;

int Phong::getMaphong() const{
	return maphong;
}

void Phong::setMaphong(int maphong) {
	maphong = maphong;
}

double Phong::getDientich() const{
	return dientich;
}

void Phong::setDientich(double dientich) {
	dientich = dientich;
}

string Phong::getTrangthai() const {
	return trangthai;
}

void Phong::setTrangthai(string trangthai) {
	trangthai = trangthai;
}

double Phong::getGia() const {
	return gia;
}

void Phong::setGia(double gia) {
	gia = gia;
}

void Phong::xemdanhsachPhong() {
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t============================QUAN LI CAC PHONG TRO==================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li phong tro > Danh sach phong tro                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=" << setw(10) << "Ma phong" << setw(15) << "Dien tich" << setw(20) << "Trang thai" << setw(25) << "Gia" << "           ="<< endl;
	xem();
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=   1. Loc theo gia tu thap len cao.                                              =" << endl;
	cout << "\t\t\t=   2. Loc gia tu cao xuong thap                                                  =" << endl;
	cout << "\t\t\t=   3. Tim kiem phong                                                             =" << endl;
	cout << "\t\t\t=   0. Tro ve trang truoc                                                         =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	cin >> lc;
	switch(lc) {
		case 1:
			xemdanhsachTangdan();
			break;
		case 2:
			xemdanhsachGiamdan();
			break;
		case 3:
			timPhong();
			break;
		case 0:
			{
				View v;
				v.show1();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Phong::xemdanhsachGiamdan() {
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t============================QUAN LI CAC PHONG TRO==================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li phong tro > Danh sach phong tro > Sap xep giam theo gia                =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=" << setw(10) << "Ma phong" << setw(15) << "Dien tich" << setw(20) << "Trang thai" << setw(25) << "Gia" << "           ="<< endl;
	sapxepGiam();	
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=      0. Tro ve trang truoc                                                      =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	cin >> lc;
	switch(lc) {
		case 0:
			xemdanhsachPhong();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Phong::xemdanhsachTangdan() {
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t============================QUAN LI CAC PHONG TRO==================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li phong tro > Danh sach phong tro > Sap xep tang theo gia                =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=" << setw(10) << "Ma phong" << setw(15) << "Dien tich" << setw(20) << "Trang thai" << setw(25) << "Gia" << "           ="<< endl;
	sapxepTang();	
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=      0. Tro ve trang truoc                                                      =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	cin >> lc;
	switch(lc) {
		case 0:
			xemdanhsachPhong();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	
}

void Phong::xem() {
	ifstream fin("Record.txt",ios::in);
	int flag;
	while(!fin.eof()) {	
				fin>>maphong;
				fin>>dientich;
				fin>>trangthai;
				fin>>gia;
				cout << "\t\t\t=" << setw(10) << maphong << setw(15) << dientich << setw(20) << trangthai << setw(25) << gia<< "           ="<< endl;
	}
}

void Phong::sapxepGiam() {
	int mp[1000];
	double dt[1000];
	double gi[1000];
	string tt[1000];
	
	ifstream fin("Record.txt",ios::in);
	int dem=1;
	while(!fin.eof()) {	
		string trang;
		int ma;
		double g,dien;
		
		fin>>ma;
		fin>>dien;
		fin>>trang;
		fin>>g;

		if (ma!=r){
			mp[dem]=ma;
			dt[dem]=dien;
			tt[dem]=trang;
			gi[dem]=g;
			dem=dem+1;	
		}
	}
	fin.close();
	dem = dem - 1;
	for(int i = 1; i <= dem - 1; i++) {
		for (int j = i+1; j <= dem; j++) {
			if(gi[i] < gi[j]) {
				double tg = gi[i];
				gi[i] = gi[j];
				gi[j] = tg;
				
				int tm = mp[i];
				mp[i] = mp[j];
				mp[j] = tm;
				
				double t = dt[i];
				dt[i] = dt[j];
				dt[j] = t;
				
				string x = tt[i];
				tt[i] = tt[j];
				tt[j] = x;
			}
		}
	}
	
	for (int i = 1; i <= dem; i++) {
		cout << "\t\t\t=" << setw(10) << mp[i] << setw(15) << dt[i] << setw(20) << tt[i] << setw(25) << gi[i]<< "           ="<< endl;
	}
}

void Phong::sapxepTang() {
	int mp[1000];
	double dt[1000];
	double gi[1000];
	string tt[1000];
	
	ifstream fin("Record.txt",ios::in);
	int dem=1;
	while(!fin.eof()) {	
		string trang;
		int ma;
		double g,dien;
		
		fin>>ma;
		fin>>dien;
		fin>>trang;
		fin>>g;

		if (ma!=r){
			mp[dem]=ma;
			dt[dem]=dien;
			tt[dem]=trang;
			gi[dem]=g;
			dem=dem+1;	
		}
	}
	fin.close();
	dem = dem - 1;
	for(int i = 1; i <= dem - 1; i++) {
		for (int j = i+1; j <= dem; j++) {
			if(gi[i] > gi[j]) {
				double tg = gi[i];
				gi[i] = gi[j];
				gi[j] = tg;
				
				int tm = mp[i];
				mp[i] = mp[j];
				mp[j] = tm;
				
				double t = dt[i];
				dt[i] = dt[j];
				dt[j] = t;
				
				string x = tt[i];
				tt[i] = tt[j];
				tt[j] = x;
			}
		}
	}
	
	for (int i = 1; i <= dem; i++) {
		cout << "\t\t\t=" << setw(10) << mp[i] << setw(15) << dt[i] << setw(20) << tt[i] << setw(25) << gi[i]<< "           ="<< endl;
	}
}

void Phong::themPhong() {
	// Them phong
	int r, flag;
	ofstream fout("Record.txt",ios::app);
	int lc;
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t==============================QUAN LI CAC PHONG TRO================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=  Quan li phong tro > Them phong moi                                             =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=       Them moi phong tro                                                        =" << endl;
	cout << "\t\t\t=           Ma phong   :                                                          =" << endl;
	cout << "\t\t\t=           Dien tich  :                                                          =" << endl;
	cout << "\t\t\t=           Gia tien   :                                                          =" << endl;
	cout << "\t\t\t=           Trang thai :                                                          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     0. Tro ve trang truoc                                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";

	gotoxy(49,7);
	cin>>r;
	flag=check(r);
	if(flag) {
		gotoxy(30,13);cout << "Xin loi!! Phong nay da co nguoi thue!!!";
	}else {
		maphong = r;
		gotoxy(49,8);cin>>dientich;
		gotoxy(49,9);cin>>gia;
		gotoxy(49,10);cin>>trangthai;
		fout << endl;
		fout<< maphong << endl;
		fout << dientich << endl;
		fout << trangthai << endl;
		fout << gia;
		gotoxy(30,13);cout << "Da them phong thanh cong...!!!";
	}
	fout.close();
	
	gotoxy(52,16);cin>>lc;		
	switch(lc) {
		case 0:
			{
				View v;
				v.show1();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
}

void Phong::suaPhong(int r) {
	
	int lc;
	fstream file("Record.txt",ios::in|ios::out);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t=============================QUAN LI CAC PHONG TRO=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=   Quan li phong tro > Tim kiem phong > Sua thong tin phong                      =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=   Sua thong tin phong:                                                          =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=            Ma phong   :                                                         =" << endl;
	cout << "\t\t\t=            Dien tich  :                                                         =" << endl;
	cout << "\t\t\t=            Trang thai :                                                         =" << endl;
	cout << "\t\t\t=            Gia        :                                                         =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Dong y sua thong tin phong                                                =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	gotoxy(49,6);cout << r;
	check(r);
	while(!file.eof()) {
		if (maphong == r) {
				gotoxy(50,8); cout << maphong;
				fflush(stdin);
				gotoxy(50,9); cout << dientich << "     -->";
				gotoxy(50,10); cout << trangthai << "     -->";
				gotoxy(50,11); cout << gia << "     -->";
				break;
		}	
	}
	file.close();
	
	gotoxy(70,9); cin >> dientich;
	gotoxy(70,10); cin >> trangthai;
	gotoxy(70,11); cin >> gia;
	gotoxy(54,18);cin >> lc;
	switch(lc) {
		case 1:
			{
				int mp[1000];
				double dt[1000];
				double gi[1000];
				string tt[1000];
				
				ifstream fin("Record.txt",ios::in);
				ofstream fout("temp.txt",ios::app);
				int dem=1;
				while(!fin.eof()) {	
					string trang;
					int ma;
					double g,dien;
					
					fin>>ma;
					fin>>dien;
					fin>>trang;
					fin>>g;
			
					if (ma!=r){
						mp[dem] = ma;
						dt[dem]=dien;
						tt[dem]=trang;
						gi[dem]=g;
						dem=dem+1;	
					} else {
						mp[dem]=maphong;
						dt[dem]=dientich;
						tt[dem]=trangthai;
						gi[dem]=gia;
						dem=dem+1;
					}
				}
				fin.close();
				dem = dem - 1;
				for(int i=1;i<=dem-1;i++){
					fout<<mp[i]<<endl;
					fout<<dt[i]<<endl;
					fout<<tt[i]<<endl;
					fout<<gi[i]<<endl;
				}
				fout<<mp[dem]<<endl;
				fout<<dt[dem]<<endl;
				fout<<tt[dem]<<endl;
				fout<<gi[dem];
				
				fout.close();
				remove("Record.txt");
				rename("temp.txt","Record.txt");
			}
			break;
		case 0:
			{
				View v;
				v.show1();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}		
	}
	
}

void Phong::timPhong() {
	int lc;
	ifstream fin("Record.txt",ios::in);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t=============================QUAN LI CAC PHONG TRO=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    Quan li phong tro > DS phong tro > Tim kiem phong tro                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Nhap ma phong:                                                              =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=            Ma phong   :                                                         =" << endl;
	cout << "\t\t\t=            Dien tich  :                                                         =" << endl;
	cout << "\t\t\t=            Trang thai :                                                         =" << endl;
	cout << "\t\t\t=            Gia        :                                                         =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	int r, flag;
	gotoxy(47, 6);
	cin >> r;
	flag=check(r);
	while(!fin.eof()) {
			fin>>maphong;
			fin>>dientich;
			fin>>trangthai;
			fin>>gia;
			if (maphong == r) {
				gotoxy(50,8); cout << maphong;
				gotoxy(50,9); cout << dientich;
				gotoxy(50,10); cout << trangthai;
				gotoxy(50,11); cout << gia;
				flag = 1;
				break;
		}
	}	
	if(flag==0) {
		cout << "\t\t\t=            Xin loi nhap lai so phong....!!                                     =" << endl;
	}	
	
	gotoxy(54,18);cin >> lc;
	switch(lc) {
		case 0:
			xemdanhsachPhong();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
	}
	fin.close();	
}

void Phong::thongtinphongTro(){
	int lc;
	ifstream fin("Record.txt",ios::in);
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t=============================QUAN LI CAC PHONG TRO=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    Quan li phong tro > Tim kiem phong tro                                       =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Nhap ma phong:                                                              =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=            Ma phong   :                                                         =" << endl;
	cout << "\t\t\t=            Dien tich  :                                                         =" << endl;
	cout << "\t\t\t=            Trang thai :                                                         =" << endl;
	cout << "\t\t\t=            Gia        :                                                         =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    1. Sua thong tin phong                                                       =" << endl;
	cout << "\t\t\t=    2. Xoa phong                                                                 =" << endl;
	cout << "\t\t\t=    0. Tro ve trang truoc                                                        =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	int r, flag;
	gotoxy(47, 6);
	cin >> r;
	flag=check(r);
	while(!fin.eof()) {
			fin>>maphong;
			fin>>dientich;
			fin>>trangthai;
			fin>>gia;
			if (maphong == r) {
				gotoxy(50,8); cout << maphong;
				gotoxy(50,9); cout << dientich;
				gotoxy(50,10); cout << trangthai;
				gotoxy(50,11); cout << gia;
				flag = 1;
				break;
		}
	}
	fin.close();
	if(flag==0) {
		cout << "\t\t\t=            Xin loi nhap lai so phong....!!                                     =" << endl;
	}
		
	
	gotoxy(53,19);cin >> lc;
	switch(lc) {
		case 1:
			suaPhong(r);
			break;
		case 2:
			htxoaPhong(r);
			break;
		case 0:
			{
				View v;
				v.show1();
			}
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
			
	}
}

void Phong::htxoaPhong(int r) {
	
	system("cls");
	cout << endl;
	cout << endl;
	cout << "\t\t\t=============================QUAN LI CAC PHONG TRO=================================" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=    Quan li phong tro > Tim kiem phong tro > Xoa phong                           =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=     Ban muon xoa phong nay                                                      =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=         Ma phong   :                                                            =" << endl;
	cout << "\t\t\t=         Dien tich  :                                                            =" << endl;
	cout << "\t\t\t=         Gia tien   :                                                            =" << endl;
	cout << "\t\t\t=         Trang thai :                                                            =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t=         1. Dong y                                                               =" << endl;
	cout << "\t\t\t=         0. Tro ve trang truoc                                                   =" << endl;
	cout << "\t\t\t=                                                                                 =" << endl;
	cout << "\t\t\t===================================================================================" << endl;
	cout << "\t\t\tNhap vao lua chon cua ban: ";
	
	int lc;
	gotoxy(48,8);cout<<this->maphong;
	gotoxy(48,9);cout<<this->dientich;
	gotoxy(48,10);cout<<this->gia;
	gotoxy(48,11);cout<<this->trangthai;
	gotoxy(51,17); cin >> lc;
	switch(lc) {
		case 1:
		{
			int mp[1000];
			double dt[1000];
			double gi[1000];
			string tt[1000];
	
			ifstream fin("Record.txt",ios::in);
			ofstream fout("temp.txt",ios::app);
			int dem=1;
			while(!fin.eof()) {	
				string trang;
				int ma;
				double g,dien;
		
				fin>>ma;
				fin>>dien;
				fin>>trang;
				fin>>g;
		
				if (ma!=r){
					mp[dem]=ma;
					dt[dem]=dien;
					tt[dem]=trang;
					gi[dem]=g;
					dem=dem+1;	
				}
			}
			fin.close();
			dem = dem - 1;
			int i=1;
			for(i=1;i<=dem-1;i++){
				fout<<mp[i]<<endl;
				fout<<dt[i]<<endl;
				fout<<tt[i]<<endl;
				fout<<gi[i]<<endl;
			}
			fout<<mp[dem]<<endl;
			fout<<dt[dem]<<endl;
			fout<<tt[dem]<<endl;
			fout<<gi[dem];
			fout.close();
			remove("Record.txt");
			rename("temp.txt","Record.txt");
		}
			{
				View v;
				v.show1();
			}
			break;
		case 0:
			thongtinphongTro();
			break;
		default:
			{
				cout << "\n\n\t\t\tLua chon sai....!!!";
			}
			
	}
	
}

// check ma phong
int Phong::check(int r) {
	int flag=0;
	ifstream fin("Record.txt",ios::in);
	while(!fin.eof())
	{
		fin>>maphong;
		fin>>dientich;
		fin>>trangthai;
		fin>>gia;
		if(maphong==r)
		{
			flag=1;
			break;
		}
	}
	
	fin.close();
	return(flag);
}
