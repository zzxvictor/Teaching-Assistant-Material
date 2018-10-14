// This program prints all distict "words" obtained by permuting the letters in the word "ask"
// This program ASSUMES that every letter in the given word is distinct

#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>

using namespace std;

const int MAX_WRD_SZ = 5;

void print_char_arr(char* ch_arr, int ch_arr_sz)
{
for(int i = 0; i < ch_arr_sz; i++)
{
   cout << ch_arr[i];
}
cout << endl;
return;
}

void copy_char_arr(char* ch_arr, int ch_arr_sz, char* new_ch_arr)
{
for(int i = 0; i < ch_arr_sz; i++)
{
   new_ch_arr[i]= ch_arr[i];
}
return;
}

void swap(char& a, char& b)
{
char c;
c = a;
a = b;
b = c;
return;
}

void print_all_permutations(char* ch_arr, int ch_arr_sz, int permute_sz)
{
// ch_arr has the letters in the original word
// ch_arr_sz is the total number of letters in the original word
// permute_sz is the number of letters that will be permuted, starting at ch_arr[0]
// cout << "permute_sz = " << permute_sz << endl;
if(permute_sz==1){
   print_char_arr(ch_arr, ch_arr_sz);
   return;
}
else{
   char new_ch_arr[MAX_WRD_SZ]; 
   copy_char_arr(ch_arr, ch_arr_sz, new_ch_arr);
   print_all_permutations(new_ch_arr, ch_arr_sz, permute_sz - 1);
   for(int i = 0; i<permute_sz-1; i++)
   {
	copy_char_arr(ch_arr, ch_arr_sz, new_ch_arr);
	swap(new_ch_arr[i], new_ch_arr[permute_sz-1]);
	print_all_permutations(new_ch_arr, ch_arr_sz, permute_sz - 1);
   }
   return;
}
}

int main() {
char char_arr[]={'a', 's', 'k'}; // letter of word ask 
int char_arr_sz = 3; // number of letters in work ask
int permute_sz = char_arr_sz;
print_all_permutations(char_arr, char_arr_sz, permute_sz);
}


