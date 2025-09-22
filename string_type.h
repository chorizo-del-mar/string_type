#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef STRING_TYPE_H
#define STRING_TYPE_H

typedef struct {
	char* ptr;
	size_t len;
}String;

String create_string(void);

void delete_string(String); 

void print_string(String);

String create_from_static(const char*);

void resize(String*, const int);

String concat(String, String);

#endif
