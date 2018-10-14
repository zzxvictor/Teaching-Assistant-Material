// This program reverses the order of elements in an array

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

void print_array(int a[], int sz_a)
{
for(int i = 0; i < sz_a; i++)
{
   cout << a[i] << endl;
}
cout << endl;
}

void swap(int& a, int& b)
{
int c;
c = a;
a = b;
b = c;
}

void reverse_array_entries(int a[], int sz_a)
{
// a is the original array and sz_a is the number of elements in a

int mid_point_a;
mid_point_a = sz_a/2; 
// Please work out the details for cases when sz_a is odd vs. even
int i;

for(i= 0; i < mid_point_a; i++)
{
   swap(a[i], a[sz_a - 1 - i]);
}
}

int main() 
{
int arr[]= {1, 2, 3, 4, 5, 6, 7};
int sz_arr= 7;
print_array(arr, sz_arr);
reverse_array_entries(arr, sz_arr);
print_array(arr, sz_arr);
}
