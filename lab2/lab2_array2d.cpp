#include <iostream>

using namespace std;

void DeleteArray2D(int **array, int n_rows){
    for (int i(0); i < n_rows; ++i) {
        delete[] array[i];
    }
    delete [] array;
}

void ShowArray(int **array, int n_rows, int n_columns){
    for(int i=0; i<n_rows; i++, cout<<endl){
        for(int j=0; j<n_columns; j++) {
            cout << array[i][j] << '\t';
        }
    }
}

int **Array2D(int n_rows, int n_columns){
    int **arr = new int *[n_rows];
    for(int i=0; i<n_rows; i++){
        arr[i] = new int [n_columns];
    }

    int licznik=1;
    for(int i=0; i<n_rows; i++){
        for(int j=0; j<n_columns; j++) {
            arr[i][j] = licznik++;
        }
    }
    return arr;
}

int main() {
    int rows, cols;
    cout<<"Podaj liczbe wierszy: ";
    cin>>rows;
    cout<<"Podaj liczbe kolumn: ";
    cin>>cols;
    int ** arr = Array2D(rows, cols);
    ShowArray(arr, rows, cols);
    DeleteArray2D(arr, rows);

    return 0;
}