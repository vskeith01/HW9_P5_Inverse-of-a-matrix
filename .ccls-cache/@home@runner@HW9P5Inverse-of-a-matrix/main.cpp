#include <iostream>
#include <iomanip>

using namespace std;

//////////// functions ///////////
void fillMatrix(int matrix[2][2]);
void printMatrix(int matrix[2][2]);


int main() {

  int matrix[2][2]{};

  cout <<"Please enter the numbers in the 2 by 2 matrix" << endl;
  fillMatrix(matrix);

  cout << "The matrix you inputed is:" << endl;
  printMatrix(matrix);

  cout << "The inverse of that matrix is: " << endl;
  


  return 0;  
}

/*This function finds and outputs the inverse of the inputed matrix*/

void InverseMatrix(int matrix[2][2])
{
  int IntMatrix[2][2]{};

  for (int row = 0; row < 2; row++){
    for (int col = 0; col < 2; col++)
    
  }
  


  return;
}


/* This funcion fills the matrix*/

void fillMatrix(int matrix[2][2])
{
  int row, col, value;

    for (row = 0; row < 2; row++){
        for(col = 0; col < 2; col++){
          cin >> value;
          matrix[row][col] = value;
       }
      }
return;
}


// function to print the matrix in a matrix with 2 columns
void printMatrix(int matrix[2][2])
{
    int row, col;
    for (row = 0; row < 2; row++)
    {
        for(col = 0; col < 2; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl;    
    }

  return;
}
