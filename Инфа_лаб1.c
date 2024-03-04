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

    puts("Введите числитель и знаменатель дроби");
    scanf("%f %f", &n1, &n2);
    puts("Введите приблизительное значение");
    scanf("%f", &pr1);
    puts("Введите подкоренное выражение");
    scanf("%f", &n3);
    puts("Введите приблизительное значение");
    scanf("%f", &pr2);

    float x1 = n1 / n2;
    float x2 = sqrt(n3);

    float pred1 = fabs(x1 - pr1);
    float pred2 = fabs(x2 - pr2);

    float prc1 = fabs(pred1 / pr1);
    float prc2 = fabs(pred2 / pr2);

    if (prc1 > prc2) {
        printf("Второе выражение более точное: sqrt(%f) = %.3f\n", n3, pr2);
        return 0;
    }
    else if (prc2 > prc1) {
        printf("Первое выражение более точное: %f/%f = %.3f\n", n1, n2, pr1);
        return 0;
    }
    else {
        printf("Предельные абсолютные погрешности равны\n");
        return 0;
    }
}

float second() {
    //printf("Задание б\n");
//float num, error;
//printf("Введите число: ");
//scanf("%f", &num);
//printf("Введите относительную погрешность: ");
//scanf("%f", &error);
//float rounded_num = round(num * 100) / 100;
//float abs_error = error * num;
//printf("Исходное число: %f\nОкруглённое число: %f\nАбсолютная погрешность: %f\n", num, rounded_num, abs_error);
    return 0;
}

float third() {
    //printf("Задание в\n");
//float num, app_num;
//printf("Введите число: ");
//scanf("%f", &num);
//app_num = round(num * 100) / 100;
//printf("Абсолютная погрешность: %f\nОтносительная погрешность: %f\n", app_num - num, (app_num - num) / num);
    return 0;
}

//printf("Задание а\n");
//float a, b, c, d = 0.824, e = 7.28;
//printf("Введите числитель и знаменатель дроби: ");
//scanf("%f %f", &a, &b);
//printf("Введите подкоренное выражение: ");
//scanf("%f", &c);
//float error1 = fabs((a / b) - d);
//float error2 = fabs(sqrt(c) - e);
//float percent_error1 = (error1 / (a / b)) * 100;
//float percent_error2 = (error2 / sqrt(c)) * 100;
//printf("Предельная абсолютная погрешность первого выражения равна %f (в процентах %f)\n", error1, percent_error1);
//printf("Предельная абсолютная погрешность второго выражения равна %f (в процентах %f)\n", error2, percent_error2);
//if (error1 < error2)
//    printf("Отсюда следует, что первое равенство точнее\n");
//else if (error1 > error2)
//printf("Отсюда следует, что второе равенство точнее\n");
