//判断大小月
#include <stdio.h>

int main () {
    int a;
    scanf("%d",&a);
    if(a>12||a<=0)
        printf("error");
    else if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    printf("solar month");
    else if(a==2||a==4||a==6||a==9||a==11)
        printf("lunar month");
    // TODO 请在此处编写代码，完成题目要求
    return 0;
    return 0;
}

//判断正负数
#include <stdio.h>

int main () {
    int a;
    scanf("%d",&a);
    if(a==0)
        printf("zero");
    else if(a<0)
    printf("negative");
    else if(a>0)
        printf("positive");
    // TODO 请在此处编写代码，完成题目要求
    
    return 0;
}

//判断回文数
#include <stdio.h>
main()
{long i,i0,i1,i2,i3,i4 ;  /*i0个位，i1十位，i2百位，i3千位，i4万位  */

  printf("please input a integer:");
  scanf("%ld",&i);/*注意精确度，防止数据溢出*/ 
  i0=i%10;/*取个位*/ 
  i1=i%100/10;/*取十位*/ 
  i2=i%1000/100;/*取百位*/ 
  i3=i/1000%10;/*取千位*/ 
  i4=i/10000;/*取万位*/ 
  if(i0==i4&&i1==i3)
    printf("yes");
  else
    printf("no");
}

//判断元辅音
#include <stdio.h>

int main () {
    char c;
    c=getchar();
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        printf("vowel sound");
    else
        printf("consonant sound");
    // TODO 请在此处编写代码，完成题目要求
    
    return 0;
}

//时间差
#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,d,t,s1,s2;
scanf("%d:%d",&a,&b);
scanf("%d:%d",&c,&d);
if(a==c) 
{s1=0;s2=abs(b-d);}
else
{
if(a<c)
{t=a;a=c;c=t;t=b;b=d;d=t;}
if(b<d) {b+=60;a-=1;}
s1=a-c;s2=b-d;
}
printf("%d:%d",s1,s2);
return 0;
}

//铁路托运行李费用
#include <stdio.h>

int main () {
    int w;
    float m;
    scanf("%d",&w);
    if(w<0)
        printf("error");
    else if(w>=0&&w<=10)
    {
        m=w*1.3;
        printf("%.2f",m);
    }
    else if(w>10&&w<=50)
    {
        m=(w-10)*1.8+13;
        printf("%.2f",m);
    }
    else if(w>50&&w<=200)
    {
        m=13+1.8*40+(w-50)*2.4;
        printf("%.2f",m);
    }
     else if(w>200)
    {
        m=13+72+360+(w-200)*4.5;
        printf("%.2f",m);
    }
    // TODO 请在此处编写代码，完成题目要求
    
    return 0;
}

//计算商场购物的优惠金额
#include <stdio.h>

int main () {
int a;
float b;
scanf("%d",&a);
if (a<200);
    b=a*(1-0.95);
    printf("%.2f",b);
if (a>=200 && a<500)
    b=a*(1-0.9);
    printf("%.2f",b);
if (a>=500 && a<1000)
    b=a*(1-0.85);
    printf("%.2f",b);
if (a>=1000 && a<2000)
    b=a*(1-0.8);
    printf("%.2f",b);
if (a>=2000 && a<5000)
    b=a*(1-0.7);
    printf("%.2f",b);
if (a>=5000 && a<10000)
    b=a*(1-0.6);
    printf("%.2f",b);
if (a>=10000)
    b=a*(1-0.5);
    printf("%.2f",b);
    return 0;
}

//计算工资
#include <stdio.h>

int main () {
    int y,h;
    float a;
    scanf("%d%d",&y,&h);
    if(y<5)
    {
        if(h<=40)
        {
            a=30*h;
            printf("%.2f",a);
        }
        if(h>40)
        {
            a=30*40+1.5*30*(h-40);
            printf("%.2f",a);
        }
    } 
    if(y>=5)
    {
        if(h<=40)
        {
            a=50*h;
            printf("%.2f",a);
        }
        if(h>40)
        {
            a=50*40+1.5*50*(h-40);
            printf("%.2f",a);
        }
    }
    // TODO 请在此处编写代码，完成题目要求
    
    return 0;
}

//标准体重
#include <stdio.h>

int main () {
    float a,b;
    float m;
    scanf("%f%f",&a,&b);
    m=(a-100)*0.9;
    if(b<1.1*m&&b>0.9*m)
        printf("Perfect body");
    else if(b>1.1*m)
        printf("Too fat");
    else if(b<0.9*m)
        printf("Too skinny");
    // TODO 请在此处编写代码，完成题目要求
    
    return 0;
}

//输出日期格式
#include <stdio.h>
int main () {
    int year,month,day;
    scanf("%d%d%d",&year,&month,&day);
    if(year<1000)
    {
        if(month<10)
        {
         if(day<10)
             printf("0%d/0%d/0%d",year,month,day);
         else
             printf("0%d/0%d/%d",year,month,day);
        }
        else
        {
            if(day<10)
             printf("0%d/%d/0%d",year,month,day);
         else
             printf("0%d/%d/%d",year,month,day);
        }
    }
    else
    {
        if(month<10)
        {
         if(day<10)
             printf("%d/0%d/0%d",year,month,day);
         else
             printf("%d/0%d/%d",year,month,day);
        }
        else
        {
            if(day<10)
             printf("%d/%d/0%d",year,month,day);
         else
             printf("%d/%d/%d",year,month,day);
        }
    }
  
  return 0;
}

//计算日期对应的天数
#include <stdio.h>
int main () {
    int a,b,c,d,sum;
    sum=0;
    scanf("%d-%d-%d",&a,&b,&c);
    if(a%100!=0)
    {
        if(a%4==0)
            d=1;
        else
            d=0;
    }
    else
    {
        if(a%400==0)
            d=1;
        else
            d=0;
    }
    if(d==1)
    {
        for(int i=1;i<b;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum=sum+31;
            else if(i==2)
                sum=sum+29;
            else if(i==4||i==6||i==9||i==11)
                sum=sum+30;
        }
        sum=sum+c;
        printf("%d",sum);
    }
    else
    {
        for(int i=1;i<b;i++)
        {
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
                sum=sum+31;
            else if(i==2)
                sum=sum+28;
            else if(i==4||i==6||i==9||i==11)
                sum=sum+30;
        }
        sum=sum+c;
        printf("%d",sum);
    }
    return 0;
}
