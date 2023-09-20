#include <iostream>
#include <vector>
#include <stdlib.h>
using namespace std;
void displayArray ( vector<vector <int> > a, int row, int col)
{
    for ( int i = 0 ; i < row ; i++ )
    {
        for ( int j = 0 ; j < col ; j++ )
            cout << a[i][j] << " ";
        cout << endl;
    }
}
int findMaxElement (vector < vector<int> >a, int rows, int cols)
{
    int max = INT_MIN;
    for ( int i = 0 ; i < rows ; i++ )
    {
        for ( int j = 0 ; j < cols ; j++)
        {
            if(a[i][j] > max)
                max = a[i][j];
        }
    }
    return max;
}
int main()
{
    int row; 
    cout << "Enter number of rows : ";
    cin >> row;
    int column;
    cout << "Enter number of columns : ";
    cin >> column;
    vector < vector<int> > arr(row, vector<int> (column));
    cout << "Enter array : " << endl;
    for(int i = 0 ; i < row ; i++)
    {
        for(int j = 0 ; j < column ; j++)
        {
            cout << "Enter the element at row " << i << " and column " << j << " : ";
            cin >> arr[i][j];
        }
    }
    cout << "2D array is : " << endl;
    displayArray(arr, row, column);
    cout << "Maximum of all the elements in the 2D array is : " << findMaxElement(arr, row, column) << endl;
    return 0;
}