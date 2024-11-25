#include <stdio.h>
int main()
{
	int a, tich;
	printf ("moi nhap so nguyen n:");
	scanf ("%d",&a);
	if (a>0 && a<=10)
	{
	 for (int i=1; i<=10;i++)
	 {
	   tich = i*a;
	   printf ("%d * %d =%d\n",a,i,tich); 
	  } 
    } else 
	{
      printf ("khong hop le"); 
    } 
 } 
