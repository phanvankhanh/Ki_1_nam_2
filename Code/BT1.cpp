#include<iostream>
#include<iomanip>

using namespace std;

class HocSinh
{
	private:
		string ma_hs;
		string ho_ten;
		string lop;
		int diem_toan;
		int diem_ly;
		int diem_hoa;
		
	public:
		HocSinh(string ma, string ten, string lop, int toan, int ly, int hoa)
		{
			ma_hs = ma;
			ho_ten = ten;
			this->lop = lop;
			diem_toan = toan;
			diem_ly = ly;
			diem_hoa = hoa;
		}
		
		~HocSinh()
		{
		}
		
		double DiemTrungBinh()
		{
			return (diem_toan + diem_ly + diem_hoa)/ 3.0;
		}
		
		void InTieuDe()
		{
			cout<<"+"	<<setfill('-')	<<setw(106)	<<"+";
			cout<<setfill(' ')	<<endl;
			
			cout<<left;
			cout<<"| "	<<setw(11)	<<"MA HOC SINH";
			cout<<"| "	<<setw(30)	<<"HO TEN";
			cout<<"| "	<<setw(10)	<<"LOP";
			
			cout<<right;
			cout<<"| "	<<setw(10)	<<"DIEM TOAN";
			cout<<"| "	<<setw(10)	<<"DIEM LY";
			cout<<"| "	<<setw(10)	<<"DIEM HOA";
			cout<<"| "	<<setw(10)	<<"DIEM TB"	<<" |"	<<endl;
			
			cout<<"+"	<<setfill('-')	<<setw(106)	<<"+";
			cout<<setfill(' ')	<<endl;
		}
		
		void InThongTin()
		{
			cout<<left;
			cout<<"| "	<<setw(11)	<<ma_hs;
			cout<<"| "	<<setw(30)	<<ho_ten;
			cout<<"| "	<<setw(10)	<<lop;
			
			cout<<right;
			cout<<"| "	<<setw(10)	<<diem_toan;
			cout<<"| "	<<setw(10)	<<diem_ly;
			cout<<"| "	<<setw(10)	<<diem_hoa;
			cout<<"| "	<<setw(10)	<<DiemTrungBinh()	<<" |"	<<endl;
			
			cout<<"+"	<<setfill('-')	<<setw(106)	<<"+";
			cout<<setfill(' ')	<<endl;
		}	
};

int main()
{
	HocSinh hs1 = {"LTV001", "Nguyen Hien Trang", "12G5", 8, 4, 7};
	HocSinh hs2 = {"LTV002", "Nguyen Duong Bao Thien", "12C8", 7, 8, 7};
	HocSinh hs3 = {"TL241", "Phan Thi Hong Nhung", "12G2", 6, 6, 9};
	
	hs1.InTieuDe();
	hs1.InThongTin();
	hs2.InThongTin();
	hs3.InThongTin();
	return 0;
}