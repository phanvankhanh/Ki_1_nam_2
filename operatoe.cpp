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
	friend istream& operator >>(istream& is, SinhVien &sv)
	{
					is>>sv.ho_ten;
			is>>sv.ho_ten;	
		
					is>>sv.gioi_tinh;
				is>>sv.diem_toan;
					is>>sv.diem_ly;	
						is>>sv.diem_hoa;

		return is;
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
	cin>>sv1;
	cout<<endl	<<endl;
	
	cout<<"******************************************"	<<endl;	
	cout<<"*** THONG TIN VE SINH VIEN VUA NHAP ***"	<<endl;
	sv1.InThongTin();
	
	return 0;
}

