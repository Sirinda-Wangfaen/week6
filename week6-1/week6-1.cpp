#include<stdio.h>

int main() {
	double width, length, height, volume;
	printf("Enter width : ");
	scanf_s("%lf", &width);
	printf("Enter length : ");
	scanf_s("%lf", &length);
	printf("Enter height : ");
	scanf_s("%lf", &height);
	if (width > 0 && length > 0 && height > 0) {
		volume = width * length * height;
		printf("Volume : %.2lf", volume);
	}
	else {
		printf("Error");
	}

	return 0;
}