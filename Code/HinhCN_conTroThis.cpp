#include<iostream>

using namespace std;

class HinhCN
{
	private:				 
		int dai;
		int rong;
	
	public:
		
		void NhapThongTin()
		{
			cout<<"\n Nhap thong tin chieu dai: ";
			cin>>this->dai;
			cout<<"\n Nhap thong tin chieu rong: ";
			cin>>this->rong;
		}
		
		void InThongTin()
		{
			cout<<"\n Chieu dai hinh chu nhat: ";
			cout<<this->dai;
			cout<<"\n Chieu rong hinh chu nhat: ";
			cout<<this->rong;
		}
		
		float ChuVi()
		{
			return 2 * (dai + rong);
		}
		
		float DienTich()
		{
			return dai * rong;
		}
};


int main()
{
	HinhCN hcn1;
	cout<<"*** NHAP THONG TIN CHO HINH CHU NHAT ***"	<<endl;
	hcn1.NhapThongTin();
	
	cout<<"************************************"	<<endl;
	cout<<"*** IN THONG TIN VE HINH CHU NHAT ***"	<<endl;
	hcn1.InThongTin();
	
	return 0;
}


