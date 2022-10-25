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
		
		
		void InThongTinLaser()
		{
			cout<<" DPI = "<< dpi<<endl;
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
		
		
		void InThongTinMau()
		{
			cout<<" Bang mau = "<< bangmau <<endl;
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
		
		void InThongTinLaserMau()
		{
			cout<<" Ma May In = "<< mamayin <<endl;
			cout<<" So Luong = "<< soluong <<endl;
			MayInLaser::InThongTinLaser();
			MayInMau::InThongTinMau();
		}
};

int main()
{
	MayInLaser ls1;
	MayInMau ms1;
	MayInLaserMau lms1;
	cout<<"In Thong May In Laser ."<<endl;
	ls1.InThongTinLaser();
	cout<<"In Thong Tin May In Mau ."<<endl;
	ms1.InThongTinMau();
	cout<<"In Thong Tin May In Laser Mau ."<<endl;
	lms1.InThongTinLaserMau();
}