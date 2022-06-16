#ifndef MULTI_LOOKUP_HEADER
#define MULTI_LOOKUP_HEADER

#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

#include "util.h"

// necessary macros
#define ARRAY_SIZE 			  20

#define MAX_INPUT_FILES 	  10

#define MAX_REQUESTER_THREADS 5
#define MAX_RESOLVER_THREADS  10

#define MAX_NAME_LENGTH 	  1025

#define MAX_IP_LENGTH 		  INET6_ADDRSTRLEN

// struct declarations




// function declarations
void *requester(void *);
void *resolver(void *);

#endif