#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define valid_length_length 11

int main(){
	// This should be written like so:
	// '\0' says "this is the end of the string.
	// char heart_beat[10] = "heartbeat";
	// or, you don't need to set the length, because the compiler will add the null terminator for you.
	size_t whatever_length_i_say;
	char* whatever_length_i_say_string = malloc(sizeof(char)*valid_length_length);
	char heart_beat[9] = "heartbeat";
	printf("Enter how long the string 'heartbeat' is: ");
	fgets(whatever_length_i_say_string, valid_length_length, stdin);
	whatever_length_i_say = atoi(whatever_length_i_say_string);
	printf("Reading value \"heartbeat\" that is %d long:\n", whatever_length_i_say);

	fwrite(heart_beat, sizeof(char), whatever_length_i_say, stdout);
	return 0;
}
