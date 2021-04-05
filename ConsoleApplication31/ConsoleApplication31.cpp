#include<stdio.h>

void fn(int num){

int i;
int k;
int count = 0;

	for (i = 2; i < num; i++) {
		for (k = 2; k <= i; k++) {
			if (i % k == 0) {
				if (i / k == 1) {
						printf("%d", i);	
						count++;
						if (count % 10 == 0) {
							printf("\n");
						}
				}
				else {
					break;
				}
			}
		}
	}
}

int main() {
	int num = 0;
	printf("1~N사이의 소수를 구합니다. N은?");
	scanf_s("%d+", &num);
	fn(num);
}
						
					
	