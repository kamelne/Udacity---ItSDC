#include "headers/normalize.h"
#include "headers/zeros.h"
using namespace std;

// OPTIMIZATION: Pass variable by reference
vector< vector<float> > normalize(vector< vector <float> > &grid) {

  	// OPTIMIZATION: Avoid declaring and defining 				// intermediate variables that are not needed.
	float total;
	int i;
	int j;
  	static int height = grid.size();
  	static int width = grid[0].size();
  
	for (i = 0; i < height; i++) {
		for (j=0; j< width; j++) {
			total += grid[i][j];
		}
	}

	static vector< vector<float> > newGrid = zeros(height,width);
	
	for (i = 0; i < height; i++) {
		for (j=0; j< width; j++) {
			newGrid[i][j] = grid[i][j] / total;
		}
	}

	return newGrid;
}
