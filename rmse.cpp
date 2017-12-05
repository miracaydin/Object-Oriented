#include <iostream>
#include "math.h"
using namespace std;

// function to calculate RMSE
float f_rmse(float *x, float *y, int N) {
  float total = 0.0;
  for (int i = 0; i < N; i++) {
    total = total + pow(x[i]-y[i], 2);
  }
  return pow(total/(float)N, 0.5);
}

int main(int argc, char* argv[]) {
  // get size of the problem
  int SIZE = 0;
  cin >> SIZE;

  // create vectors
  float *x = new float[SIZE];
  float *y = new float[SIZE];
  
  // init x and y
  for (int i = 0; i < SIZE; i++) {
    cin >> x[i];
  }
  for (int i = 0; i < SIZE; i++) {
    cin >> y[i];
  } 
 
  // calculate RMSE
  float err = 0.0;
  err = f_rmse(x, y, SIZE); 

  // print RMSE value
  cout << "Calculated RMSE value is " << err << endl;

  return 0;
}
