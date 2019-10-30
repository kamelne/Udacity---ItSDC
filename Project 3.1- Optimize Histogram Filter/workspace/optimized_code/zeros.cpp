#include "headers/zeros.h"

using namespace std;

vector < vector <float> > zeros(int height, int width) {
	int i, j;
  
	// OPTIMIZATION: Reserve space in memory for vectors
	static vector < vector <float> >  newGrid( height,vector<float>(width,0.0));

  	// OPTIMIZATION: nested for loop not needed
    // because every row in the matrix is exactly the same

	return newGrid;
    
}