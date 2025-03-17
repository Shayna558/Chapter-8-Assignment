
 //* Created on March 16, 2025, 7:47 PM
 

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Define the dimensions of the matrix
    const int rows = 3;
    const int cols = 4;
    
    //Declare a 3x4 matrix
    double matrix[rows][cols];
    
    //Prompt user to enter the matrix row by row
    cout << "Enter a 3 by 4 matrix row by row: " << endl;
    
    for(int i =0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }
    
    //Calculate and display the sum of each column
    for(int j = 0; j < cols; j++){
        double sum = 0; //Initialize sum for each column
        for(int i = 0; i < rows; i++){
            sum += matrix[i][j];
        }
        cout << "Sum of the elements at column " << j << "is" << sum << endl;
    }

    return 0;
}

