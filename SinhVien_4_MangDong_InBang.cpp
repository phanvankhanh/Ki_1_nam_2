#include<iostream>
#include<iomanip>
using namespace std;

class SinhVien
{
	private:
		string ho_ten;
		int nam_sinh;
		string gioi_tinh;
		int diem_toan;
		int diem_ly;
		int diem_hoa;
	
	public:
		void NhapThongTin()
		{
			cin.ignore();
			cout<<"\n Nhap ten: ";	getline(cin, ho_ten);
			cout<<"\n Nhap nam sinh: ";		cin>>nam_sinh;
			cin.ignore();
			cout<<"\n Nhap gioi tinh: ";	getline(cin, gioi_tinh);
			cout<<"\n Nhap diem Toan: ";	cin>>diem_toan;
			cout<<"\n Nhap diem Ly: ";		cin>>diem_ly;
			cout<<"\n Nhap diem Hoa: ";		cin>>diem_hoa;
		}
		
		double DiemTrungBinh()
		{
			return (diem_toan + diem_ly + diem_hoa)/ 3.0;
		}
		
		void InTieuDe()
		{
			cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
			cout<<setfill(' ')	<<endl;
			
			cout<<left;
			cout<<"| "	<<setw(30)	<<"HO TEN";
			cout<<"| "	<<setw(10)	<<"NAM SINH";
			cout<<"| "	<<setw(10)	<<"GIOI TINH";
			
			cout<<right;
			cout<<"| "	<<setw(10)	<<"DIEM TOAN";
			cout<<"| "	<<setw(10)	<<"DIEM LY";
			cout<<"| "	<<setw(10)	<<"DIEM HOA";
			cout<<"| "	<<setw(10)	<<"DIEM TB"	<<" |"	<<endl;
			
			cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
			cout<<setfill(' ')	<<endl;
		}
		
		void InThongTin()
		{
			cout<<left;
			cout<<"| "	<<setw(30)	<<ho_ten;
			cout<<"| "	<<setw(10)	<<nam_sinh;
			cout<<"| "	<<setw(10)	<<gioi_tinh;
			
			cout<<right;
			cout<<"| "	<<setw(10)	<<diem_toan;
			cout<<"| "	<<setw(10)	<<diem_ly;
			cout<<"| "	<<setw(10)	<<diem_hoa;
			cout<<"| "	<<setw(10)	<<DiemTrungBinh()	<<" |"	<<endl;
			
			cout<<"+"	<<setfill('-')	<<setw(105)	<<"+";
			cout<<setfill(' ')	<<endl;
		}
};

int main()
{
	int n;
	cout<<"\n Nhap so luong sinh vien n = ";
	cin>>n;
	
	SinhVien *p;
	p = new SinhVien[n];
	
	cout<<"NHAP THONG TIN CHO SINH VIEN:"	<<endl;
	for(int i = 0; i < n; i++)
		p[i].NhapThongTin();
	cout<<endl	<<endl;
	
	cout<<"**************************************"	<<endl;
	cout<<"THONG TIN VE SINH VIEN VUA NHAP:"	<<endl;
	p[0].InTieuDe();
	
	for(int i = 0; i < n; i++)
		p[i].InThongTin();
	
	return 0;
}

