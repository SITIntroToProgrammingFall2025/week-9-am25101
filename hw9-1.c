#include <stdio.h>
int main()
{
   int a[2][2];
   int i,j;
   double product1,product2,determinant;
   //printf("enter the elements in the array:\n");
   for (i=0;i<2;i++){
     for (j=0;j<2;j++){
	    //printf("enter the elements in [%d][%d]:",i,j);
		scanf("%d",&a[i][j]);
	  }
	}
	//printf("You entered\n");
	j=0;
	for (i=0;j<2;j++){
	     //printf("%d ",a[i][j]);
	}
	//printf("\n");
	j=0;
	for (i=1;j<2;j++){
		//printf("%d ",a[i][j]);
	}
	//printf("\n");
	product1=a[0][0]*a[1][1];
	product2=a[0][1]*a[1][0];
	determinant=product1-product2;
	printf("Determinant is %.6f",determinant);
	return 0;
}



