#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

double* full_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        double t;
        printf("A[%i]=", i);
        scanf("%lf", &t);
        ptr_array[i] = t;
    }
    printf("\n");
    return ptr_array;
}
int put_elements(double* ptr_array, int n) {
    for (int i = 0; i < n; i++) {
        printf("A[%i]=%.0lf\n", i, ptr_array[i]);
    }
    return 0;
}
int calc_elements(double* ptr_array, int n) {
    int cn = 0;
    for (int i = 0; i < n; i += 2) {
        if (ptr_array[i] > 10) {
            cn++;
        }
    }
    return cn;
}

int sum_elements(double* ptr_array, int begin, int end) {
    int s = 0;
    for (; begin <= end; begin++) {
        s += ptr_array[begin];
    }
    return s;
}

int find_element(double* ptr_array, int n, double element) {

    for (int i = 0; i < n; i++) {
        if (ptr_array[i] == element) {
            return i;
        }
    }
    return -1;
}

double function(double* ptr_array, int n, int k) {
    double max = -10000;
    for (k=0; k < n; k++) {
        if ((ptr_array[k]) > max) 
        {
            max = (ptr_array[k]);
        }
    }
    printf("Max=%f\n", max);
    return 0;
}

void main() {
    setlocale(LC_ALL, "RUS");
    double array[100];
    int size;
    printf("Введите размер массива > ");
    scanf("%d", &size);
    full_elements(array, size);
    put_elements(array, size);
    /*
    printf("Количество элементов массива значение которых больше 10, находящийся на четных позициях = %i\n",calc_elements(array, size));

    int begin, end;
    printf("Введите begin = ");
    scanf("%i",&begin);
    printf("Введите end = ");
    scanf("%i",&end);
    printf("Сумма элементов = %i\n",sum_elements(array, begin, end));

    int el;
    printf("Введите элемент\n");
    scanf("%i", &el);
    printf("Номер элемента равен = %i\n",find_element(array, size, el));
    */
    int k;
    printf("Введите k\n");
    scanf("%i", &k);
    printf("Максимальный элемент перед k = %.0lf\n", function(array, size, k));
}