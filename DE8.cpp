#include<iostream>
using namespace std;
class Developer
{
	private:
		string Ms;
		string ht;
		int ns;
		int hs;
		float Luong;
	public:
		Developer()
		{
			
		}
		Developer(string Ms, string ht, int ns, int hs)
		{
			Ms=Ms;
			ht=ht;
			ns=ns;
			hs=hs;
		}
		~Developer()
		{
			
		}
		void Nhap()
		{
			cin.ignore();
			cout<<"Nhap ma so: ";
			getline(cin,Ms);
			cout<<"Nhap ho ten: ";
			getline(cin,ht);
			cout<<"Nhap nam sinh: ";
			cin>>ns;
			cout<<"Nhap he so luong: ";
			cin>>hs;
		}
		void In()
		{
			cout<<"\nMa so: "<<Ms<<endl;
			cout<<"\nHo ten: "<<ht<<endl;
			cout<<"\nNam sinh: "<<ns<<endl;
			cout<<"\nHe so luong: "<<hs<<endl;
		}
		int geths()
		{
			
		}
};
void sapxep(Developer dv[], int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(dv[i].geths()<dv[j].geths())
			{
				swap(dv[i],dv[j]);
			}
		}
	}
}
	
	
int main()
{
	Developer dv[30];
	int i,n; 
	cout<<"Nhap so Developer: ";
	cin>>n;
	//p=new Developer[n+1];
	cout<<"Nhap DANH SACH DEVELOPER"<<endl;
	for(int i=0;i<n;i++)
	{
		dv[i].Nhap();
	}
	cout<<"IN DANH SACH DEVELOPER"<<endl;
	for(int i=0;i<n;i++)
	{
		dv[i].In();
	}
	sapxep(dv,n);
	cout<<"Tinh tien"<<endl;
	
	for(int i=0;i<n;i++)
	{
		dv[i].Luong=dv[i].hs*1300000;
	}
	cout<<"Danh sach tien luong: "<<dv[i].Luong<<endl;
	cout<<"DANH SACH NAM SINH>=1995:"<<endl;
	for(int i=0;i<n;i++)
	{
		if(dv[i].ns>=1995)
		{
			cout<<dv[i].Xuat();
		}
	}
}