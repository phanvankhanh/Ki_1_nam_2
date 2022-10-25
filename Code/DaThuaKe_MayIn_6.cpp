#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

class MayIn
{
	public:
		string mamayin;
		int soluong;
	
	public:
		MayIn()
		{
			mamayin = "2022_n";
			soluong = 100;
		}
		
		MayIn(string mamayin, int soluong)
		{
			this->mamayin = mamayin;
			this->soluong = soluong;
		}
		
		~MayIn(){
		}
	
		void Xuat()
		{
			cout<<" Ma may in = "	<<mamayin		<<endl;
			cout<<" So luong = "	<<soluong		<<endl;
		}
};

class MayInLaser:  public virtual MayIn
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
		
		~MayInLaser(){
		}
		
		 void Xuat()
		{
			MayIn::Xuat();
			cout<<" DPI = "		<<dpi		<<endl;
		}
};

class MayInMau: virtual public MayIn
{
	protected:
		int bangmau;
	
	public:
		MayInMau()
		{
			bangmau = 300;
		}
		
		MayInMau(int bangmau)
		{
			this->bangmau = bangmau;
		}
		
		~MayInMau(){
		}
		
		 void Xuat()
		{
			MayIn::Xuat();
			cout<<" Chi so mau = "	<<bangmau	<<endl;
		}
};

class MayInLaserMau: public MayInLaser, MayInMau
{
	public:
		MayInLaserMau(): MayIn(), MayInLaser(), MayInMau()
		{
			mamayin = "2022_n";
			soluong = 20;
			dpi = 700;
			bangmau = 320;
		}
		
		MayInLaserMau(string mamayin, int soluong, int dpi, int bangmau): MayIn(mamayin, soluong), MayInLaser(dpi), MayInMau(bangmau)
		{
		}
		
		~MayInLaserMau(){
		}
		
		 void  Xuat()
		{
			MayInLaser::Xuat();
			cout<<"Chi so mau: "	<<bangmau;
		}

};

int main()
{
	MayInLaser ls1;
	MayInMau mau1;
	MayInLaserMau lsm1;
	
	cout<<"Thong tin ve may in LASER: "	<<endl;
	ls1.Xuat();	cout<<endl;
	cout<<"Thong tin ve may in MAU: "	<<endl;
	mau1.Xuat();	cout<<endl;

	cout<<"Thong tin ve MAY IN LASER MAU: "	<<endl;
	lsm1.Xuat();	cout<<endl;

	return 0;
}

