
//印出hello world！
/*
#include <stdio.h>
int main()
{
    printf("Hello world!");
    return 0;
}
*/

//印出Hello "C" world!
/*
#include <stdio.h>
int main()
{
    printf("Hello \"C\" world!");
    return 0;
}
*/

//求两个整数的和
/*
#include <stdio.h>
int main()
{
    int integer1, integer2, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter teh second integer: ");
    scanf("%d", &integer2);
    sum = integer1 + integer2;
    printf("Sum is %d.", sum);
    return 0;
}
*/

//求三个整数的和
/*
#include <stdio.h>
int main()
{
    int integer1, integer2, integer3, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &integer1);
    printf("Please enter the second integer: ");
    scanf("%d", &integer2);
    printf("Please enter the third integer: ");
    scanf("%d", &integer3);
    sum = integer1 + integer2 + integer3;
    printf("Sum is %d.", sum);
    return 0;
}
*/

//交换两个整数值：将a、b放到b、a
/*
#include <stdio.h>
int main()
{
    int a, b, m;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);

    m = b;
    b = a;
    a = m;

    printf("The first integer:%d.\n", a);
    printf("The second integer:%d.\n", b);
    return 0;
}
*/

//交换三个整数值：将a、b、c放到b、c、a
#include <stdio.h>
int main()
{
    int a, b, c, m;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    printf("Please enter the third integer: ");
    scanf("%d", &c);

    m=a;
    a=b;
    b=c;
    c=m;

    printf("The first integer:%d\n", a);
    printf("The second integer:%d\n", b);
    printf("The third integer:%d\n", c);
    return 0;
}
