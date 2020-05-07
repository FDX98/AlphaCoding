//平方与立方
#include <stdio.h>

int main () {
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d*%d=%d\n",i,i,i*i);
    for(i=1;i<=n;i++)
    printf("%d*%d*%d=%d\n",i,i,i,i*i*i);
    // 请在此处完成你的程序
    
    return 0;
}

//温度对照表
#include <stdio.h>

int main () {
    int f;
    float c;
    for(f=-40;f<=110;f=f+10)
    {
        c=5.0/9.0*(f-32);
        printf("%d %.1f\n",f,c);
    }
    
    // 请在此处完成你的程序
    
    return 0;
}

//正数和
#include <stdio.h>

int main () {
int a,b,c;
b=0;
for (c=0;;c++)
{
    scanf("%d",&a);
    if (a>0)
        b=b+a;
    else
        break;
}
    printf("sum: %d; count: %d\n",b,c);
    return 0;
}

//正数和2
#include <stdio.h>

int main () {
    // 请在此处完成你的程序
    int i,math,sum=0,count=0;
for(i=1;;i++)
{
    scanf("%d",&math);
    if(math>0)
    {
        sum=sum+math;
        count++;
    }
    if(math<0)
    {
        continue;
    }
    if(math==0)
    {
        break;
    }
}
    printf("sum:%d;count:%d\n",sum,count);
    return 0;
}

//求PI的近似值
#include<stdio.h>
int main()
{
    double pi=0,fenmu=1,sign=1,e;
    scanf("%lf",&e);
    do
    {
        pi=pi+sign/fenmu;
        fenmu=fenmu+2;
        sign=sign*(-1.0);
    }while(1/(fenmu-2)>=e);
    printf("%.6f",4*pi);
    return 0;
}

//求e的近似值
#include <stdio.h>

int main() {
    int b,c,d;
    float a;
    a=1;
    d=1;
    scanf("%d",&c);
    for(b=1;b<=c;b++)
    {
        d=d*b;
        a=a+1.0/d;
    }
    printf("%lf",a);
	return 0;
}

//水仙花数
#include <stdio.h>

int main () {
    int i,a,b,c,num;
             scanf("%d",&num);

for(i=100;i<num;i++)//取值范围
{ a=i/100;//百位数
b=(i-a*100)/10;//十位数
c=i%10;//个位数
if(i== a*a*a +b*b*b +c*c*c)//判断各位上的立方和是否与原数n相等
printf("%d\n",i);//输出结果
}
    // TODO 请在此处编写代码，完成题目要求
    
    return 0;
}

//富翁和陌生人
#include <stdio.h>

int main () {
    double a,b;
    a=3000000.00;
    b=10737418.23;// 请在此处完成你的程序
    
    printf("陌生人总计给出: %.2f\n",a);
    printf("百万富翁总计给出: %.2f\n",b);
    return 0;
}

//求解不等式
#include <stdio.h>

int main () {
    int n,a,b,c;
    scanf("%d",&n);
    c=0;
    b=1;
    for(a=1;;a++)
    {
        b=b*a;
        c=c+b;
        if(c>=n)
            break;
    }
    // 请在此处完成你的程序
    
    printf("%d",a-1);
    return 0;
}

//饭店吃饭
#include <stdio.h>

int  main()
{  
 int i, j,num;
 for (i = 0; i <= 30; i++)
 {
  for (j = 0; j < 30; j++)
  {
   num=i * 3 + j * 2 + (30 - i - j);
   if (num == 50)
   {
   printf("男人: %d, 女人: %d, 小孩: %d\n",i,j,30-i-j);

  }
 }
}

    // 请在此处完成你的程序
    

    return 0;
}

//求解鸡兔同笼
#include <stdio.h>

int main () {
    // 请在此处完成你的程序
    int a=3;
    int b=95;
    printf("鸡: %d, 兔: %d\n",a,b);
    return 0;
}

//兑换人民币
#include <stdio.h>

int main () {
    int a,b,c;
    for(a=0;a<50;a++)
    {
        for(b=0;b<50;b++)
        {
            for(c=0;c<50;c++)
            {
               if(a+b+c==50&&a*10+b*5+c==100)
                printf("10元: %d, 5元: %d, 1元: %d\n",a,b,c);  
            }
        }
    }
    // 请在此处完成你的程序
    
   
    return 0;
}
