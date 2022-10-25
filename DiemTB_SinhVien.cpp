#include<iostream>
#include<string>
using namespace std;

class SinhVien
{
	private:
		string hoten;
		int namsinh;
		string gioitinh;
		float diemtoan;
		float diemly;
		float diemhoa;
	public:
		void NhapThongTin()
		{
			cout<<"\nNhap ho ten: ";
			getline(cin,hoten);
			cout<<"\nNhap nam sinh: ";
			cin>>namsinh;
			cin.ignore();
			cout<<"\nNhap diem toan: ";
			cin>>diemtoan;
			cout<<"\nNhap diem ly: ";
			cin>>diemly;
			cout<<"\nNhap diem hoa: ";
			cin>>diemhoa;
		}
		double DiemTB()
		{
			return (diemtoan+diemly+diemhoa)/3.0;
		}
		void InThongTin()
		{
			cout<<"\nHo ten: "<< hoten <<endl;
			cout<<"\nNam sinh: "<< namsinh <<endl;
			cout<<"\nDiem toan: "<< diemtoan <<endl;
			cout<<"\nDiem ly: "<< diemly <<endl;
			cout<<"\nDiem hoa: "<< diemhoa <<endl;
			cout<<"\nDiem trung binh: "<< DiemTB() <<endl;
		}
	
	
	
};


int main()
{
	SinhVien sv1;
	cout<<"\nNHAP THONG TIN SINH VIEN"<<endl;
	sv1.NhapThongTin();
	cout<<endl;
	cout<<"\IN THONG TIN SINH VIEN"<<endl;
	sv1.InThongTin();
}