#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class BenhNhan
{
	string hoten;
	string quequan;
	int namsinh;
	
	public:
		void NhapThongTin()
		{
			cout<<"Nhap ten: "; 
			fflush(stdin); 
			getline(cin, hoten);
			cout<<"Nhap que quan: "; fflush(stdin);
			getline(cin, quequan);
			cout<<"Nhap nam sinh: "; cin>>namsinh;
		}

		void InThongTin()
		{
			cout<<endl;
			cout<<"Ten: "<<hoten;			cout<<endl;
			cout<<"Que quan: "<<quequan;	cout<<endl;	
			cout<<"Nam sinh: "<<namsinh; 	cout<<endl;
			cout<<"Tuoi: "	<<2022 - GetNs();
		}
};

class BenhAn: public BenhNhan
{
	private:
		string tenba;
		double tienvp;
	
	public:
		void nhap()
		{
			BenhNhan::NhapThongTin();
			cout<<"Nhap ten benh an: "; fflush(stdin);
			getline(cin,tenba);
			cout<<"Nhap tien vien phi: "; cin>>tienvp;
			cout<<endl;
		}

		void xuat()
		{	
			BenhNhan::InThongTin();
			cout<<"\nTen benh an: "<<tenba;
			cout<<"\nTien vien phi: "<<tienvp;
			cout<<endl;
		}
};

int main()
{

	return 0;
}




