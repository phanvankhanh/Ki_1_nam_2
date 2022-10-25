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
};




int main()
{
	GiaoVien GV1;
	GV1.Nhap();
	GV1.Tieude();
	GV1.Xuat();
	
}