#include<iostream>
#include<iomanip>
using namespace std;

class HocSinh
{
	private:
		string ma_hs;
		string lop;
		int diem_toan;
		int diem_ly;
		int diem_hoa;
		string ho_ten;
	
	public:	
		HocSinh()
		{
			ma_hs = " ";
			ho_ten = " ";
			lop = " ";
			diem_toan = 0;
			diem_ly = 0;
			diem_hoa = 0;
		}
	
		HocSinh(string ma, string h_ten, string lop2, int toan, int ly)
		{
			ma_hs = ma;
			ho_ten = h_ten;
			lop = lop2;
			diem_toan = toan;
			diem_ly = ly;
		}
	
		~HocSinh()
		{
		}
		
		void NhapThongTin()
		{
			cout<<"\n Nhap diem hoa: ";
			cin>>diem_hoa;
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

void set_List(HocSinh a[]);

int main()
{
	
	HocSinh hs[20];
	hs[0] = {"LTV001", "Nguyen Hien Trang", "12G5", 7, 4};
	hs[1] = {"LTV002", "Nguyen Duong Bao Thien", "12C8", 7, 8};
	hs[2] = {"TL241", "Phan Thi Hong Nhung", "12G2", 6, 6};
	hs[3] = {"TL246", "Luong Nguyen Thanh Ngan", "12E10", 5, 8};
	hs[4] = {"VINS261", "Vu Thanh Vinh", "12C14", 9, 6};
	hs[5] = {"VINS270", "Dang Nguyen Phuong Vy", "12D1", 7, 4};
	hs[6] = {"ACAD382", "Nguyen Thi Huong Giang", "12C1", 6, 6};
	hs[7] = {"ACAD383", "Nguyen Le Nhu Quynh", "12A9", 7, 6};
	hs[8] = {"DTD015", "Nguyen The Vinh", "12G13", 9, 6};
	hs[9] = {"NK025", "Nguyen Thi Thanh Tuyen", "12C4", 6, 9};


	cout<<"**************************************"	<<endl;
	cout<<"\n Nhap diem hoa cho hoc sinh: "	<<endl;
	for(int i = 0; i < 10; i++)
		hs[i].NhapThongTin();
		
	cout<<"**************************************"	<<endl;
	cout<<"THONG TIN VE HOC SINH:"	<<endl;
	hs[0].InTieuDe();
	
	for(int i = 0; i < 10; i++)
		hs[i].InThongTin();
	
	return 0;
}