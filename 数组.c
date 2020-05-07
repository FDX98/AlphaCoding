//定义并初始化整数数组
略

//读取输入数据到数组
#include <stdio.h>
void read_array (int array[]) {
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    return 0;
}
int main () {
    int array[10];
    read_array(array);
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}

//将一个数组逆序存储到另一个数组
#include <stdio.h>

void reverse (int src[], int dst[], int total) {
    int a;
    for(a=0;a<total;a++)
        dst[total-a-1]=src[a];    
}
int main () {
    int total;
    int src[30];
    scanf("%d", &total);
    for (int i = 0; i < total; i++) {
        scanf("%d", &src[i]);
    }
    int dst[30];
    reverse(src, dst, total);
    for (int i = 0; i < total; i++) {
        printf("%d ", dst[i]);
    }
    return 0;
}

//求最大值
#include <stdio.h>

int find_max_number(int numbers[], int n) {
    int a,b;
    a=numbers[0];
    for(b=0;b<n;b++)
    {
        if(a<numbers[b])
            a=numbers[b];
    }
    return a;
}
int main () {
    int numbers[] = {2, 8, 10, 1, 9, 10};
	int n = 6;
    int result = find_max_number(numbers,n);
    printf("%d",result);
    return 0;
}

//进制转换
#include<stdio.h>
void decimalToAny(int n,int d)//10进制转换成任意进制
{
    if(n==0)
        return ;
    else
    {
        decimalToAny(n/d,d);
        if(d>=10)//如果是10进制以上
        {
            if(n%d>=10)
            {
                 printf("%c",(char)((n%d-10)+'A'));
            }
            else//如果余数小于10，则直接输出
                printf("%d",n%d);
        }
        //如果进制小于10，不会有字母的问题
        else
            printf("%d",n%d);
    }
}
int main()
{
    int n,d;
    scanf("%d",&n);
    scanf("%d",&d);
    decimalToAny(n,d);
    return 0;
}

//进制转换二
答案同上一道题

//计算平均成绩
#include <stdio.h>
float compute (float scores[], int n) {
    int a;
    float b;
    b=0;
    for(a=0;a<n;a++)
        b=b+scores[a];
    return b/n;
}
int main () {
    float scores[] = {77, 54, 92, 73, 60};
    int n = 5;
    float s = compute (scores,n);
    printf("%d\n", s);
    return 0;
}

//统计奇偶数量
#include <stdio.h>
int count_odd_or_even (int numbers[], int n, int odd_or_even) {
    int a,b;
    b=0;
    for(a=0;a<n;a++)
    {
        if(numbers[a]%2==0)
            b++;
    }
    if(odd_or_even==1)
        return n-b;
    else
        return b;
}
int main () {
    int n = 9;
    int numbers[] = {88, 74, 101, 26, 15, 0, 34, 22, 77};
    int odd_or_even = 1;
    int result = count_odd_or_even (numbers, n, odd_or_even);
    printf("%d", result);
    return 0;
}
