#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct SinhVien{
	int masv;
	char hoten[15];
	char lop[10];
	float diemtoan;
	float diemli;
	float diemhoa;
};
SinhVien SV[30];
void nhap(SinhVien SV[],int &n)
{
	cout<<"Nhap so sinh vien: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	
		cout<<"Nhap thong tin thu "<<i<<"\n";
		cout<<"Ma sinh vien: ";
	 	cin>>SV[i].masv;
 		cin.ignore();
		cout<<"Ten sinh vien: ";
	 	cin.getline(SV[i].hoten,15);
		cout<<"Ten lop: "; 
		cin.getline(SV[i].lop,10);
		cout<<"Diem toan: "; 
		cin>>SV[i].diemtoan;
		cout<<"Diem li: "; 
		cin>>SV[i].diemli;
		cout<<"Diem hoa: "; 
		cin>>SV[i].diemhoa;
		system("cls");
	
	}
}
void In(SinhVien SV[], int &n)
{
	cout<<"================================================================================================"<<"\n";
	cout<<left<<setw(7)<<"||"<<"Ma sinh vien "; 
	cout<<left<<setw(15)<<"||"<<"Ten sinh vien "; 
	cout<<left<<setw(5)<<"||"<<"Ten lop ";
	cout<<left<<setw(3)<<"||"<<"Diem toan "; 
	cout<<left<<setw(3)<<"||"<<"Diem li "; 
	cout<<left<<setw(3)<<"||"<<"Diem hoa "<<"||"<<"\n"; 
	cout<<"================================================================================================"<<"\n";
	for(int i=1;i<=n;i++)
	{
		cout<<left<<setw(10)<<"||"<<SV[i].masv; 
		cout<<left<<setw(15)<<"||"<<SV[i].hoten; 
		cout<<left<<setw(12)<<"||"<<SV[i].lop;
		cout<<left<<setw(11)<<"||"<<SV[i].diemtoan; 
		cout<<left<<setw(11)<<"||"<<SV[i].diemli; 
		cout<<left<<setw(11)<<"||"<<SV[i].diemhoa<<"||"<<"\n";
	}                 
	cout<<"================================================================================================"<<"\n";
	
}
int main()
{
	int n;
	nhap(SV,n);
	In(SV,n);
	
}