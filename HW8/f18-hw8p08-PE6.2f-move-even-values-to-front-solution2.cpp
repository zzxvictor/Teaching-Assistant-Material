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


void remove_element(int a[], int& sz_a, int loc_to_remove)
{
   int i;
   for(i = loc_to_remove; i < sz_a; i++)
   {
	a[i] = a[i+1];
   }
   sz_a--;
}

void insert_element(int a[], int& sz_a, int value_to_insert, int loc_to_insert)
{
   int i;
   for(i = sz_a; i > loc_to_insert; i--)
   {
	a[i] = a[i-1];
   }
   a[loc_to_insert] = value_to_insert;
   sz_a++;
}

void move_even_values_to_top(int a[], int sz_a)
{
// a is the original array and sz_a is the number of elements in a
int num_evens = 0; // number of even elements already moved to top of array
int i;
int temp;

cout << "Moving even-values to the top of the array (keeping all other ordering unchnaged) ..." << endl << endl;


for(i= 0; i < sz_a; i++)
{
   if(a[i]%2 == 0)
   {
	temp = a[i];
	remove_element(a, sz_a, i);
	insert_element(a, sz_a, temp, num_evens);
	num_evens++;
   } 
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
