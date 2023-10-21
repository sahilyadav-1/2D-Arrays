void row_sum(int arr[4][2], int m, int n){
    int maxi = INT_MIN;

    for(int i=0;i<m;i++){
        int sum = 0;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<" ";
        maxi=max(maxi,sum);
    }
    cout<<endl;
    cout<<maxi<<endl;
}
