//ת���ַ���ʹ��
/*
#include <stdio.h>
int main()
{
    printf("Hello world!\n");
    printf("Hello \"n\" world!");
    return 0;
}
*/

//�������������
/*
#include <stdio.h>
int main()
{
    int hh, sum;
    printf("Please enter the first integer: ");
    scanf("%d", &hh);
    sum = hh;
    printf("Please enter the second integer: ");
    scanf("%d", &hh);
    sum = sum + hh;
    printf("Please enter the third integer: ");
    scanf("%d", &hh);
    sum = sum + hh;
    printf("Sum is %d",sum);
    return 0;
}bcaed
*/

//��������Ľ���
/*
#include <stdio.h>
int main()
{
    int a, b, c, d, e, mm;
    printf("Please enter the first integer: ");
    scanf("%d", &a);
    printf("Please enter the second integer: ");
    scanf("%d", &b);
    printf("Please enter the third integer: ");
    scanf("%d", &c);
    printf("Please enter the fourth integer: ");
    scanf("%d", &d);
    printf("Please enter the fifth integer: ");
    scanf("%d", &e);

    mm = a;
    a = b;
    b = c;
    c = mm;
    mm = e;
    e = d;
    d = mm;

    printf("The first integer: %d\n", a);
    printf("The second integer: %d\n", b);
    printf("The third integer: %d\n", c);
    printf("The fourth integer: %d\n", d);
    printf("The fifth integer: %d\n", e);
    return 0;
}
*/

//�����д��ĸ��ת��ΪСд��ĸ
/*
#include <stdio.h>
int main()
{
    char intput, output;
    scanf("%c", &intput);
    output = intput + ('a' - 'A');
    printf("%c", output);
    return 0;
}
*/

//��������������ƽ����
#include <stdio.h>
int main()
{
    int aa, bb, cc;
    printf("Please enter the first integer : ");
    scanf("%d", &aa);
    printf("Please enter the second integer: ");
    scanf("%d", &bb);
    printf("Please enter the third integer: ");
    scanf("%d", &cc);
    double mm = (aa + bb + cc) / 3.;
    printf("%f",mm);
    return 0;
}
