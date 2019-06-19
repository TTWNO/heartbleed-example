#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// The max size for an int is 2,147,483,647 (10 digits + 1 for null terminator char)
#define valid_length_length 11

// the null terminator is a character in C that says "hey, this stirng is oer" to the C language.
// if not present, it can cause issues. Like the example below.

int main(){
	// size_t is a special variable type that generally stores 32 bit ints
	// on 32 bit systems, and 64 bit ints on 64 bit systems
	// also usually the same as int (for all tense and puposed)
	int whatever_length_i_say;
	// allocate space for up to 10 (see valid_length_length) characters in this string.
	char* whatever_length_i_say_string = malloc(sizeof(char)*valid_length_length);
	// make a char array (string) that contains "heartbeat" (9 chars)
	// this will leave to room for a null terminator ('\0' / 0)
	char heart_beat[9] = "heartbeat";
	
	// ask for input from the user as to how long the string is
	printf("Enter how long the string 'heartbeat' is: ");
	fgets(whatever_length_i_say_string, valid_length_length, stdin);
	// store the string recieved from the user (e.g. "1024") as an int
	// (e.g. 1024)
	whatever_length_i_say = atoi(whatever_length_i_say_string);

	// info line
	printf("Reading value \"heartbeat\" that is %d bytes long:\n", whatever_length_i_say);

	// write the string heartbeat,
	// 		which is an array of chars
	// 		which is however long the user says it is
	//	to stdout (the terminal).
	fwrite(heart_beat, sizeof(char), whatever_length_i_say, stdout);
	// exit program with a "successful" exit
	return 0;
}
