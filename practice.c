
//ӡ��hello world��
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

//�����������ĺ�
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

//������������ֵ����a��b�ŵ�b��a
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

//������������ֵ����a��b��c�ŵ�b��c��a
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
