#include<iostream>
using namespace std;
class NhanVien
{
	private: 
		string Mnv;
		string Ht;
		int ns;
		float hs;
	public:
		NhanVien()
		{
			
		}
		NhanVien(string Mnv,string Ht, int ns, float hs)
		{
			Mnv=Mnv;
			Ht=Ht;
			ns=ns;
			hs=hs;
		}
		~NhanVien()
		{
			
		}
		void Nhap()
		{
			cout<<"Nhap ma nhan vien: ";
			getline(cin,Mnv);
			cout<<"Nhap ho ten: ";
			getline(cin,Ht);
			cout<<"Nhap ngay sinh: ";
			cin>>ns;
			cout<<"Nhap he so luong: ";
			cin>>hs;
		}
		void In()
		{
			cout<<" \nMa nhan vien: "<<Mnv<<endl;
			cout<<"\nHo ten: "<<Ht<<endl;
			cout<<"\nNgay sinh: "<<ns<<endl;
			cout<<"\nHe so luong: "<<hs<<endl;
		}
};


int main()
{
	NhanVien nv1;
	nv1.Nhap();
	nv1.In();
}