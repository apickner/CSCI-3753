#include "multi-lookup.h"

void *requester(void *thread) {
	return 0;
}

void *resolver(void *thread) {
	return 0;
}

int main(int argc, char *argv[]) {
	//	https://man7.org/linux/man-pages/man2/gettimeofday.2.html
	struct timeval start_time, end_time;
	double total_time; 
	
	////////////////////////////////////////////////////////////////////////////
	
	/* START TIMED SECTION */
	gettimeofday(&start_time, NULL); // start

	struct global_variables *global;
	
	sleep(3);
	
	printf("%d\n", MAX_IP_LENGTH);
	
	gettimeofday(&end_time, NULL); // end
	/* END TIMED SECTION */
	
	////////////////////////////////////////////////////////////////////////////
	
	// https://www.geeksforgeeks.org/measure-execution-time-with-high-precision-in-c-c/
	// calculates the total time the program takes to execute 
	total_time = (end_time.tv_sec - start_time.tv_sec) * 1e6; 
	total_time = (total_time + (end_time.tv_usec - start_time.tv_usec)) * 1e-6;
		
	// argv[0] always holds the name of the program itself
	printf("%s: total time is %f seconds\n", argv[0], total_time);

	return 0;
}