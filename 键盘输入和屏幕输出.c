//打印空心正方形
#include <stdio.h>
int main () {
char s;
    s=getchar();
    for(int i=0;i<5;i++)
    putchar(s);
    printf("\n");
    printf("%c   %c\n",s,s);
    for(int i=0;i<5;i++)
    putchar(s);
  return 0;
}

//打印空心等腰三角形
#include <stdio.h>
int main () {
  char c;
    c=getchar();
    int a[4][7]={0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,1,1,1,1,1,1};
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(a[i][j]==0)
                printf(" ");
            if(a[i][j]==1)
                putchar(c);
        }
        printf("\n");
    }
  return 0;
}

//求粮食分配
#include <stdio.h>
int main() {
    float z,a;
    scanf("%f",&z);
    a=(3*z+1)/4;
    printf("%.2f",a);
    return 0;
}

//求车队招新数
#include <stdio.h>
int main() {
int a,b;
    scanf("%d",&a);
    b=(8+a)/2;
    printf("%d",b);
    return 0;
}

//计算盐水浓度
#include <stdio.h>
int main() {
    float a,b;
    scanf("%f",&a);
    b=a/(a+95);
    printf("%.2f",b);
    return 0;
}

//计算最佳观看距离
#include <stdio.h>
int main() {
float a,b,c;
    scanf("%f%f",&a,&b);
    c=a/b*3400;
    printf("%.2f",c);
    return 0;
}
