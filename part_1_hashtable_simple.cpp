/*
Assignment 7 Hashtable
Mico Santiago

We are creating a hashtable, simple and dumb. Simply we take a string -> hash code -> index into
For this part 1 of the assignment, we are just overriding any similar hash code in the index.
in the next part of the assingmnet we will use a linkend list to resolve collisions.

How it works: I assign all the value of the hash table to 0. Traverse the array. If NUM is non-negative then
check if hash[NUM][0] is 1 or not. If hash[NUM][0] is 1 then the number is present else not present. 

*/

#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
#define MAX_MEMORY 500

/* Initialize array to zero */
bool hash_obj[MAX_MEMORY + 1][2];

/* Searches if a specific number is in the array or not */
bool search(int num){
    if (num >= 0) {
        if (hash_obj[num][0] == 1)
            return true;
        else
            return false;
    }
}

void insert(int array[], int key){
    for(int i = 0; i < key; i++) {
        if (array[i] >=0)
            hash_obj[array[i]][0] = 1;
        else
            hash_obj[abs(array[i])][1]= 1;
    }
}

int main()
{
    int array[] = { 1, 1, 3, 4, 5, 2};
    int key = sizeof(array)/sizeof(array[0]);
    insert(array, key);
    int num = 1;
    if (search(num) == true) 
	cout << "The number is in the table"; 
	else
	cout << "The number isn't in the table";

	return 0; 
}