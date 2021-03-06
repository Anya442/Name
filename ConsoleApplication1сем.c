#include <stdio.h>
#include <math.h>

int op(long long n);//объявление функции

int main() {
	long long n;
	printf("enter binary:");
	scanf_s("%lld", &n); //считывает вводимое пользователем число и записывает значение в переменную n
	printf("decimal result:%d \n", op(n)); //выводит значение функции op
	return 0;
}

int op(long long n) { //функция обрабатывающая введенное число в функции main
	int dec = 0, i = 0, rem;
	while (n != 0) {
		rem = n % 10;
		n /= 10; //n присваивается значение n/10
		dec += rem * pow(2, i); //dec присваивается значение dec + остаток деления * 2 в степени i
		++i; //i сначала равно 0, при втором проходе 1 и т.д.
	}
	return dec;//функция выводит число в десятичной форме и это значение затем выводит printf в функции main
}