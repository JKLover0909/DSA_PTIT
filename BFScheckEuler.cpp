#include<bits/stdc++.h>
using namespace std;

bool dd[1000]; //Mảng đánh dấu đỉnh
int dem=1, dem2=1; //Đếm để đếm số đỉnh, đếm 2 để đếm số đồ thị con liên thông nếu có

void BFS(int a[][1000], int n, int i)
{
	dd[i]=1; //Đánh dấu đỉnh được duyệt
	for(int j=0;j<n;j++)
	{
		if(a[i][j] != 0 && dd[j]==0)//Nếu 2 đỉnh có đường đi và đỉnh chưa được duyệt qua
		{
			dem++;//Đếm đỉnh được duyệt qua
			BFS(a,n,j); //Đệ quy với đỉnh j
		}
	}
}
int main()
{
	int n; cout<<"nhap so dinh: "; cin>>n;
	int a[n][1000];
	cout<<"Nhap ma tran do thi: \n";
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			 cin>>a[i][j];
 	
	BFS(a,n,0);  //Gọi hàm duyệt đồ thị
	if(dem==n) cout<<"do thi lien thong";
	else cout <<"Khong phai do thị Euler";
}