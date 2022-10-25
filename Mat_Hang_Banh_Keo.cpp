#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class MatHang
{
	private:
		string mahang;
		string tenhang;
		int dongia;
	public:
		MatHang()
		{
			mahang = " ";
			tenhang = " ";
			dongia = 0;
		}
		
		MatHang(string mahang, string tenhang, int dongia)
		{
			this -> mahang = mahang;
			this -> tenhang = tenhang;
			this -> dongia = dongia;
		}
		
		~MatHang()
		{
			
		}
		
		void Nhap()
		{
			
			cout<<" Ma Hang: ";   getline(cin,mahang);
			cout<<" Ten Hang: ";  getline(cin,tenhang);
			cout<<" Don gia: ";  cin>>dongia;
			cin.ignore();
		
		}
		
		void Xuat()
		{
		
			cout<<"+"	<<setfill('-')	<<setw(71)	<<"+";
			cout<<setfill(' ')	<<endl;
			cout<<" | "<<setw(15)<<" Ma Hang ";
			cout<<" | "<<setw(15)<<" Ten Hang ";
			cout<<" | "<<setw(12)<<" Don Gia ";
			cout<<" | "<<setw(15)<<" Noi san xuat "<< " | ";
			cout<<endl;
			cout<<" | "<<setw(15)<<mahang;
			cout<<" | "<<setw(15)<<tenhang;
			cout<<" | "<<setw(12)<<dongia;
			
		}
};
class BanhKeo : private MatHang
{
	private: 
	 string noisanxuat;
	public:
		BanhKeo() : MatHang()
		{
			noisanxuat = " ";
		}
		
		BanhKeo(string noisanxuat, string mahang, string tenhang, int dongia):MatHang()
		{
			this -> noisanxuat = noisanxuat;
		}
		
		~BanhKeo()
		{
			
		}
		
		void Nhap()
		{
		
			MatHang :: Nhap();
			cout<<" Noi san xuat:  ";  getline(cin,noisanxuat);
			
		}
		
		void Xuat()
		{	
		
			MatHang :: Xuat();
			cout<<" | "<<setw(15)<<noisanxuat<<" | ";
			cout<<endl;  
			cout<<"+"	<<setfill('-')	<<setw(71)	<<"+";
			cout<<setfill(' ')	<<endl;
		}
};
int main()
{
	BanhKeo Bk1;
	cout<<" Nhap thong tin: "<<endl;
	Bk1.Nhap();
	cout<<" Xuat thong tin: "<<endl;
	Bk1.Xuat();
}