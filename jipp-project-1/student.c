#include <stdlib.h>
#include <string.h>
#include "student.h"

student* create_student(char* buff, int year, FieldOfStudies field) {
	size_t structSize = sizeof(student);
	student* st = (student*) malloc(structSize);
	if (!st) {
		return NULL;
	}
	size_t len = strlen(buff);
	size_t size = len * sizeof(char) + 1;
	//Assign values to properties
	st->year = year;
	st->field = field;
	st->name = (char*)malloc(size);
	rsize_t elemsNum = (rsize_t)(size);
	strncpy_s(st->name, elemsNum, buff, elemsNum);
	return st;
}

char* get_field_of_studies(student* student) {
	if (!student) {
		return NULL;
	}
	return field_of_studies_names[student->field];
}
