
//输入大写字母，输出小写字母
/*
#include <stdio.h>
int main()
{
    char input, output;
    scanf("%c",&input);
    output = input + 32;
    printf("%c",output);
    return 0;
}
*/

//印出Hello world!
/*
#include <stdio.h>
int main()
{
    printf("Hello world!\n");
    printf("Hello \"C\" world!\n");
    return 0;
}
*/

//求三个整数的和
/*
#include <stdio.h>
int main()
{
    int aa, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &aa);
    sum = aa;
    printf("Please enter the second integer: ");
    scanf("%d", &aa);
    sum = sum + aa;
    printf("Please enter the third integer: ");
    scanf("%d", &aa);
    sum = sum + aa;
    printf("Sum is:%d.", sum);
    return 0;
}
*/

//交换四个整数的值：将a,b,c,d放到b,c,d,a
#include <stdio.h>
int main()
{
    int aa, bb, cc, dd, mm;
    printf("Please enter the first integer: ");
    scanf("%d", &aa);
    printf("Please enter the second integer: ");
    scanf("%d", &bb);
    printf("Please enter the third integer: ");
    scanf("%d", &cc);
    printf("Please enter the fourth integer: ");
    scanf("%d", &dd);

    mm = bb;
    bb = aa;
    aa = dd;
    dd = cc;
    cc = mm;

    printf("The first integer: %d\n", aa);
    printf("The second integer: %d\n", bb);
    printf("The third integer: %d\n", cc);
    printf("The fourth integer: %d\n", dd);
    return 0;
}
