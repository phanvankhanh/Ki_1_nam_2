#include<iostream>
#include<string>

using namespace std;

class MatHang
{
	public:
		string mahang;
		string tenhang;
		int dongia;
		
	public:
		MatHang()
		{
			mahang = "####";
			tenhang = "****";
			dongia = 0;
		}
		
		MatHang(string mahang, string tenhang, int dongia)
		{
			this -> mahang = mahang;
			this -> tenhang = tenhang;
			this -> dongia = dongia;	
		}
			
		~MatHang(){
		}
		
		void NhapThongTin()
		{
			cout<<"\n Nhap ma hang: ";
			getline(cin, mahang);
			cout<<"\n Nhap ten hang: ";
			getline(cin, tenhang);
			cout<<"\n Nhap don gia: ";
			cin>>dongia;
		}
		
		void InThongTin()
		{
			cout<<"\n Ma hang: "	<<mahang;
			cout<<"\n Ten hang: "	<<tenhang;
			cout<<"\n Don gia: "	<<dongia;
		}
};

class BanhKeo : private MatHang
{
	private:
		string noisanxuat;
		
	public:
		BanhKeo()
		{
			noisanxuat = "Binh Duong";
		}
			
		BanhKeo(string mahang, string tenhang, int dongia, string noisanxuat) : MatHang(mahang, tenhang, dongia)
		{
			this -> noisanxuat = noisanxuat;
		}
		
		~BanhKeo(){
		}

		void NhapThongTin()
		{
			MatHang::NhapThongTin();
			cin.ignore();
			cout<<"\n Nhap noi san xuat: ";
			getline(cin, noisanxuat);
		}
		
		void InThongTin()
		{
			cout<<"\n Noi san xuat: "<<noisanxuat;
			MatHang::InThongTin();
		}
};

int main()
{
	BanhKeo bk1;
//	bk1.NhapThongTin();
//	cout<<"\n Thong tin ve mat hang: ";
//	bk1.InThongTin();

	BanhKeo bk2;
	bk2 = {"bk01234", "Banh quy xop", 34000, "Phu Tho"};
	bk2.InThongTin();
	return 0;
}
