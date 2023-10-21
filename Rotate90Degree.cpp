void reverse(int a[3][3], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n/2;j++){
            swap(a[i][j],a[i][n-j-1]);
        }
    }
}

void transpose(int a[3][3], int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<i;j++){
            swap(a[i][j],a[j][i]);
        }
    }
}

void rotate_90(int a[3][3],int m, int n){

    transpose(a,3,3);
    reverse(a,3,3);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
