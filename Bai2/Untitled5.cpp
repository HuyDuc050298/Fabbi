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

int FindSecondMax(int a[], int n){
    SapXep(a, n);
    return a[1];
}
int FindMax(int a[], int n){
	SapXep(a, n);
    return a[0];
}
int main()
{
	int n;
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
	
	int b = FindSecondMax(a,n);
	int c = FindMax(a,n);
	
	cout<<"Tong 2 so la : "<<b+c;
	
	return 0;
	
}
