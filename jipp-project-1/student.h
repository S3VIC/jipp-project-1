#pragma once
#include <stdio.h>
#include "studies.h"


/// <summary>
/// Student structure representation
/// </summary>
typedef struct {
	int year;
	FieldOfStudies field;
	char* name;
} student;

/// <summary>
/// Creates an instance of student struct
/// </summary>
/// <param name="buff">Buffer containing name of the student</param>
/// <param name="year">Year of birth of student</param>
/// <param name="field"> Field of studies enum</param>
/// <returns>Pointer to student struct if success, otherwise NULL</returns>
student* create_student(char *buff, int year, FieldOfStudies field);

/// <summary>
/// Gets field of studies of particular student
/// </summary>
/// <param name="student"> Pointer to student struct</param>
/// <returns>Pointer to the string containing name of the field of studies</returns>
char* get_field_of_studies(student *student);


/// <summary>/// /// </summary>/// <param name="student"></param>/// <param name="f"></param>/// <returns></returns>
int save_to_file(student *student, FILE f);