#include <stdio.h>
int main()
{
    int a1,a2,a3,a4;
    int max1,max2;
    scanf("%d %d %d %d",&a1,&a2,&a3,&a4);
    max1 = (a1>a2)? a1:a2;
    max2 = (a2>a1)? a1:a2;

    max2 = (a3>max1)?max1 : (a3>max2)? a3:max2;
    max1 = (a3 > max1)?a3:max1;

    max2 = (a4>max1)?max1 : (a4>max2)? a4:max2;
    max1 = (a4 > max1)?a4:max1;
    printf("%d\n",max2);
    return 0;
}
