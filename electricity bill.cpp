#include<stdio.h>

struct bill
{
	char name[50];
	int  pa, pre;
	int diff;
	char add[50];
}s;
 int main()
{
int i;
 char esc;
 
 for(i=0;i<79;i++)
 printf("-");
 printf("\nWELCOME TO ELECTRICITY BILLING SYSTEM");
 printf("\n");
 for(i=0;i<79;i++)
 printf("-");
 printf("\nfollow the instructions and give ur details correctly");
 while(1)
 {
 	printf("\nENTER YOUR NAME-");
 	scanf("%s",s.name);
 	printf("\nENTER YOUR ADDRESS-");
 	scanf("%s",s.add);
 	printf("\nENTER YOUR PREVIOUS UNITS-");
 	scanf("%s",s.pa);
 	printf("\nENTER YOUR PRESENT UNITS-");
 	scanf("%s",s.pre);
 	s.diff=s.pre-s.pa;
 	if(s.diff<100)
 	{
	 
 	printf("\nCONSUMED UNITS:%d",s.diff);
 	printf("\nBELOW 100UNITS IS FREE OF COST");
 	printf("\nYOU NEED NOT HAVE TO PAY ANY ELECTRICITY BILL");
 	
    }
 else if (s.diff>=100 && s.diff<=200)
 {
 printf("\nCONSUMED UNITS:%d",s.diff); 
 printf("\nYOU HAVE CHARGED RS.2/- PER UNIT");
 s.diff=s.diff*2;
 printf("\nYOUR ELECTRICITY BILL IS RS.%d/-",s.diff);
}
else if(s.diff>200 && s.diff<500)
{
	printf("\nCONSUMED UNITS: %d",s.diff);
	printf("\nYOU HAVE CHARGED RS.4/- PER UNIT");
    s.diff=s.diff*4;
    printf("\nYOUR ELECTRICITY BILL IS RS.%d/-",s.diff);
}
else if (s.diff>=500 && s.diff<1000)
{


	printf("\nCONSUMED UNITS:%d",s.diff);
	printf("\nYOU HAVE CHARGED RS.6/- PER UNIT");
    s.diff=s.diff*6;
    printf("\nYOUR ELECTRICITY BILL IS RS.%d/-",s.diff);
}
else
{
	printf("\nCONSUMED UNITS:%d",s.diff);
	printf("\nYOU HAVE CHARGED RS.7/- PER UNIT");
    s.diff=s.diff*7;
    printf("\nYOUR ELECTRICITY BILL IS RS.%d/-",s.diff);
}
printf("\n");
 for(i=0;i<79;i++)
 printf("-");
 printf("\nTHANKYOU FOR USING OUR SERVICE");
 printf("\n");
 for(i=0;i<79;i++)
 printf("-");
 printf("\nPRESS ESCAPE KEY TO EXIT AND ANYOTHER KEY TO CONTINUE");
 scanf("%c",&esc);
 if(esc==27)
 break;
 
 
}
return 0;

}
 	
 	
	 	

