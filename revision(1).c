Ques. 8. Sudesh Sharma is a Linux expert who wants to have an online system where he can handle student queries. 
Since there can be multiple requests at any time he wishes to dedicate a fixed amount of time to every request so that everyone gets a fair share of his time.
He will log into the system from 10am to 12am only.  He wants to have separate requests queues for students and faculty. Implement a strategy for the same.
The summary at the end of the session should include the total time he spent on handling queries and average query time. 
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
  
}