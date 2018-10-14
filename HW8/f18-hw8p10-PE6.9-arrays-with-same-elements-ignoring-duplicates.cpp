// This program checks whether two arrays have same elements in some order, ignoring duplicates.

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

bool is_value_in_array(int a[], int sz_a, int b)
{
// a is an array and sz_a is the number of elements in a; check if there is any element in a[] that has value b

int i;

for(i= 0; i < sz_a; i++)
{
   if(a[i] == b)
   {
	return 1;
   }
}
return 0;
}

bool same_set(int a[], int a_size, int b[], int b_size)
{
int i;

for(i = 0; i < b_size; i++)
{
    if(is_value_in_array(a, a_size, b[i])==0)
    {
	return 0;
    }
}

for(i = 0; i < a_size; i++)
{
    if(is_value_in_array(b, b_size, a[i])==0)
    {
	return 0;
    }
}
return 1;
}


int main() 
{
int a[]= {1, 2, 3, 4, 5, 6, 7};
int b[]= {5, 1, 2, 3, 4, 6, 5, 7};
int a_size= 7;
int b_size= 8;
print_array(a, a_size);
print_array(b, b_size);
if(same_set(a, a_size, b, b_size))
{
   cout << "These two arrays have same elements in some order, ignoring duplicates." << endl;
}
else
{
   cout << "These two arrays do not have the same elements, even after ignoring order and duplicates." << endl;
}
}

