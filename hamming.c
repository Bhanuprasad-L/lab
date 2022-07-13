#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[10],b[10],i,c,c1,c2,c3;
printf("Enter 4 data bits to be sent one by one\n");
scanf("%d",&a[0]);
scanf("%d",&a[1]);
scanf("%d",&a[2]);
scanf("%d",&a[4]);
a[3] = a[0]^a[1]^a[2];
a[5] = a[0]^a[1]^a[4];
a[6] = a[0]^a[2]^a[4];
printf("DATA SENT:\n");
for(i=0;i<7;i++)
{
printf("%d ",a[i]);
}
printf("\nEnter the received data bit one by one\n");
for(i=0;i<7;i++)
{
scanf("%d",&b[i]);
}
c1=b[3]^b[0]^b[1]^b[2];
c2=b[5]^b[0]^b[1]^b[4];
c3=b[6]^b[0]^b[2]^b[4];
c=(4*c1)+(2*c2)+(1*c3);
if(c==0)
{
printf("NO ERROR IN BIT RECEIVED\n");
}
else{
printf("ERROR IN BIT %d RECEIVED\n",c);
printf("DATA RECEIVED IS\n ");
for(i=0;i<7;i++)
{
printf("%d ",b[i]);
}
b[7-c] = 1 - b[7-c];
printf("\nCORRECT DATA IS\n ");
for(i=0;i<7;i++)
{
printf("%d ",b[i]);
}
}
return 0;
}
