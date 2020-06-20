#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int count(int);
int summetion(int);
int reverse(int);
int binary(int);


int main()
{	
	int (*f_pointer)(int);
	void* ptr;
	int opt,num,ret;
	while(1)
	{
	printf("select option:\n1.binary\n2.summetion\n3.count\n4.reverse\n");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			printf("\tbinary is called\nEnter the value\n");
			scanf("%d",&num);
			ret=binary(num);
			printf("The binary value of %d is %d\n",num,ret);
			f_pointer=binary;
			ret=f_pointer(num);
			printf("The binary value of %d is %d\n",num,ret);
			ptr=binary;
			ret=((int(*)(int))ptr)(num);
			printf("The binary value of %d is %d\n",num,ret);
			break;
		case 2:
			printf("\t summetion is called\nEnter the value:\n");
			scanf("%d",&num);
			ret=summetion(num);
			printf("the summetion of the %d is %d\n",num,ret);
			f_pointer=summetion;
			ret=f_pointer(num);
			printf("the summetion of the %d is %d\n",num,ret);
			ptr=summetion;
			ret=((int(*)(int))ptr)(num);
			printf("the summetion of the %d is %d\n",num,ret);
			break;
		case 3:
			printf("\t count is  callled\nenter the value:\n");
			scanf("%d",&num);
			ret=count(num);
			printf("the no of digits in %d is %d\n",num,ret);
			f_pointer=count;
			ret=f_pointer(num);
			printf("the no of digits in %d is %d\n",num,ret);
			ptr=count;
			ret=((int(*)(int))ptr)(num);
			printf("the no of digits in %d is %d\n",num,ret);
			break;
			
		case 4:
			printf("reverse is called\nenter the value\n");
			scanf("%d",&num);
			ret=reverse(num);
			printf("The reverse value of %d is %d\n",num,ret);
			f_pointer=reverse;
			ret=f_pointer(num);
			printf("The reverse value of %d is %d\n",num,ret);
			ptr=reverse;
			ret=((int(*)(int))ptr)(num);
			printf("The reverse value of %d is %d\n",num,ret);
			break;
		default:
			printf("### invalid selection ###\n");
			break;
	}
	}
}
int  count(int num)
{	

	int cont=0;
	while(num>0)
	{
		cont++;
		num=num/10;
	}
	return cont;
}


int reverse(int num)
{
	int rev=0;
	int temp;
	while(num>0)
	{
		temp=num%10;
		rev=rev*10+temp;
		num/=10;
	}
	return rev;
}

int summetion(int num)
{
	int sum=0;
	int temp;
	for(;num>0;num/10)
	{
		temp=num%10;
		sum=sum+temp;
	}
	/*while(num>0)
	{
		temp=num%10;
		sum+=temp;
		num/=10;
	}*/
	return sum;
}

int binary(int num)
{
	int bnry=0,temp,rem,base=1;
	while(num>0)
	{
		rem=num%2;
		bnry=bnry+rem*base;
		base=base*10;
		num=num/2;
	}
	return bnry;
}
