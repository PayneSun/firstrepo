/*
 * prog_01_06.cpp
 * 2018/2/2
 */

#include <cstdio>

int main() {
	int n;

	scanf("%d", &n);
	printf("%d%d%d\n", n % 10, n / 10 % 10, n / 100);

	return 0;
}