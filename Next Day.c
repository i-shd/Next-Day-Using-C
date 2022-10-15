#include <stdio.h>
int main()
{
    int d,m,y;
    int num=1;
    scanf("%d-%d-%d",&d,&m,&y);
    if(m==1||m==3||m==5||m==7||m==8||m==10)
    {
      if(d==31)
      {
        d=1;
        m=m+1;
      }
      else
      {
        d=d+1;
      }
    }
    else if(m==4||m==6||m==9||m==11)
    {
      if(d==30)
      {
        d=1;
        m=m+1;
      }
      else
      {
        d=d+1;
      }
    }
    else if(m==2 && (y%4==0 || y%400 ==0 ))
    {
      if(d==29)
      {
        d=1;
        m=m+1;
      }
      else
      {
        d=d+1;
      }
    }
    else if(m==2 && (y%4!=0 ||y%4!=0))
    {
      if(d==28)
      {
        d=1;
        m=m+1;
      }
      else
      {
        d=d+1;
      }
    }
  else if(m==12)
  {
    if(d==31)
    {
      d=1;
      m=1;
      y=y+1;
    }
    else if(d<31)
    {
      d=d+1;
    }
  }
  if (num==1)
  {
    if(d>=32 || m>=13)
    {
      printf("Enter Valid Date");
    }
    else if(d>=30 && m==2 && (y%4==0 || y%400==0))
    {
      printf("Enter Valid Date");
    }
    else if(d>=29 && m==2 && (y%4!=0 || y%400!=0))
    {
      printf("Enter Valid Date");
    }
    else if(d<10 && m<10)
    {
      printf("0%d-0%d-%d",d,m,y);
    }
    else if(d>10 && m<10)
    {
      printf("%d-0%d-%d",d,m,y);
    }
    else if(d<10 && m>10)
    {
        printf("0%d-%d-%d",d,m,y);
    }
    else if(d>10 && m>10)
    {
      printf("%d-%d-%d",d,m,y);
    }
  return 0;
  }
}