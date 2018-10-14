// This program moves all even value to the top of an integer array, while preserving the original ordering for all odd value and preserving the original ordering for all even values

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

const int MAX_SZ=6;

void print_array(int a[], int sz_a)
{
for(int i = 0; i < sz_a; i++)
{
   cout << a[i] << endl;
}
cout << endl;
}
void move_even_values_to_top(int a[], int sz_a)
{
// a is the original array and sz_a is the number of elements in a

// int* new_a = NULL;
// new_a = new int[sz_a];
int new_a[MAX_SZ];
int loc_new_a = 0;
int i;

cout << "Moving even-values to the top of the array (keeping all other ordering unchnaged) ..." << endl << endl;


for(i= 0; i < sz_a; i++)
{
   if(a[i]%2 == 0)
   {
	new_a[loc_new_a] = a[i];
	loc_new_a++;
   } 
}
for(i= 0; i < sz_a; i++)
{
   if(a[i]%2 == 1)
   {
	new_a[loc_new_a] = a[i];
	loc_new_a++;
   } 
}
for(i= 0; i < sz_a; i++)
{
   a[i] = new_a[i];
}
}

int main() 
{
int arr[MAX_SZ]= {1, 2, 3, 4, 5, 6};
int sz_arr= 6;

cout << "Original array: " << endl;
print_array(arr, sz_arr);

move_even_values_to_top(arr, sz_arr);

cout << "Final array: " << endl;
print_array(arr, sz_arr);
}
