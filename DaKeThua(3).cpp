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
	
	cout<<"In Thong May In Laser ."<<endl;
	cout<<ls1;		cout<<endl;
	
	cout<<"In Thong Tin May In Mau ."<<endl;
	cout<<ms1;		cout<<endl;
	
	cout<<"In Thong Tin May In Laser Mau ."<<endl;
	cout<<lms1;		cout<<endl;
}