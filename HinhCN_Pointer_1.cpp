#include<iostream>

using namespace std;

class HinhChuNhat
{
	private:				// Thuoc tinh private khac vi du truoc 
		float dai;
		float rong;
	
	public:
		
		void NhapThongTin()
		{
			cout<<"\n Nhap thong tin chieu dai: ";
			cin>>dai;
			cout<<"\n Nhap thong tin chieu rong: ";
			cin>>rong;
		}
		
		float ChuVi()
		{
			return 2 * (dai + rong);
		}
		
		float DienTich()
		{
			return dai * rong;
		}
		
		void InThongTin()
		{
			cout<<"\n Chieu dai hinh chu nhat: "	<<dai	<<endl;
			cout<<"\n Chieu rong hinh chu nhat: "	<<rong	<<endl;	
			cout<<"\n Chu vi hinh chu nhat: "	<<ChuVi()	<<endl;	
			cout<<"\n Dien tich hinh chu nhat: "	<<DienTich()	<<endl;	
		}
};


int main()
{
	HinhChuNhat *p1;
	p1->NhapThongTin();
	cout<<"\n THONG TIN VUA NHAP TU BAN PHIM "	<<endl;
	p1->InThongTin();
	
	return 0;
}


