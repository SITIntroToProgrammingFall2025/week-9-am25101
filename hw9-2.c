#include <stdio.h>
int main()
{
   int a[3][3];
   int temp,i,j;
   //printf("enter the elements in the array\n");
   for(i=0;i<=2;i++){
     for(j=0;j<=2;j++){
	   //printf("enter the elements in [%d][%d]:",i,j);
	   scanf("%d",&a[i][j]);
	 }
	}
	printf("You entered\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for (i=0;i<=2;i++){
		temp=a[i][0];
		a[i][0]=a[i][2];
		a[i][2]=temp;
	}
	
	printf("Output\n");
	for(i=0;i<=2;i++){
		for(j=0;j<=2;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

