#include <stdio.h>
#include <stdlib.h>

typedef struct index {
	char name;
	struct index *next
};