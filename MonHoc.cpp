#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class MonHoc
{
	protected:
		string tenmonhoc;
		int sotiet;
	public:
		MonHoc()
		{
			tenmonhoc = "  ";
			sotiet = 0;
		}
		
		MonHoc(string tenmnhoc, int sotiet)
		{
			this -> tenmonhoc = tenmonhoc;
			this -> sotiet = sotiet;
		}
		
		~MonHoc()
		{
		}
		
		void NhapTenMonHoc()
		{
			cout<<" Nhap ten mon hoc: ";
			getline(cin, tenmonhoc);
			cout<<" Nhap so tiet: ";
			cin>>sotiet;
		}
		
		void InThongTinMonHoc()
		{
			cout<<" Ten mon hoc: " <<  tenmonhoc  <<endl;
			cout<<" So tiet: " << sotiet <<endl;
		}
};

class Nguoi
{
	protected:
		string hoten;
		int namsinh;
	public:
		Nguoi()
		{
			hoten = " ";
			namsinh = 0;
		}
		
		Nguoi(string hoten, int namsinh)
		{
			this -> hoten = hoten;
			this -> namsinh = namsinh;
		}
		
		~Nguoi()
		{
		}
		
		void NhapThongTinNguoi()
		{
			cin.ignore();
			cout<<"Nhap ho ten: ";
			getline(cin,hoten);
			cout<<"Nhap nam sinh: ";
			cin>>namsinh;
		}
		void InThongTinNguoi()
		{
			cout<<" Ho ten: "<< hoten <<endl;
			cout<<" Nam sinh: "<< namsinh <<endl;
		}
		
};

class GiaoVien : public MonHoc, public Nguoi
{
	private:
		string bomon;
	public:
		GiaoVien()
		{
			bomon = " ";
		}
		
		GiaoVien(string bomon)
		{
			this -> bomon = bomon;
		}
		
		~GiaoVien()
		{
		}
		void NhapThongTinGiaoVien()
		{
			cin.ignore();
			cout<<" Nhap bo mon: ";
			getline(cin,bomon);
			MonHoc::NhapTenMonHoc();
			Nguoi::NhapThongTinNguoi();
		}
		void InThongTinGiaoVien()
		{
			cout<<" Bo mon: "<< bomon <<endl;
			MonHoc::InThongTinMonHoc();
			Nguoi::InThongTinNguoi();
		}
};

int main()
{
	MonHoc mh;
	Nguoi ng;
	GiaoVien gv;
	cout<<"Nhap Thong Tin Mon Hoc"<<endl;
	mh.NhapTenMonHoc();
	cout<<"In Thong Tin Mon Hoc"<<endl;
	mh.InThongTinMonHoc();
	cout<<"Nhap Thong Tin Nguoi "<<endl;
	ng.NhapThongTinNguoi();
	cout<<"In Thong Tin Nguoi"<<endl;
	ng.InThongTinNguoi();
	cout<<"Nhap Thong Tin Giao Vien "<<endl;
	gv.NhapThongTinGiaoVien();
	cout<<"In Thong Tin Giao Vien "<<endl;
	gv.InThongTinGiaoVien();
	
	
}