#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class GiaoVien
{
	private:
		string hoten;
		int tuoi;
		string bangcap;
		string chuyennganh;
		float bacluong;
	public:
		void Nhap()
		{
			cin.ignore();
			cout<<"\nNhap ho ten: ";
			getline(cin,hoten);
			cout<<"\nNhap tuoi: "; 
			cin>>tuoi;
			cin.ignore();
			cout<<"\nNhap bang cap: ";
			getline(cin,bangcap);
			cout<<"\nNhap chuyen nganh: "; getline(cin,chuyennganh);
			cout<<"\nNhap bac luong: "; 
			cin>>bacluong;
		}
		void Tieude()
		{
			cout<<"+------------------------------------------------------------------------------------------+"<<endl;
			cout<<right;
			cout<<"|"<< setw(20) <<" HO TEN ";
			cout<<"|"<< setw(6)  <<" TUOI";
			cout<<"|"<< setw(10) <<" BANG CAP";
			cout<<"|"<< setw(20) <<" CHUYEN NGANH";
			cout<<"|"<< setw(3)  <<"BAC LUONG";
			cout<<"|"<< setw(20) <<"LUONG CO BAN"<< "|"  <<endl;
			cout<<"+------------------------------------------------------------------------------------------+"<<endl;
		}
		void Xuat()
		{
			cout<<right;
			cout<<"|"<< setw(20)<< hoten;
			cout<<"|"<< setw(6)<<  tuoi;
			cout<<"|"<< setw(10)<< bangcap;
			cout<<"|"<< setw(20)<< chuyennganh;
			cout<<"|"<< setw(9)<< bacluong;
			cout<<"|"<< setw(20)<< TienLuong()<<"|"<<endl;
			cout<<"+------------------------------------------------------------------------------------------+"<<endl;
		}
		float TienLuong()
		{
			return bacluong*610;
		}
		void XepLuong()
		{
			if(TienLuong()<2000)
			{
				Tieude();
				
			}
		}
};




int main()
{
	GiaoVien *p;
	int n;
	cout<<"\nNhap so luong giao vien: ";
	cin>>n;
	p = new GiaoVien[n];
	for(int i=0;i<n;i++)
	{
		p->Nhap();
	}
	p[0].Tieude();
	for(int i=0;i<n;i++)
	{
		p->Xuat();
	}
	for(int i=0;i<n;i++)
	{
		p->XepLuong();
	}
	return 0;
	
}