#include "headers/initialize_beliefs.h"
#include "headers/zeros.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs( vector< vector <char> > &grid) {

	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors

	static int height = grid.size();
	static int width = grid[0].size();
	static int area = height * width;
  
	static float prob_per_cell = 1.0 / ( (float) area) ;
  
	vector< vector <float> > newGrid(height, vector<float>(width, prob_per_cell));
	

  	// OPTIMIZATION: Is there a way to get the same results 	// without nested for loops?

	return newGrid;
}