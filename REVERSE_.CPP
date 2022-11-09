#include<iostream.h>
#include<conio.h>

int main()
{
	int mat1[3][3];
	int i,j;

	cout<<"\n Enter the MAtrix : " ;
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			cin >>mat1[i][j] ;
		}
	}

	cout<<"\nFinal  Reverse of Matrix : ";
	for ( j = 0 ; j< 3 ; j++)
	{
		for(i = 0 ; i < 3 ; i++)
		{
			cout <<mat1[i][j] <<"  " ;
		}
		cout<<"\n" ;
	}
	getch();
	return 0;
}
