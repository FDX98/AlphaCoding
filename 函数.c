//计算最大值
#include <stdio.h>
int findMax (int n1, int n2) {
    if(n1>n2)
        return n1;
    else
        return n2;
}
int main () {
    int x, y, z;
    scanf("%d %d", &x, &y);
    z = findMax(x, y);
    printf("max: %d", z);
    return 0;
}

//最小公倍数
#include <stdio.h>
int common_multiple (int number1, int number2)
{
    int i;
    for(i=1;;i++)
    {
        if(i%number1==0&&i%number2==0)
            break;
    }
    return i;
}
int main () {
  int multiple, number1 = 24, number2 = 16;
  multiple = common_multiple(number1, number2);
  printf("%d", multiple);
  return 0;
}

//求阶乘函数
#include <stdio.h>
int fact (int n) {
    // 请在此处完成你的程序
    int a,b=1;
    for(a=1;a<=n;a++)
        b=b*a;
    return b;
}
int main () {
    int n;
    scanf("%d", &n);
    int fa = fact(n);
    printf("%d\n", fa);
    return 0;
}

//求阶乘的和
#include <stdio.h>
int fact (int n) {
    int a,b=1;
    for(a=1;a<=n;a++)
        b=b*a;
    return b;
}
int factSum (int n) {
   int a,b=1,c=0;
    for(a=1;a<=n;a++)
    {
        b=b*a;
        c=c+b;
    }
    return c;
}
int main () {
    int n;
    scanf("%d", &n);
    int fa = fact(n);
    int faSum = factSum(n);
    printf("fact: %d\nfactSum: %d\n", fa, faSum);
    return 0;
}

//最大公约数
#include <stdio.h>
int common_divisor (int number1, int number2)
{
    int t;
    while(number2)
    {
        t=number1%number2;
        number1=number2;
        number2=t;
    }
    return  number1;
}
int main () {
  int multiple, number1 = 24, number2 = 16;
  multiple = common_divisor(number1, number2);
  printf("%d", multiple);
  return 0;
}

//等差数列求和
#include <stdio.h>

double ari_sum(double start, double delta, int number) {
    double a;
    a=number*start+number*(number-1)*delta/2;
    return a;
}
int main () {
	double res = ari_sum(0.1, 0.2, 3);
	printf("%f",res);
	return 0;
}
