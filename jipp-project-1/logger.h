#ifndef LOGGER_H
#define LOGGER_H 

#include <stdio.h>

/// <summary>
/// Verifies whether passed pointer is null, reports an error and prepares program to exit
/// </summary>
/// <param name="ptr">Pointer to verify</param>
/// <returns>Returns 0 if pointer is not null, non-zero value otherwise</returns>
int check_pointer(void *ptr);

int log_message();

int log_info();

int log_warning();

int log_error();
#endif 
