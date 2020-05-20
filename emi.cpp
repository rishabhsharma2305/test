#include<stdio.h>
#include<math.h>
int main()
{
	double loan,t,n1,n2,n1_time[50],n1_rate[50],n2_time[50],n2_rate[50],emi_a[50],emi_b[50],x,sum1=0.0,sum2=0.0;
	int i;
	double res1,res2;
	printf("enter loan amount:");
	scanf("%lf",&loan);
	printf("enter no of years:");
	scanf("%lf",&t);
	printf("enter the slabs of bank A:");
	scanf("%lf",&n1);
	for(i=0;i<n1;i++)
	{
		scanf("%lf",&n1_time[i]);
		scanf("%lf",&n1_rate[i]);
	}
	for(i=0;i<n1;i++)
	{
		x=pow((1+n1_rate[i]),(n1_time[i]*12));
		emi_a[i]=(loan*n1_rate[i])/(1-(1/x));
	}
	for(i=0;i<n1;i++)
	printf("%lf\n",emi_a[i]);
	for(i=0;i<n1;i++)
	{
		sum1=sum1+emi_a[i];
	}
	printf("value of emi for bank A= %lf\n",sum1/3);
	
	printf("enter the slabs of bank B:");
	scanf("%lf",&n2);
	for(i=0;i<n2;i++)
	{
		scanf("%lf",&n2_time[i]);
		scanf("%lf",&n2_rate[i]);
	}
	for(i=0;i<n2;i++)
	{
		x=pow((1+n2_rate[i]),(n2_time[i]*12));
		emi_b[i]=(loan*n2_rate[i])/(1-(1/x));
	}
	for(i=0;i<n1;i++)
	printf("%lf\n",emi_b[i]);
	for(i=0;i<n1;i++)
	{
		sum2=sum2+emi_b[i];
	}
	printf("value of emi for bank B= %lf\n",sum2/3);
	res1=sum1/3;
	res2=sum2/3;
	if(res1<res2)
	printf("A");
	else if(res1>res2)
	printf("B");
	else
	printf("Both are same");
	
	
}
