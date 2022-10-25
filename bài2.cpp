#include<iostream>
using namespace std;
struct sophuc{
	float phanthuc;
	float phanao;
	
}sophuc sp[30];
void nhap(sophuc sp[], int &n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<"Nhập số phức: ";
		cin>>n;
		cout<<"Nhập phần thực: ";
		cout<<"Nhập phần ảo: ";
	}
}
void xuat(sophuc sp[], int &n)
{
	for(int i=0;i<=n;i++)
	{
		cout<<"Phần thực: ";
		cin>>sp[i].phanthuc;
		cout<<"Phàn ảo: ";
		cin>>sp[i].phanao;
	}
}