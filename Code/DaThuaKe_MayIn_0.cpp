#include <iostream>
#include <stdio.h>
#include <conio.h>
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
		
		~MayInLaser(){
		}
		
		friend istream& operator >> (istream& is, MayInLaser &ls1)
		{
			cout<<"Nhap chi so DPI: ";
			is>>ls1.dpi;
			return is;
		}
		
		friend ostream& operator << (ostream& os, MayInLaser &ls1)
		{
			os<<"DPI = "			<<ls1.dpi		<<endl;
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
		
		MayInMau(int bangmau)
		{
			this->bangmau = bangmau;
		}
		
		~MayInMau(){
		}
		
		friend istream& operator >> (istream& is, MayInMau &mau1)
		{
			cout<<"Nhap chi so mau: ";
			is>>mau1.bangmau;
			return is;
		}
		
		friend ostream& operator << (ostream& os, MayInMau &mau1)
		{
			os<<"Chi so mau = "	<<mau1.bangmau	<<endl;
			return os;
		}
};

class MayInLaserMau : public MayInLaser, public MayInMau
{
	private:
		string mamayin;
		int soluong;
		
	public:
		MayInLaserMau()
		{
			mamayin = "2022_n";
			soluong = 20;
		}
		
		MayInLaserMau(string mamayin, int soluong, int dpi, int bangmau): MayInLaser(dpi), MayInMau(bangmau)
		{
			this->mamayin = mamayin;
			this->soluong = soluong;
		}
		
		~MayInLaserMau(){
		}
		
		friend istream& operator >> (istream& is, MayInLaserMau &lsm1)
		{
			cout<<"Nhap ma may in: ";
			getline(is, lsm1.mamayin);
			cout<<"Nhap so luong: ";
			is>>lsm1.soluong;
			
			is>>(MayInLaser&) lsm1;
			is>>(MayInMau&) lsm1;
			return is;
		}
		
		friend ostream& operator << (ostream& os, MayInLaserMau &lsm1)
		{
			os<<"Ma may in = "		<<lsm1.mamayin	<<endl;	
			os<<"So luong = "		<<lsm1.soluong 	<<endl;
			
			os<<(MayInLaser&) lsm1;
			os<<(MayInMau&) lsm1;
			return os;
		}

};

int main()
{
	MayInLaser ls1;
	MayInMau mau1;
	MayInLaserMau lsm1;
	
	cout<<"Thong tin ve may in LASER: "	<<endl;
	cout<<ls1;	cout<<endl;
	
	cout<<"Thong tin ve may in MAU: "	<<endl;
	cout<<mau1;	cout<<endl;

	cout<<"Nhap du lieu cho may in laser mau: "	<<endl;
	cin>>lsm1;
	
	cout<<"\n***********************************\n";
	cout<<"Thong tin ve MAY IN LASER MAU: "	<<endl;
	cout<<lsm1;	cout<<endl;
	
/*
	MayInLaserMau lsm2;
	lsm2 = {"2021_o", 25, 550, 275};
	lsm2.InThongTinLaserMau();
*/
	return 0;
}

