#include <stdio.h>
#include <locale.h>

void task117() {
	double pounds = 15;
	double kilograms = pounds * 0.4059;

	printf("%f фунтов = %f килограмм", pounds, kilograms);
}

void task118() {
	double kilometers = 1;
	double versts = kilometers / 1.0668;

	printf("%f километров = %f верст", kilometers, versts);
}

void task119() {
	double width = 15;
	double height = 10;
	double area = width * height;
	
	printf("Площадь прямоугольника со сторонами %f и %f = %f", width, height, area);
}

void task1110() {
	double height = 5;
	double footingLength = 4;
	double area = height * footingLength / 2;

	printf("Площадь равнобедренного треугольника с высотой %f и основанием %f = %f", height, footingLength, area);
}

void task1111() {
	double footing1 = 10;
	double footing2 = 5;
	double height = 6;
	double area = (footing1 + footing2) / 2 * height;

	printf("Площадь трапеции с основаниями %.3f и %.3f и высотой %.3f = %.3f", footing1, footing2, height, area);
}

void task1112() {
	int copybookAmount = 2;
	int coverAmount = 2;
	int penAmount = 5;
	double copybookCost = 10;
	double coverCost = 5;
	double penCost = 3.5;
	double result = copybookCost * copybookAmount + coverCost * coverAmount + penCost * penAmount;

	printf("Стоимость %d тетрадей, %d обложек и %d карандашей = %.2f", copybookAmount, coverAmount, penAmount, result);
}

void task1113() {
	int tomatoAmount = 5;
	int cucumberAmount = 4;
	int dillAmount = 2;
	double tomatoCost = 5;
	double cucumberCost = 4;
	double dillCost = 1.75;
	double result = tomatoCost * tomatoAmount + cucumberCost * cucumberAmount + dillCost * dillAmount;

	printf("Стоимость %d помидор, %d огурцов и %d пучков укропа = %.2f", tomatoAmount, cucumberAmount, dillAmount, result);
}

int main() {
	setlocale(LC_ALL, "Rus");

	//task1113();

	//task111
	double x = -1.5;

	//task112
	int summa = 0;

	//task113
	int n = 1;
	n++;

	//task114
	int counter = 0;
	counter -= 2;

	//task115
	int x1 = 2;
	int x2 = 5;
	double result = (x1 + x2) / 2;

	//task116
	int X = 0;
	int dx = 15;
	X += dx;
}