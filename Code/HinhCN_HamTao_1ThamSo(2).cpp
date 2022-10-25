#include<iostream>

using namespace std;

class HinhCN
{
	public:				 
		int dai;
		int rong;
	
	public:
		HinhCN(int d)
		{
			dai = 20;
			rong = d;
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
	HinhCN hcn1(16);
	
	cout<<"\n Chieu dai hinh chu nhat la "	<<hcn1.dai;
	cout<<"\n Chieu rong hinh chu nhat la "	<<hcn1.rong;
	cout<<"\n Chu vi hinh chu nhat la "	<<hcn1.ChuVi();
	cout<<"\n Dien tich hinh chu nhat la "	<<hcn1.DienTich();
	return 0;
}


