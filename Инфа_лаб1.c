#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

float first();
float second();
float third();

int main() {
    setlocale(LC_ALL, "Rus");
    float first();
    float second();
    float third();
    return 0;
}

float first() {
    float n1, n2, n3;
    float pr1, pr2;

    puts("������� ��������� � ����������� �����");
    scanf("%f %f", &n1, &n2);
    puts("������� ��������������� ��������");
    scanf("%f", &pr1);
    puts("������� ����������� ���������");
    scanf("%f", &n3);
    puts("������� ��������������� ��������");
    scanf("%f", &pr2);

    float x1 = n1 / n2;
    float x2 = sqrt(n3);

    float pred1 = fabs(x1 - pr1);
    float pred2 = fabs(x2 - pr2);

    float prc1 = fabs(pred1 / pr1);
    float prc2 = fabs(pred2 / pr2);

    if (prc1 > prc2) {
        printf("������ ��������� ����� ������: sqrt(%f) = %.3f\n", n3, pr2);
        return 0;
    }
    else if (prc2 > prc1) {
        printf("������ ��������� ����� ������: %f/%f = %.3f\n", n1, n2, pr1);
        return 0;
    }
    else {
        printf("���������� ���������� ����������� �����\n");
        return 0;
    }
}

float second() {
    //printf("������� �\n");
//float num, error;
//printf("������� �����: ");
//scanf("%f", &num);
//printf("������� ������������� �����������: ");
//scanf("%f", &error);
//float rounded_num = round(num * 100) / 100;
//float abs_error = error * num;
//printf("�������� �����: %f\n���������� �����: %f\n���������� �����������: %f\n", num, rounded_num, abs_error);
    return 0;
}

float third() {
    //printf("������� �\n");
//float num, app_num;
//printf("������� �����: ");
//scanf("%f", &num);
//app_num = round(num * 100) / 100;
//printf("���������� �����������: %f\n������������� �����������: %f\n", app_num - num, (app_num - num) / num);
    return 0;
}

//printf("������� �\n");
//float a, b, c, d = 0.824, e = 7.28;
//printf("������� ��������� � ����������� �����: ");
//scanf("%f %f", &a, &b);
//printf("������� ����������� ���������: ");
//scanf("%f", &c);
//float error1 = fabs((a / b) - d);
//float error2 = fabs(sqrt(c) - e);
//float percent_error1 = (error1 / (a / b)) * 100;
//float percent_error2 = (error2 / sqrt(c)) * 100;
//printf("���������� ���������� ����������� ������� ��������� ����� %f (� ��������� %f)\n", error1, percent_error1);
//printf("���������� ���������� ����������� ������� ��������� ����� %f (� ��������� %f)\n", error2, percent_error2);
//if (error1 < error2)
//    printf("������ �������, ��� ������ ��������� ������\n");
//else if (error1 > error2)
//printf("������ �������, ��� ������ ��������� ������\n");
