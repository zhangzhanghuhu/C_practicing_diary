//ӡ��Hello world!
/*
#include <stdio.h>
int main()
{
    printf("Hello world!");
    return 0;
}
*/

//ӡ��Hello "C" world!
/*
#include <stdio.h>
int main()
{
    printf("Hello \"C\" world!");
    return 0;
}
*/

//�����������ĺ�
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
    printf("Sum is:%d.", sum);
    return 0;
}
*/

//�����������ĺ�
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
    printf("Sum is:%d", sum);
    return 0;
}
*/

//��������������ֵ����a,b�ŵ�b,a
/*
#include <stdio.h>
int main()
{
    int aa, bb, mm;
    printf("Please enter the first integer: ");
    scanf("%d", &aa);
    printf("Please enter the second integer: ");
    scanf("%d", &bb);

    mm = aa;
    aa = bb;
    bb = mm;

    printf("The first integer: %d.\n", aa);
    printf("The second integer: %d.\n", bb);
    return 0;
}
*/

//��������������ֵ����a,b,c�ŵ�b,c,a
/*
#include <stdio.h>
int main()
{
    int aa, bb, cc, mm;
    printf("Please enter the first integer: ");
    scanf("%d", &aa);
    printf("Please enter the second integer: ");
    scanf("%d", &bb);
    printf("Please enter the third integer: ");
    scanf("%d", &cc);

    mm = aa;
    aa = bb;
    bb = cc;
    cc = mm;

    printf("The first integer: %d.\n", aa);
    printf("The second integer: %d.\n", bb);
    printf("The third integer: %d.\n", cc);
    return 0;
}
*/

//��ӡ�򵥵�ͼ��
#include <stdio.h>
int main()
{
    printf( "H     H     A\n"
            "H     H    A A\n"
            "HHHHHHH   A   A\n"
            "H     H  AAAAAAA\n"
            "H     H  A     A\n");
    return 0;
}
