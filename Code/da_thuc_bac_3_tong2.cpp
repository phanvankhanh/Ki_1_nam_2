#include<iostream>
using namespace std;

class DaThucBac3
{
	private:
		int a;
		int b;
		int c;
		int d;
		
	public:
		DaThucBac3(int bac3 = 0, int bac2 = 0, int bac1 = 0, int bac0 = 0)
		{
			a = bac3;
			b = bac2;
			c = bac1;
			d = bac0;
		}
		
		~DaThucBac3()
		{
		}
		
		DaThucBac3 tinhTong(DaThucBac3 dt1)
		{
			DaThucBac3 tong;
			tong.a = this->a + dt1.a;
			tong.b = this->b + dt1.b;
			tong.c = this->c + dt1.c;
			tong.d = this->d + dt1.d;
			return tong;
		}
		
		void InThongTin()
		{
			cout<< a <<"*x^3 + "	<<b	<<"*x^2 + "	<<c	<<"*x + "	<<d	<<endl;
		}
};

int main()
{
	cout<<"*******************************"	<<endl;
	DaThucBac3 dt1(3, 6, 9, -4);
	cout<<"\n Da thuc thu nhat: "	<<endl;
	dt1.InThongTin();
	
	cout<<"*******************************"	<<endl;
	DaThucBac3 dt2(12, 5, -20, 14);
	cout<<"\n Da thuc thu hai: "	<<endl;
	dt2.InThongTin();
	
	DaThucBac3 tong1;
	tong1 = dt1.tinhTong(dt2);
	cout<<"*******************************"	<<endl;
	cout<<"\n Tong 2 da thuc la: "	<<endl;
	tong1.InThongTin();
	return 0;
}