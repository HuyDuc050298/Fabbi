#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Nhap vao so nguyen n: ";
	cin >> n;
	
	int a[3*n];
	for(int i =0; i < 3*n;i++)
	{
		cout<<"Nhap vao phan tu thu "<< i << ": ";
		cin>>a[i];
	} 
	
	cout<<"Ta co mang : ";
	for(int j=0;j<3*n; j++)
	{
		cout<<a[j]<< " ";
	}
	
	int b[n];
	int c[n];
	int d[n];
	b[0] = a[0];
	for(int m =0; m <3*n;m++)
	{
		if(m%3 == 0)
		{
			b[m/3] = a[m];
		}
		else if(m%3 == 1)
		{
			c[m/3] = a[m];
		}
		else if(m%3 == 2)
		{
			d[m/3] = a[m];
		}
	}



	int e[3 * n];
	for(int k=0;k < 3*n; k++)
	{
		if(k<n){
			e[k] = b[k];
		}
		if(k>=n && k<2*n)
		{
			e[k] = c[k-n];
		}
		if(k>=2*n && k<3*n)
		{
			e[k] = d[k- 2*n];
		}
	}
	
	cout<<"mang sau sap xep la : ";
	for(int h = 0; h< 3*n; h++)
	{
		cout<<e[h]<<" ";
	}
	
	return 0;
	
}
