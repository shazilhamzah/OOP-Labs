//#include<iostream>
//using namespace std;
//
//class Matrix
//{
//public:
//	Matrix() {
//		rows = 0;
//		columns = 0;
//	}
//	Matrix(int a, int b) {
//		rows = a;
//		columns = b;
//		matrix = new int* [a];
//		for (int i = 0; i < a; i++)
//		{
//			*(matrix + i) = new int[b];
//			for (int j = 0; j < b; j++)
//			{
//				matrix[i][j] = i * j;
//			}
//		}
//	}
//	Matrix& operator*(const Matrix& obj) {
//		Matrix temp1;
//		if (this->columns != obj.rows)
//		{
//			return temp1;
//		}
//		int r = this->rows;
//		int c = obj.columns;
//		Matrix temp2(r, c);
//
//		int i, j, k;
//
//		for (i = 0; i < this->rows; ++i) {
//			for (j = 0; j < obj.columns; ++j) {
//				for (k = 0; k < this->columns; ++k) {
//					temp2.matrix[i][j] += this->matrix[i][k] * obj.matrix[k][j];
//				}
//			}
//		}
//		
//		for (i = 0; i < this->rows; ++i) {
//			for (j = 0; j < obj.columns; ++j) {
//				cout<<temp2.matrix[i][j]<<" ";
//			}
//			cout << endl;
//		}
//
//		return temp2;
//	}
//
//private:
//	int rows;
//	int columns;
//	int** matrix;
//};
//
//
//int main() {
//	Matrix matrix1(2, 3);
//	Matrix matrix2(3, 4);
//	Matrix matrix3 = matrix1 * matrix2;
//	return 0;
//}