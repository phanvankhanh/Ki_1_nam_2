#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;


class MayInLaser
{
	protected:
		int dpi;
	public:
		
		MayInLaser()
		{
			dpi = 600;
		}
		
		
		MayInLaser(int dpi)
		{
			this->dpi = dpi;
		}
		
		
		~MayInLaser()
		{
			
		}
		
		
		friend istream& operator >>(istream& is, MayInLaser &ls1)
		{
			cout<<"Nhap chi so DPI: ";
			is>>ls1.dpi;
			return is;
		}
		
		friend ostream& operator << (ostream& os, MayInLaser &ls1)
		{
			os<<" DPI = "<<   ls1.dpi  <<endl;
			return os;
		}
};


class MayInMau
{
	protected:
		int bangmau;
	public:
		
		MayInMau()
		{
			bangmau = 300;
		}
		
		
		MayinMau(int bangmau)
		{
			this -> bangmau = bangmau;
		}
		
		
		~MayInMau()
		{
			
		}
		
		friend istream& operator >>(istream& is, MayInMau &ms1)
		{
			cout<<"Nhap bang mau: ";
			is>>ms1.bangmau;
			return is;
		}
		
		friend ostream& operator << (ostream& os, MayInMau &ms1)
		{
			os<<" Bang mau = "<< ms1.bangmau   <<endl;
			return os;
		}
		
};


class MayInLaserMau	: public MayInLaser, public MayInMau
{
	private:
		string mamayin;
		int soluong;
	public:
		
		MayInLaserMau()
		{
			mamayin = "2020_n";
			soluong = 20;
		}
		
		
		MayInLaserMau(string mamayin, int soluong)
		{
			this -> mamayin = mamayin;
			this -> soluong = soluong;
		}
		
		
		~MayInLaserMau()
		{
			
		}
		friend istream& operator >>(istream& is, MayInLaserMau &lms1)
		{
			cin.ignore();
			cout<<"Nhap ma may in: ";
			getline(is,lms1.mamayin);
			cout<<"Nhap so luong: ";
			is>>lms1.soluong;
			is>>(MayInLaser&) lms1;
			is>>(MayInMau&) lms1;
			return is;
		}
		
		friend ostream& operator << (ostream& os, MayInLaserMau &lms1)
		{
			os<<" Ma May In = "<< lms1.mamayin  <<endl;
			os<<" So Luong = "<< lms1.soluong <<endl;
			os<<(MayInLaser&) lms1;
			os<<(MayInMau&) lms1;
			return os;
		}
};

int main()
{
	MayInLaser ls1;
	MayInMau ms1;
	MayInLaserMau lms1;
	
	cout<<"Nhap thong tin May In Laser."<<endl;
	cin>>ls1;		cout<<endl;
	
	cout<<"In Thong May In Laser ."<<endl;
	cout<<ls1;		cout<<endl;
	
	cout<<"Nhap thong tin May In Mau."<<endl;
	cin>>ms1;		cout<<endl;
	
	cout<<"In Thong Tin May In Mau ."<<endl;
	cout<<ms1;		cout<<endl;
	
	cout<<"Nha thong tin May In Laser Mau."<<endl;
	cin>>lms1;		cout<<endl;
	
	cout<<"In Thong Tin May In Laser Mau ."<<endl;
	cout<<lms1;		cout<<endl;
}