#include<iostream>
#include<cstdio>
using namespace std;
int i,j,a[10],key;
int main()
{
	//freopen("test.in","r",stdin);
	//freopen("test.out","w",stdout);
	
	for(i=1;i<=6;i++)
		scanf("%d",&a[i]);
	
	for(j=2;j<=6;j++)
	{
		key=a[j];
		i=j-1;
		while(i>0&&a[i]<key){
			a[i+1]=a[i];
			i--;
		}
		a[i+1]=key;
	}
	
	for(i=1;i<=6;i++)
		printf("%d ",a[i]);
	system("pause");
	return 0; 
}
 
