#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int tg = a;
    a = b;
    b = tg;
}
 
void SapXep(int a[], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }        
    }
}

int Min(int a[], int n){
	SapXep(a,n);
	int min = 10000;
	int c;
	for(int i = 0; i < n; i++){
		if(i > 0){
			c = a[i-1] - a[i];
		}
		if(c < min)
		{
			min = c;
		}
		
	}
	return min;
}

int main()
{
	int n, min;
	int m;
	cout<<"Nhap vao so nguyen n: ";
	cin >> n;
	
	int a[n];
	for(int i =0; i < n;i++)
	{
		cout<<"Nhap vao phan tu thu "<< i << ": ";
		cin>>a[i];
	} 
	
	cout<<"Ta co mang : ";
	for(int j=0;j<n; j++)
	{
		cout<<a[j]<< " ";
	}
	min = Min(a,n);
	cout<<"Khoang cach nho nhat la: "<<min<< "\n";
	cout<<"Cac cap thoa man la : " << "\n";
	for(int i =0; i < n;i++)
	{
		if(i>0)
		{
			m = a[i-1] - a[i];
		}
		if(m == min)
		{
			cout<<"("<<a[i]<<", "<<a[i-1]<<")"<<" ";
		}
	}
	
	return 0;
}
