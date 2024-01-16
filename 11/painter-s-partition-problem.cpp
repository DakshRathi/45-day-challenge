bool isPossiblesolution(vector<int> &arr,int k,int mid ){

    int count=1;
    int Sum=0;
    for(int i=0;i<arr.size();i++)
    {
        if(Sum+arr[i]<=mid) Sum+=arr[i];
        else
        {
            count++;
            if(count>k || arr[i]>mid) return false;
            Sum=arr[i];
        }
    }
   return true; 
}

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0, ans=-1;
    int sum = 0;
    for(int i:boards) sum += i;
    int end = sum;

    while(start<=end)
    {
        int mid = (end+start)/2;
        if(isPossiblesolution(boards,k,mid))
        {
           ans=mid;
           end=mid-1;
        }
        else start=mid+1;
    }
    return ans;
}