#include "string_type.h"

String create_string(void) {
	String str;

	str.ptr = (char*)malloc(1 * sizeof(char));

	if (str.ptr == NULL) {
		fprintf(stderr, "Failed to allocated memory!");
		exit(1);
	}

	str.len = 1;
	memcpy(str.ptr, "", 1);

	return str;
}

void delete_string(String str) {
	if (str.ptr != NULL)
		free(str.ptr);
	str.len = 0;
}

void print_string(String s) {
	for (int i = 0; i < s.len; i++) {
		putc(s.ptr[i], stdout);
	}

	putc('\n', stdout);
}

String create_from_static(const char* str) {
	String s;
	size_t size = strlen(str);

	s.ptr = (char*)malloc(size * sizeof(char));

	if (s.ptr == NULL) {
		fprintf(stderr, "Failed to allocated memory!");
		exit(1);
	}

	s.len = size;

	memcpy(s.ptr, str, size);

	return s;

}

void resize(String* s, const int new_len) {
	s->ptr = (char*)realloc(s->ptr, new_len);

	if (s->ptr == NULL) {
		fprintf(stderr, "String resizing failed!");
		exit(1);
	}

	s->len = new_len;
}

String concat(String str1, String str2) {

	// check string pointers are not null
	if (str1.ptr == NULL) {
		str1 = create_string();
	}
	if (str2.ptr == NULL) {
		str2 = create_string();
	}
	// end check

	String s = create_string();
	char* tmp;

	resize(&s, str1.len + str2.len);
	tmp = s.ptr;

	memcpy(tmp, str1.ptr, str1.len);
	memcpy(tmp+str1.len, str2.ptr, str2.len);

	return s;	
}
