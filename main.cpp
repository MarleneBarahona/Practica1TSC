#include <iostream>
#include "math_tools.h"
#include "display_tools.h"

int main(void) {
  //video 1
  //Vector zeroes_vector;
  //zeroes(zeroes_vector, 5);

  //showVector(zeroes_vector);
  //video 1 segundo coso
  //Matrix zeroes_matrix;
  //zeroes(zeroes_matrix, 5);

  //showMatrix(zeroes_matrix);
  //video 2
  /*Matrix e_matrix;
  zeroes(e_matrix,2);
  e_matrix.at(0).at(0) = 1;
  e_matrix.at(0).at(1) = 2;
  e_matrix.at(1).at(0) = 3;
  e_matrix.at(1).at(1) = 4;
  showMatrix(e_matrix);
  
  Matrix e2_matrix;
  zeroes(e2_matrix,3);
  e2_matrix.at(0).at(0) = 1;
  e2_matrix.at(0).at(1) = 2;
  e2_matrix.at(0).at(2) = 3;
  e2_matrix.at(1).at(0) = 4;
  e2_matrix.at(1).at(1) = 5;
  e2_matrix.at(1).at(2) = 6;
  e2_matrix.at(2).at(0) = 7;
  e2_matrix.at(2).at(1) = 8;
  e2_matrix.at(2).at(2) = 9;
  showMatrix(e2_matrix);*/

  //video 3
  /*Vector e_vector, copy_vector;
  zeroes(e_vector, 4);
  e_vector.at(0) = 3;
  e_vector.at(1) = 6;
  e_vector.at(2) = 9;
  e_vector.at(3) = 12;

  copyVector(e_vector, copy_vector);

  showVector(copy_vector);*/
  //Vector e_vector, answer_vector;
  //Matrix e_matrix, answer_matrix;
 //float real = 2.5; 
  /*zeroes(e_vector, 3);
  e_vector.at(0) = 2;
  e_vector.at(1) = 2;
  e_vector.at(2) = 2;*/

  /*zeroes(e_matrix, 3);
  e_matrix.at(0).at(0) = 1;
  e_matrix.at(0).at(1) = 1;
  e_matrix.at(0).at(2) = 1;
  e_matrix.at(1).at(0) = 1;
  e_matrix.at(1).at(1) = 1;
  e_matrix.at(1).at(2) = 1;
  e_matrix.at(2).at(0) = 1;
  e_matrix.at(2).at(1) = 1;
  e_matrix.at(2).at(2) = 1;

  zeroes(answer_vector,3);
  productMatrixVector(e_matrix,e_vector, answer_vector);

  showVector(answer_vector);*/
  /*productRealMatrix(real, e_matrix, answer_matrix);
  showMatrix(answer_matrix);*/
  /*Vector a, b;
  zeroes(a, 5);
  zeroes(b, 5);

  a.at(0) = 1;
  a.at(1) = 2;
  a.at(2) = 3;
  a.at(3) = 4;
  a.at(4) = 5;

  b.at(0) = 1;
  b.at(1) = 2;
  b.at(2) = 3;
  b.at(3) = 4;
  b.at(4) = 5;

  showVector(sumVector(a,b,5));*/
  //Matrix e_matrix,transpose_matrix, ex_2, inver_matrix;
  Matrix e_matrix,inver_matrix;
  zeroes(e_matrix, 3);
  e_matrix.at(0).at(0) = 2;
  e_matrix.at(0).at(1) = 2;
  e_matrix.at(0).at(2) = 3;
  e_matrix.at(1).at(0) = 4;
  e_matrix.at(1).at(1) = 5;
  e_matrix.at(1).at(2) = 6;
  e_matrix.at(2).at(0) = 7;
  e_matrix.at(2).at(1) = 8;
  e_matrix.at(2).at(2) = 9;
cout << "matrix original" << endl;
showMatrix(e_matrix);
/*transMatrix(e_matrix,transpose_matrix);
showMatrix(transpose_matrix);
cout << endl;
transMatrix(transpose_matrix, ex_2);
showMatrix(ex_2);*/
inversaMatrix(e_matrix, inver_matrix);
showMatrix(inver_matrix);
return 0;
}