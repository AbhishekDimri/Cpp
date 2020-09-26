#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{

int num,sum=0, r=0,n=0,count=0;

printf("enter number : ");
scanf("%d",&num);
n=num;

while(n>=1)
{
    n=n/10;
    count++;
}
printf("\n%d digit",count);
n=num;
while(n>=0)
{
    r=n%10;
    sum=sum+pow(r,count);
    n=n/10;
}
printf("\n%d\n",sum);
if(num==sum)
{
    printf("\n%d is a armstrong number",num);
}
else{
    printf("\n%d is not a armstrong number",num);
}
return 0;
getch();
}
