#include<iostream>

using namespace std;

class HinhCN
{
	public:				 
		int dai;
		int rong;
	
	public:
		HinhCN(int d, int r)
		{
			dai = d;
			rong = r;
		}
		
		~HinhCN()
		{
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
	HinhCN hcn1(16, 12);
	
	cout<<"\n Chieu dai hinh chu nhat la "	<<hcn1.dai;
	cout<<"\n Chieu rong hinh chu nhat la "	<<hcn1.rong;
	cout<<"\n Chu vi hinh chu nhat la "	<<hcn1.ChuVi();
	cout<<"\n Dien tich hinh chu nhat la "	<<hcn1.DienTich();
	
	HinhCN hcn2(100, 80);
	cout<<"\n***********************************************"	<<endl;
	cout<<"\n Chu vi hinh chu nhat 2 la "	<<hcn2.ChuVi();
	cout<<"\n Dien tich hinh chu nhat 2 la "	<<hcn2.DienTich();
	return 0;
}


