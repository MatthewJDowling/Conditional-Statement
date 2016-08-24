#include <iostream>

int main()
{
	// hotdog
	int varA, varB;
	printf("Gimme two numbers bro:");
	scanf_s("%d %d", &varA, &varB);
	getchar();

	if (varA > varB) {
		printf("%d is the bigger number", varA);
	}
	if (varA < varB) {
		printf("%d is the bigger number", varB);
	}
	else {
		printf("Theyre the same dumbo :/");
	}
	getchar();



}