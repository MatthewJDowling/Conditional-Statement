#include <iostream>



int main() {
	int varA, varB, varD;
	char varC;
	printf(" give me a short equation:");
	scanf_s("%d %c %d", &varA, &varC, 1, &varB);
	getchar();
	
	

	
	switch (varC) 
	{
	case '+':
		varD = varA + varB;
		printf("The answer to that would be : %d", varD);
		break; 
	case'-':
		varD = varA - varB;
		printf("The answer to that would be : %d", varD);
		break;
	case'*':
		varD = varA * varB;
		printf("The answer to that would be : %d", varD);
		break;
	case'/':
		varD = varA / varB;
		printf("The answer to that would be : %d", varD);
		break;
	case '%':
		varD = varA % varB;
		printf("The answer to that would be : %d", varD);
		break;
	default:
		printf("Invalid");
		break;
	}
	getchar();
	getchar();

}