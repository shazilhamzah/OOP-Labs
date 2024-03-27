#include<iostream>
#include<string>
using namespace std;


// EXERCISE 1

int stringLength(char* str) {
	int i = 0, length = 0;
	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}
	return length;
}

void input_exercise1(char* str)
{
	cin.getline(str, 100);
	int l = stringLength(str);
	cout << endl << endl << "Length of string is: " << l << endl << endl;
}



// EXERCISE 2


char* extractWord(const char* str, int start, int end) {
    int wordLength = end - start;
    char* word = new char[wordLength + 1];
    for (int i = start, j = 0; i < end; i++, j++) {
        word[j] = str[i]; 
    }
    word[wordLength] = '\0';
    return word;
}

int totalWords(const char* str, char delimiter) {
    int count = 1; 
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter) {
            count++;
        }
    }
    return count;
}

char** tokenizeString(char* str, char delimiter) {
    int words = totalWords(str, delimiter);
    char** dictionary = new char* [words];
    int wordIndex = 0, start = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter) {
            int wordLength = i - start;
            dictionary[wordIndex] = extractWord(str, start, i);
            //cout<<extractWord(str, start, i);
            start = i + 1;
            wordIndex++;
        }
    }
    // Extract the last word
    dictionary[wordIndex] = extractWord(str, start, stringLength(str));

    return dictionary;
}

void print2Darray(char* str, char delimeter, char** dictonary)
{
    for (int i = totalWords(str, delimeter) - 1; i >= 0; i--)
    {
        for (int j = 0; dictonary[i][j] != '\0'; j++) {
            cout << *(*(dictonary + i) + j);
        }
        cout << endl;
    }
}

// EXERCISE 3
int** shallowCopy2DArray(int** arr, int rows, int cols) {
    int** copyArr = new int* [rows];
    for (int i = 0; i < rows; i++) {
            copyArr[i] = new int[cols];
        
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            copyArr[i][j] = arr[i][j];
        }
        
    }
    return copyArr;
}

int** deepCopy2DArray(int** arr, int rows, int cols) {
    int** copyArr = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        copyArr[i] = new int[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            copyArr[i][j] = arr[i][j];
        }
    }
    return copyArr;
}

void initialize(int**& arr, int row, int col, int withWhat,int key) {
    if (key==0)
    {
        cout << endl << endl;
        cout << "Initial 2D array value: " << endl;
    }
    if (key==1)
    {
        cout << endl << endl;
        cout << "Final 2D array value: " << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++) {
            *(*(arr + i) + j) = withWhat;
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
}

void printDeepCopy(int** arr, int row, int cols,int key) {
    if (key == 0)
    {
        cout << endl << endl;
        cout << "Initial deep 2D array value: " << endl;
    }
    if (key == 1)
    {
        cout << endl << endl;
        cout << "Final deep 2D array value: " << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void printShallowCopy(int** arr, int row, int cols,int key) {
    if (key == 0)
    {
        cout << endl << endl;
        cout << "Initial shallow 2D array value: " << endl;
    }
    if (key == 1)
    {
        cout << endl << endl;
        cout << "Final shallow 2D array value: " << endl;
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < cols; j++) {
            cout << *(*(arr + i) + j) << " ";
        }
        cout << endl;
    }
}


int main() {
	/*cout << "Enter the word/sentence: ";
	char* str = new char[100];
	input_exercise1(str);


	char delimeter;
    cout << "Enter delimiter: ";
	cin>>delimeter;
	char** dictonary = tokenizeString(str,delimeter);
    print2Darray(str, delimeter, dictonary);*/


    int rows = 3, cols = 3;
    int** array = new int*[rows];
    for (int i = 0; i < rows; i++)
    {
        *(array + i) = new int[cols];
    }
    int** shallowCopy = shallowCopy2DArray(array, rows, cols);
    int** deepCopy = deepCopy2DArray(array, rows, cols);
    initialize(array, rows, cols, 5,0);
    printDeepCopy(deepCopy, rows, cols,0);
    printShallowCopy(shallowCopy, rows, cols,0);
    initialize(array, rows, cols, 12, 1);
    printDeepCopy(deepCopy, rows, cols, 1);
    printShallowCopy(shallowCopy, rows, cols, 1);
    

    //for/* (int i = 0; i < totalWords(str,delimeter); i++)
    //{
    //    delete[]dictonary[i];
    //}
    //dictonary = 0;
    //delete[]str;
    //str = nullptr;*/
}