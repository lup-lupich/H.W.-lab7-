#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "RUS");

	int amount, rubles, kopecks;
	const char* word;
	

	printf("Введите сумму в копейках\n");
	scanf("%d", &amount);

	rubles = amount / 100;
	kopecks = amount % 100;

	switch (kopecks % 10) {

	case 1:

		switch (kopecks) {
		case 11: word = "копеек"; break;
		default: word = "копейка"; break;

		}
		break;

	case 2:
	case 3:
	case 4:

		switch (kopecks) {
		case 12: 
		case 13:
		case 14: word = "копеек"; break;
		default: word = "копейки"; break;

		}
		break;

	default: word = "копеек";

	}

	printf("Сумма: %d руб. %d %s", rubles, kopecks, word);

	return 0;
}