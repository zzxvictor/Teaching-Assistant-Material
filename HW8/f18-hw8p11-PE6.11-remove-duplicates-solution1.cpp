// This program removes duplicate copies of elements in an array // (keeps the first copy)

// This version uses while loops with special handling for case
// when a duplicate value is deleted

#include<iostream>

using namespace std;

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


void remove_duplicate_array_entries(int arr[], int& sz_arr)
{
   int i = 0; 
   int j = 0;

   i = 0;
   while(i < sz_arr -1){
	j = i + 1;
	while(j < sz_arr){
	   if(arr[i]==arr[j]){
		remove_element(arr, sz_arr, j);
	   }
	   else{
		j++; // note j not incremented when value is deleted
	   }
     }
	i++;
   }   
}

int main() 
{
int arr[]= {1, 2, 3, 2, 4, 4, 5, 6, 7, 5};
int sz_arr= 10;

cout << "The original array is:" << endl;
print_array(arr, sz_arr);

remove_duplicate_array_entries(arr, sz_arr);

cout << "The array after duplicate copies removed is:" << endl;
print_array(arr, sz_arr);
}
