//Name :Rakesh .S. Yadav Roll no: 2029
#include<stdio.h>
#define M 10
void read(int n,int m[M][M])
{
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
    printf("M[%d][%d]: ",i,j);
    scanf("%d",&m[i][j]);
  }
 }
}

void multiply(int n,int m1[M][M],int m2[M][M], int m3[M][M])
{
 int i,j;
  for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   m3[i][j]=m1[i][j]*m2[i][j];
  }
 }
}

void print(int n,int m3[M][M])
{
  int i,j;
  for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",m3[i][j]);
  }
  printf("\n");
 }
}
int main()
{
	int n,m1[M][M],m2[M][M],m3[M][M];

    printf("Name :Rakesh S. Yadav\n Roll no: 2029\n");
	printf("Enter size of matrix(MAX 10) ");
	do
	{
	 scanf("%d",&n);
	 if(n<=0)
	 {
	  printf("Matrix cannot br of 0*0 ");
	 }
	}while(n<=0);

	printf("Enter elements of 1st matrix \n");
	read(n,m1);
	printf("Enter elemets for 2nd matrix \n");
	read(n,m2);

	multiply(n,m1,m2,m3);
	printf("Reult after multiplication= \n");
	print(n,m3);

	return 0;
}