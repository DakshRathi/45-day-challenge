bool isPossiblesolution(vector<int> &arr,int n,int m,int mid ){

    int studentcount=1;
    int pageSum=0;
    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid) pageSum+=arr[i];
        else
        {
            studentcount++;
            if(studentcount>m || arr[i]>mid) return false;
            pageSum=arr[i];
        }
    }
   return true; 
}

int findPages(vector<int>& arr, int n, int m) {

    // Special Case      
    if(n<m) return -1;

    int start = 0, ans=-1;
    int sum = accumulate(arr.begin(),arr.end(),0);
    int end = sum;

    while(start<=end)
    {
        int mid = (end+start)/2;
        if(isPossiblesolution(arr,n,m,mid))
        {
           ans=mid;
           end=mid-1;
        }
        else start=mid+1;
    }
    return ans;
}

