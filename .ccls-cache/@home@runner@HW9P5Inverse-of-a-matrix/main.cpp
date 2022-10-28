#include <iostream>
#include <iomanip>

using namespace std;

//////////// functions ///////////
void fillMatrix(int matrix[2][2]);
void printMatrix(int matrix[2][2]);
void InverseMatrix(int matrix[2][2]);

int main() {

  int matrix[2][2]{};

  cout <<"Please enter the numbers in the 2 by 2 matrix" << endl;
  fillMatrix(matrix);

  //cout << "The matrix you inputed is:" << endl;
  //printMatrix(matrix);

  InverseMatrix(matrix);

  return 0;  
}

/////////////////////// User Defined Functions /////////////////////////////////////


/*This function finds and outputs the inverse of the inputed matrix*/
void InverseMatrix(int matrix[2][2])
{
  
  int a = matrix[0][0];
  int b = matrix[0][1];
  int c = matrix[1][0];
  int d = matrix[1][1];

  if (((a*d) - (b*c)) == 0){
    cout << "An error has occured, the inverse of the matrice is not valid." << endl;
      return;
  }
  
  int InvMatrix[2][2]{};

  InvMatrix[0][0] = d;      //a =d
  InvMatrix[1][1] = a;      //d =a
  InvMatrix[0][1] = - b;    //b=-b
  InvMatrix[1][0] = - c;    //c=-c

  cout << "The inverse of matrix: " << endl; 
  printMatrix(matrix);
  cout << "\nIs:" << endl;
  cout << "[1 / (" << a * d << " - " << b*c << ")]    x    " << endl;
  printMatrix(InvMatrix);

  
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
      cout << "                     ";
        for(col = 0; col < 2; col++)
            cout << setw(6) << matrix[row][col] << " ";
        
        cout << endl ;    
    }

  return;
}
