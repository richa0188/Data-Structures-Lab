//(a.)Reverse the element of array 
#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements of array:" << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    int j = n - 1;

    while(i < j)
    {
        swap(a[i], a[j]);

        i++;
        j--;
    }

    cout << "Array after reverse:" << endl;

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
//b. Matrix multiplication
#include <iostream>
using namespace std;

int main()
{
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;

    cout << "Enter elements of first matrix:" << endl;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c1; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;

    cout << "Enter elements of second matrix:" << endl;

    for(int i = 0; i < r2; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication is possible only when
   

    if(c1 != r2)
    {
        cout << "Matrix multiplication is not possible.";
        return 0;
    }

    // Matrix multiplication
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            C[i][j] = 0;

            for(int k = 0; k < c1; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Result of matrix multiplication:" << endl;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }

        cout << endl;
    }

    return 0;
}
//c. Transpose matrix

#include<iostream>
using namespace std;
int main(){
     int a[10][10],transpose[10][10];
     int rows,cols;
      cout<<"Enter the rows and cols of matrix:";
      cin>>rows>>cols;
      cout<<"Enter the  elements of matrix:"<<endl;
         for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
            cin>>a[i][j];
        }
        cout<<endl;

      }
      //transpose matrix
        for(int i=0;i<rows;i++){
           for(int j=0;j<cols;j++){
            transpose[j][i]=a[i][j];
        }
      }
       cout<<"Result of transpose matrix:"<<endl;
         for(int i=0;i<cols;i++){
            for(int j=0;j<rows;j++){
                cout<<transpose[i][j]<<" ";
                
            }
            cout<<endl;
        }
    }
        
    
    


              
     


