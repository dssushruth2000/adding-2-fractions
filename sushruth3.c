#include<stdio.h>
int lcm(int den1,int den2);

int main()
{
	int sum,num1,num2,den1,den2,LCM;
	printf("\n Enter the 1st fraction:numerator,denominator \n");
	scanf(" %d %d",&num1,&den1);
	printf(" \n Enter the 2nd fraction:numerator,denominator \n");
	scanf(" %d %d",&num2,&den2);
	LCM=lcm(den1,den2);
	printf(" \n The LCM of denominator is:%d \n",LCM);
	
	printf(" \n Fraction Addtion of ");
	printf("%d/%d + %d/%d = ",num1,den1,num2,den2);
	num1=num1*(LCM/den1);
	num2=num2*(LCM/den2);
	sum=num1+num2;
	printf("%d/%d ",sum,LCM);
}
	
int lcm(int den1,int den2)
{
	int LCM;
	LCM=(den1*den2);
	return LCM;
}
	
