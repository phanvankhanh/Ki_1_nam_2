#include<iostream>
using namespace std;
class HinhCN
{
	private:
		float dai;
		float rong;
	public:
		void Nhap()
		{
			cout<<"Nhap chieu dai: ";
			cin>>dai;
			cout<<"Nhap chieu rong: ";
			cin>>rong;
		}
		double Chuvi()
		{
			return 2*(dai+rong);
		}
		double Dientich()
		{
			return dai*rong;
		}
		void In()
		{
			cout<<"Chieu dai: "<< dai <<endl;
			cout<<"Chieu rong: "<< rong <<endl;
			cout<<"Chu vi hinh chu nhat la: "<< Chuvi() <<endl;
			cout<<"Dien tich hinh chu nhat la: "<< Dientich() <<endl;
		}
};
int main()
{
	HinhCN hcn1;
	cout<<"\nNHAP THONG TIN HINH CHU NHAT"<<endl;
	hcn1.Nhap();
	cout<<"\nIN THONG TIN HINH CHU NHAT"<<endl;
	hcn1.In();
	
}