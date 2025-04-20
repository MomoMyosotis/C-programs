#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "implement.h"


void REGISTER_NStudent(){
	system ("clear");
	printf ("\nREGISTER_NStudent() currently running...\n");
	// register a new student
	// can all be done automatically or manually
	// matricola, nome, code_laurea can't be NULL for each student

	printf ("\nREGISTER_NStudent() terminating...\n");
}


void SEARCH_S() {
	system ("clear");
	printf ("\nSEARCH_S() currently running...\n");
	// search for a (or all) students
	// can search either by name or matricola for quick and precise search (can also just show 'em all)
	// can search by course or major to see the list of students and then filter again by name or matricola to find it
	// if no match is found return an error msg to user
	// if student not found it can be used to add a new student by calling Register_NStudent()


	printf ("\nSEARCH_S() terminating...\n");
}

void S_LIST(){
	system ("clear");
	printf ("\nS_LIST() currently running...\n");
	// view list of students
	// call the function SEARCH_S() to show all the matricolas
	// to be viewed like "matricola - nome\n"
	// order the results by matricola lowest from highest

	printf ("\nS_LIST() terminating...\n");
}

void RM_S(){
	system ("clear");
	printf ("\nRM_S() currently running...\n");
	// remove student
	// call the SEARCH_S() to find it
	// show student's data, ask for confirmation then removes it
	// return a message to see if removal was successfull or not

	printf ("\nRM_S() terminating...\n");
}

void CHANGE_S_DATA(){
	system ("clear");
	printf ("\nCHANGE_S_DATA() currently running...\n");
	// change the data of a student
	// call the SEARCH_S() to find it first
	// can change everything but one operation at the time
	// each change need to be confirmed - it shows the old and the new value before asking for confirmation
	// after each change asks the user if it's all or not
	// can change multiple data of multiple students
	// example: change name of student a, code_laurea of student a, then to student b change one of its courses
	// can be used to remove a student by calling RM_S()

	printf ("\nCHANGE_S_DATA() terminating...\n");
}


void Course_Score(){
	system ("clear");
	printf ("\nCourse_Score() currently running...\n");
	// view the results of the exam of a certain course
	// call FIND_C() to find the course then shows the results like "score - matricola\n"

	printf ("\nCourse_Score() terminating...\n");
}

void AVG_S(){
	system ("clear");
	printf ("\nAVG_S() currently running...\n");
	// see who got the hightest AVG score
	// call SEARCH_S()
	// to find all the students, all the students of a major, all the students of a course or just a set of students (selected by calling SEARCH_S())
	// takes for each student the AVG_SCORE and matricola
	// order the data from highest AVG_SCORE to lowest and shows them as "1. AVG_SCORE - matricola\n"

	printf ("\nAVG_S() terminating...\n");
}


