void wave_matrix(int a[3][3],int m, int n){
    int starting_col = 0;
    int ending_col = n-1;
    int starting_row = 0;
    int total = m*n;
    int count = 0;

    while(count < total ){
        for(int i=starting_col;i<=ending_col;i++){
            cout<<a[starting_row][i]<<" ";
            count++;
        }
        starting_row++;
        for(int i=ending_col;i>=starting_col;i--){
            if(count<total)
            cout<<a[starting_row][i]<<" ";
            count++;
        }
        starting_row++;
    }
}
