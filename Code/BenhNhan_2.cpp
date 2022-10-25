#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
class BenhNhan
{
	public:
	string hoten;
	string quequan;
	int namsinh;
	
	public:
		BenhNhan()
		{
			hoten = "Nguyen Trung Kien";
			quequan = "Hai Duong";
			namsinh = 2001;
		}
		
		BenhNhan(string hoten, string quequan, int namsinh)
		{
			this->hoten = hoten;
			this->quequan = quequan;
			this->namsinh = namsinh;
		}
		
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
		}
};

class BenhAn: public BenhNhan
{
	private:
		string tenba;
		double tienvp;
	
	public:
		BenhAn(string hoten, string quequan, int namsinh, string tenba, double tienvp): BenhNhan(hoten, quequan, namsinh)  
		{
			this->tenba = tenba;
			this->tienvp = tienvp;
		}
		
		BenhAn()
		{
			tenba = "ba.17.10.2022";
			tienvp = 200000;
		}
		
		void nhap()
		{
			cout<<"\n Nhap ten benh an: ";
			getline(cin, tenba);
			BenhNhan::NhapThongTin();
		}
		
		void in()
		{
			cout<<"\n Ten benh an: "	<<tenba;
			cout<<"\n Tien vien phi: "	<<tienvp;
			BenhNhan::InThongTin();
		}
};

int main()
{
	BenhNhan bn1;
	bn1 = {"Nguyen Trung Thanh", "Ha Noi", 2002};
	bn1.InThongTin();
	
	BenhAn ba1;
	cout<<endl;
	ba1 = {"Tran Thu Ha", "TP Ho Chi Minh", 2005, "ba1.18.10.2022", 500000};
	ba1.in();
	return 0;
}