#include <iostream>
#include <vector>
using namespace std;
int main(){
   
    int r,c;
    cout<<"Enter number of rows and columns:\n";
    cin>>r>>c;

    vector<vector<int>> matrix(r, vector<int>(c));
    cout<<"Enter matrix elements:\n";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>matrix[i][j];
        }
    }
    vector<vector<int>> trans(c, vector<int>(r));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            trans[j][i]=matrix[i][j]; 
    }
    }
    cout<<"Transpose of the matrix is:\n";
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }
}

   
