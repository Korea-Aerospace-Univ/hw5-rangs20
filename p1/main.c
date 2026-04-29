#include <stdio.h>	
int main() {
	int amount;
	scanf("%d", &amount);
	int A,B,C;
	int jouge = false;
	for (A = 1; A <= amount / 900; A++) {
		for (B = 2; B <= amount / 750; B += 2) {
			for (C = 1; C <= amount / 200; C++) {
				if ((900 * A) + (B * 750) + (C * 200) == amount) {
					if (C < A || C < B)
					{
						printf("%d %d %d\n", A, B, C);
						jouge = true;
					}
				}		
			}
		}
	}
	if (!jouge) {
		printf("none");
	}
}
