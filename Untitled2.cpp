#include<iostream>
#include<string>
using namespace std;

class{
	private:
		string ht;
		struct NS{
			int ngay;
			int thang;
			int nam;
		};
		string cmt;
		string k;
		
	public:
		void nhap()
		{
			cout<<"\nNhap ho ten: ";
			getline(cin,ht);
			cout<<"\nNhap ngay sinh: ";
			cin>>ngay;
			cout<<"\nNhap so chung minh: ";
			cin>>cmt;
			cout<<"\nNhap so ho khau: ";
			getline(cin,k);
		}
		void xuat()
		{
			cout<<"\nHo ten: "<<ht;
			cout<<"\nNgay sinh: "<<NS;
			cout<<"\nSo chung minh: "<<cmt;
			cout<<"\nSo ho khau: "<<k;
			
		}
	
	
};



int main()
{
	KhachHang KH1;
	KH1.nhap();
	KH1.xuat();
	return 0;
}