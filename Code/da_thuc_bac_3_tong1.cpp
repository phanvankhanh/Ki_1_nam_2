#include<iostream>
using namespace std;

class DaThucBac3
{
	private:
		int a;		// hang so cua x^3
		int b;		// hang so cua x^2
		int c;		// hang so cua x
		int d;		// hang so tu do
		
	public:
		DaThucBac3(int bac3 = 9, int bac2 = 99, int bac1 = 999, int bac0 = 9999)
		{
			a = bac3;
			b = bac2;
			c = bac1;
			d = bac0;
		}
		
		~DaThucBac3()
		{
		}
		
		DaThucBac3 tinhTong(DaThucBac3 dt1, DaThucBac3 dt2)
		{
			DaThucBac3 tong;
			tong.a = dt1.a + dt2.a;
			tong.b = dt1.b + dt2.b;
			tong.c = dt1.c + dt2.c;
			tong.d = dt1.d + dt2.d;
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
/*	
	DaThucBac3 tong1, t1;
	tong1 = t1.tinhTong(dt1, dt2);
	cout<<"*******************************"	<<endl;
	cout<<"\n Tong 2 da thuc la: "	<<endl;
	tong1.InThongTin();
*/	
	cout<<endl	<<endl;
	cout<<"*******************************"	<<endl;
	DaThucBac3 dt3;
	dt3.InThongTin();

	return 0;
}