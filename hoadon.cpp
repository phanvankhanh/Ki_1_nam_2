#include<iostream>
#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;
class Hoadon
{
	private:
		string mavattu;
		string tenvattu;
		float khoiluong;
		float dongia;
		float thanhtien;
	public:
		void nhap()
		{
			
				cin.ignore();
				cout<<"Nhap ma vat tu: ";
				getline(cin,mavattu);
				cout<<"Nhap ten vat tu: ";
				getline(cin,tenvattu);
				cout<<"Nhap khoi luong: ";
				cin>>khoiluong;
				cout<<"Nhap don gia: ";
				cin>>dongia;
		}
		void xuat()
		{
				cout<<" ma vat tu: "<<mavattu;
				
				cout<<" ten vat tu: "<<tenvattu;
			
				cout<<" khoi luong: "<<khoiluong;
				
				cout<<" don gia: "<<dongia;
				
				cout<<" thanh tien: "<<tinhtien();
				
				cout<<" tong : "<<tongtien();
		
		}
		float tinhtien()
		{
			thanhtien=dongia*khoiluong;
		}
		float tongtien()
		{
			int tong=0;
			tong=+thanhtien;
		}
};
int main()
{
	int n;
	cout<<"Nhap so luong: ";
	cin>>n;
	Hoadon *p;
	p = new Hoadon[n];
	for(int i=0;i<n;i++)
	{
		p[i].nhap();
	}
	
	for(int i=0;i<n;i++)
	{
		p[i].tinhtien();
	}
	for(int i=0;i<n;i++)
	{
		p[i].tongtien();
	}
	for(int i=0;i<n;i++)
	{
		p[i].xuat();
	}	
			
}