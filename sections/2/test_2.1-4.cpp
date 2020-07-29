#include<iostream>
#include<cstdio>
using namespace std;
int i,j,a[10],b[10],c[10],key,n;
int main()
{
	//freopen("test.in","r",stdin);
	//freopen("test.out","w",stdout);
	
	scanf("%d",&n);
	for(i = 0;i < n;i++)	scanf("%d",&a[i]);
	for(i = 0;i < n;i++)	scanf("%d",&b[i]);
	
	for(i = n-1;i >= 0;i--){
		c[i] = (c[i+1] + a[i] + b[i]) / 2;
		c[i+1] = (c[i+1] + a[i] + b[i]) % 2;
	}
	for(i = 0;i <= n;i++)
		printf("%d ",c[i]);
	system("pause");
	return 0; 
}
 
