//��ӡ
/*
#include <stdio.h>
int main()
{
    printf("Hello world!\n");
    printf("Hello \"hhh\" world!");
    return 0;
}
*/

//�����������ĺ͡�ƽ����
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
    sum = aa + sum;
    printf("Please enter the third integer: ");
    scanf("%d", &aa);
    sum = aa + sum;
    printf("Sum is : %d\n", sum);
    double average = sum / 3.;
    printf("Average is : %f", average);
    return 0;
}
*/

//������������ֵ
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
    printf("The first char: %d\n", a);
    printf("The second char: %d", b);
    return 0;
}
*/

//����һ��Сд��ĸ�����һ����д��ĸ
#include <stdio.h>
int main()
{
    char input, output;
    scanf("%c", &input);
    output = input - 32;
    printf("%c", output);
    return 0;
}
