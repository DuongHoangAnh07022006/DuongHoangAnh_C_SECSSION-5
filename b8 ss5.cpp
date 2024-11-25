#include <stdio.h>
int main()
{
	int a, b, min, ucln, bcnn;
	printf ("moi nhap so nguyen a:");
	scanf ("%d",&a);
	printf ("moi nhap so nguyen b:");
	scanf ("%d",&b);
	if (a>b) {
		min = a; 
	} else {
		min=b; 
	} 
	for (int i=1;i<=min;i++)
	{
		if (a%i==0 && b%i==0){
			ucln=i; 
		}
    }
    bcnn = (a*b)/ucln;
    printf ("bcnn cua %d va %d là :%d",a,b,bcnn); 
return 0; 
 } 
