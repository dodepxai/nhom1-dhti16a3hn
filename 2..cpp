#include <iostream>
using namespace std;
void Nhap( int a[100][100] , int m , int n)
{
	for ( int i = 0 ; i < m ; i ++ )
      {
      	for ( int j = 0 ; j < n ; j ++)
      	  {
  	      	cin >>  a[i][j];
  	      }
      }
}
void Xuat ( int a[100][100] , int m , int n)
{
	for ( int i = 0 ; i < m ; i ++)
	 {
 		for ( int j = 0 ; j < n ; j++)
 		  {
  		 	 cout << a[i][j] << "\t";
  		 	 
  		  }
  		  cout << endl;
 	 }
}
void le ( int a[100][100] , int m , int n)
{
	for ( int i = 0 ; i <  m ; i ++)
	 {
 		if ( i % 2 == 1)
 		 {
 		 	for ( int j = 0 ; j < n ; j ++)
 		 	 {
 	 		 	cout << a[i][j] << "\t";
 	 		 }
 	 		 cout << endl;
 		 }
 	 }
}
void cot_chan ( int a[100][100] , int m , int n)
{
	for ( int i = 0 ; i < m ; i ++)
	 {
 		for ( int j = 0 ; j < n ; j ++)
 		 {
 		 	if ( j % 2 == 0)
 		 	 {
 	 		 	cout << a[i][j] << "\t";
 	 		 }
 		 }
 		 cout << endl;
 	 }
}
   int Sum(int a[100][100],int m,int n)
{
	long long sum=0;
	for (int i=0;i<m;i++){
	for(int j=0;j<n;j++){
		sum+=a[i][j];
	}	
	}
	return sum;
}



void cot_le ( int a[100][100] , int m , int n)
{
	for ( int i = 0 ; i < m ; i ++)
	 {
 		for ( int j = 0 ; j < n ; j ++)
 		 {
 		 	if ( j % 2 == 1)
 		 	 {
 	 		 	cout << a[i][j] << "\t";
 	 		 }
 		 }
 		 cout << endl;
 	 }
}
void chuyen_vi ( int a[100][100] , int m , int n)
{
	for ( int i = 0 ; i < n ; i ++)
	 {
 	   for ( int j = 0 ; j < m ; j ++)
		 {
 			cout << a[j][i] << "\t";
 		 } 	
 		 cout << endl;
 	 }
}

int main()
{
	int m , n;
	cout << "\nNhap vao so hang: "; cin >> m;
	cout <<"\nNhap vao so cot: "; cin >>  n;
	int a[100][100];
	cout << endl;
	Nhap( a , m , n);
	cout << endl;
	cout << "\nXuat mang " << endl;
	Xuat ( a , m , n);
	cout << endl;
	cout << "\nIn ra chi so le cua mang " << endl;
	le( a , m , n);
	cout << endl;
	cout << "\nCac cot chan " << endl;
	cot_chan( a , m , n);
	cout << endl;
	cout << "\nCac cot le " << endl;
	cot_le( a , m , n);
	cout << endl;
	cout << "\nMa tran chuyen vi " << endl;
	chuyen_vi( a, m ,n );
	cout << endl;
	cout << "\nTong cac phan tu cua mang :"<<Sum(a,m,n)<<endl;
	

	return 0;
	
	
}
