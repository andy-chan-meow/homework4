#include <stdio.h>
#include <locale.h>
#include <stdint.h>
int main(){
    setlocale(LC_ALL,"");
    uint16_t m, h;
    printf("Введите значения массы и высоты: ");
    scanf("%hd %hd", &m, &h);
    printf("Е потенциальная равна %f Дж\n", (float)m * 9.81 * h);
    /*из-за оптимизации умножения компилятор может сначала умножить m * h, 
    что при больших значениях может привести к переполнению памяти*/ 
    printf("размер типа uint16_t: %llu\n",(unsigned long long)sizeof(uint16_t));
    printf("размер типа float: %llu\n",(unsigned long long)sizeof(float));
    return 0;
}