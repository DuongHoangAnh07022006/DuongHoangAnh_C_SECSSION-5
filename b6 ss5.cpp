#include <stdio.h>
int main()
{
	int a, b, c, tong, hieu, tich;
	float thuong;
	printf ("moi nhap gia tri a:");
	scanf ("%d",&a);
	printf ("moi nhap gia tri b:");
	scanf ("%d",&b);
	printf ("1.tong 2 so \n");
	printf ("2.hieu 2 so \n");
	printf ("3.tich 2 so \n");
	printf ("4.thuong 2 so \n");
	printf ("5. thoat \n");
	while (a>0) 
	{
	   printf ("moi ban nhap lua chon:");
	   scanf ("%d",&c);
	   switch (c) {
	   	case 1:
	   		tong = a + b;
			   printf ("tong 2 so la :%d\n",tong);
			   break;
		case 2:
			hieu = a-b;
			   printf ("hieu hai so là : %d\n", hieu);
			   break;
		case 3:
		    tich = a*b;
			   printf ("tich hai so là : %d\n",tich);
			   break;
		case 4:
		    thuong = a/b;
			   printf ("thuong cua hai so la :%.2f\n",thuong);
			   break;
		case 5:
		    break;
		default:
		    printf ("khong hop le");		   	   
			   	    
	   }	
	}
return 0;	 
 } 
