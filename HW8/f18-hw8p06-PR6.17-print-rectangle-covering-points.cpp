#include<iostream>
using namespace std;
int min_value_in_array(int arr[], int sz_arr)
{
   int i;
   int min_val = arr[0];
   for(i = 1; i < sz_arr; i++){
	if(min_val > arr[i]){
	   min_val = arr[i];
	}
   }
   return(min_val);
}

int max_value_in_array(int arr[], int sz_arr)
{
   int i;
   int max_val = arr[0];
   for(i = 1; i < sz_arr; i++){
	if(max_val < arr[i]){
	   max_val = arr[i];
	}
   }
   return(max_val);
}

void print_coordinates_of_rectangle(int x_arr[], int y_arr[], int num_points)
{
    int x_min = min_value_in_array(x_arr, num_points);
    int x_max = max_value_in_array(x_arr, num_points);
    int y_min = min_value_in_array(y_arr, num_points);
    int y_max = max_value_in_array(y_arr, num_points);
    cout << "Coordinates of the corners of rectangle (clockwise): " << endl;
    cout << x_min << " " << y_min << endl;
    cout << x_min << " " << y_max << endl;
    cout << x_max << " " << y_max << endl;
    cout << x_max << " " << y_min << endl;

}

int main(){
   int x_arr[10] = {0};
   int y_arr[10] = {0};
   int num_points = 0;
   cout << "Enter number of points you wish to enter (2 to 10): ";
   cin >> num_points;
   if((num_points < 2)|| (num_points > 10)){ 
	cout << "Error: the number of points is not between 2 and 10." << endl;
	return(1);
   }
   for(int i = 0; i < num_points; i++){
	cout << "Enter x and y corrdinates for point-#-" << i << ": ";
	cin >> x_arr[i] >> y_arr[i];
   }
   print_coordinates_of_rectangle(x_arr, y_arr, num_points);
}
