#include <stdio.h>
int main()
{
	int a, b, c, tong, tbc, snn, sln, temd;
	int d=1; 
	 printf ("1.nhap 3 so\n");
	 printf ("2.trung binh cong\n");
	 printf ("3.tong 3 so\n ");
	 printf ("4.so nho nhat\n");
	 printf ("5.so lon nhat\n");
	 printf ("6.thoat\n");
	 while (d>0) 
	{
	 printf ("moi ban nhap lua chon:");
	 scanf ("%d",&c);
	 printf ("1.nhap 3 so \n");
	 printf ("2.tong 3 so \n");
	 printf ("3.trung binh cong \n ");
	 printf ("4.so lon nhat \n");
	 printf ("5.so nho nhat \n");
	 printf ("6.thoat \n");
	   switch (c) {
	   	case 1:
	   		 printf ("moi nhap gia tri a:");
	         scanf ("%d",&a);
	         printf ("moi nhap gia tri b:");
	         scanf ("%d",&b);
	         printf ("moi nhap gia tri c:");
	         scanf ("%d",&c);
			 break;
		case 2:
			 tong = a+b+c;
			   printf ("tong %d va %d va %d la :%d\n",a,b,c,tong);
			   break;
		case 3:
			 tbc=(a+b+c)/3; 
			   printf ("trung b?nh công là : %d\n",tbc);
			   break;
		case 4:
		     sln = a;
			 if (sln<b) {
			 	sln=b; 
			 } else {
			 	sln=c; 
			 } 
			   printf ("so lon nhat là :%d/n",sln);
			   break;
		case 5:
			 snn = a;
			 if (sln>b) {
			 	snn=b; 
			 } else {
			 	snn=c; 
			 } 
			   printf ("so nho nhat là :%d/n",snn);
			   break;  
		case 6:
		    break;
		default:
		    printf ("khong hop le");
			break;		   	   
	   }	
	} 
	return 0; 
 } 
