#include<stdio.h>
int main()
{
  int stu[120],tea[120],i,n,h,m,t,count=0,counter=0,te,tt;
  printf("Enter total number of students having querrry:\n");
  scanf("%d",&n);
  printf("Enter total number of teachers having querrry:\n");
  scanf("%d",&t);
  printf("Enter arrival time for each student querry in format of hours : minutes\n");
  for(i=0;i<n;i++)
  {
  	scanf("%d",&stu[i]);
  }	
  printf("Enter arrival time for each teacher querry in format of hours : minutes->\n");
   for(i=0;i<t;i++)
  {
  	scanf("%d",&tea[i]);
  }	
  printf("Querry\t\tArrival time\n");
  for(i=0;i<n;i++)
  {
  	printf("  %d\t\t  %d\n",i,stu[i]);
  }
  for(i=0;i<t;i++)
  {
  	printf("  %d\t\t  %d\n",i,tea[i]);
  }
  for(i=0;i<n;i++)
  {
	if((stu[i]>1000)&&(stu[i]<1200))
	{
		printf("Query %d will wait\n",i);
	}
	else if(stu[i]>1200)
	{
		printf("Query %d will not execute as arrival time is greater than 12:00\n",i);
	}
	else if(stu[i]<=1000)
  	{
  		printf("\nQuery %d will execute as arrival time is less than 10:00\n",i);
  		count++;
	}
  }
  for(i=0;i<n;i++)
  {
	if((tea[i]>1000)&&(tea[i]<1200))
	{
		printf("Query %d will wait\n",i);
	}
	else if(tea[i]>1200)
	{
		printf("Query %d will not execute as arrival time is greater than 12:00\n",i);
	}
	else if(tea[i]<=1000)
  	{
  		printf("\nQuery %d will execute as arrival time is less than 10:00\n",i);
  		counter++;
	}
  }
  tt=count+counter;
  te=120/tt;//te=time taken by each querry
  printf("Time taken for each query is %d\n",te);
}
