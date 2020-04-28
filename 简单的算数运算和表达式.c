//三位整数各位数字之和
#include <stdio.h>
int main () {
    int x = 153;
    int a,b,c;
    a=x/100;
    b=(x-100*a)/10;
    c=x-100*a-10*b;
    /* 计算并输出 153 的各位数字之和 */
    
    printf("百位: %d, 十位: %d, 个位: %d, 和为: %d\n",a,b,c,a+b+c);
    return 0;
}

//计算半径为5.3的圆的周长和面积
#include <stdio.h>
#define PI 3.14159
int main () {
    double r = 5.3;
    /* 计算半径为 5.3 的圆的周长和面积 */
    
    
    /* 输出周长与面积，请不要更改输出格式，输出内容，数字必须完全匹配题目要求才能通过 */
    printf("周长: %f\n面积: %f",2*PI*r,PI*r*r);
    return 0;
}

//键盘输入圆的半径求圆的周长和面积
#include <stdio.h>
#define PI 3.14159
int main () {
    double r, c, s;
    /* 计算并输出圆的周长和面积 */
    scanf("%lf",&r);
    c=2*PI*r;
    s=PI*r*r;
    printf("周长: %f\n面积: %f\n", c, s);
    return 0;
}

//使用宏常量定义pi求圆周长和面积
#include <stdio.h>
#define PI 3.14159
int main () {
    double r, c, s;
    /* 计算并输出圆的周长和面积 */
    scanf("%lf",&r);
    c=2*PI*r;
    s=PI*r*r;
    printf("周长: %f\n面积: %f\n", c, s);
    return 0;
}

//使用const常量定义pi求圆的周长和面积
#include <stdio.h>
int main () {
    double r, c, s;
    const double PI=3.14159;
    /* 计算并输出圆的周长和面积 */
    scanf("%lf",&r);
    c=2*PI*r;
    s=PI*r*r;
    printf("周长: %f\n面积: %f\n", c, s);
    return 0;
}

//将同一实型数分别赋值
#include<stdio.h>
int main()
{
    float a;
    double b;
    a=123456.789e4;
    b=123456.789e4;
    printf("%f\n%f\n",a,b);
}

//强制类型转换
#include <stdio.h>
int main () {
    int m = 5;
    printf("m/2 = %d\n", m/2);
    printf("(float)(m/2) = %f\n", (float)(m/2));
    printf("(float)m/2 = %f\n", (float)m/2);
    printf("m = %d\n", m);
    return 0;
}

//求三角形面积
#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c;
scanf("%f%f%f",&a,&b,&c);
float s,area;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("面积:%f\n",area);
return 0;
}
