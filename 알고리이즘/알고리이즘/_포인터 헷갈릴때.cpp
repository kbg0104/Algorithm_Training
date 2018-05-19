#include <stdio.h>
int main() {
	int a = 5;
	int *ap = &a;
	printf("a = %d	&a = %p\n", a, &a);
	printf("ap = %p	&ap = %p *ap = %d\n", ap, &ap, *ap);
}