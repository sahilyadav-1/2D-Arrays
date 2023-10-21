bool search(int a[3][3], int target, int m, int n){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==target)
            return true;
        }
    }
    return false;
}
