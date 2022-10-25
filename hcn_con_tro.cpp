#include<iostream>
#include<math.h>
using namespace std;
class HCN
{
	private:
		int d;
		int r;
	public:
		void nhap()
		{
			cout<<"Nhap chieu dai: ";
			cin>>d;
			cout<<"Nhap chieu rong: ";
			cin>>r;
		}
		void in()
		{
			cout<<"( "<<d<<" , "<<r<<" )"<<endl;
		}
		
};
int main()
{
	HCN *p;
	int i,n;
	cout<<"Nhap n: ";
	cin>>n;
	p= new HCN[n+1];
	cout<<"\n\tNHap thong tin hcn: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin hcn thu "<< i+1<<endl;
		p[i].nhap();
	}
	cout<<"\n\t\In thong tin hcn: "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<"In thong tin hcn thu "<<i+1<<endl;
		p[i].in();
	}
	return 0;
}