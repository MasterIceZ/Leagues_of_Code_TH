#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n % 7 == 0 && n % 11){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
	return 0;
}

