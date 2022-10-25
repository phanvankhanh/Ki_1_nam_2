#include<iostream>
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
		
		void InThongTin()
		{
			cout<<"Ho ten: "	<<ho_ten	<<endl;
			cout<<"Nam sinh: "	<<nam_sinh	<<endl;
			cout<<"Gioi tinh: "	<<gioi_tinh	<<endl;
			cout<<"Diem Toan: "		<<diem_toan	<<endl;
			cout<<"Diem Ly: "		<<diem_ly	<<endl;
			cout<<"Diem Hoa: "		<<diem_hoa	<<endl;
			cout<<"Diem trung binh: "		<<DiemTrungBinh()	<<endl;
		}
};

int main()
{
	SinhVien sv1;
	cout<<"******************************************"	<<endl;
	cout<<"*** NHAP THONG TIN CHO SINH VIEN ***"	<<endl;
	sv1.NhapThongTin();
	cout<<endl	<<endl;
	
	cout<<"******************************************"	<<endl;	
	cout<<"*** THONG TIN VE SINH VIEN VUA NHAP ***"	<<endl;
	sv1.InThongTin();
	
	return 0;
}

