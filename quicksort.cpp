class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        {
        int part = partition(arr,low,high);
        quickSort(arr,low,part-1);
        quickSort(arr,part+1,high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
       int pivot = arr[low];
       int i = low;
       int j = high;
       while(i<j)
       {
           while(arr[i]<=pivot && i<high)
           i++;
           while(arr[j]>pivot && j>low)
           j--;
           if(i<j)
           {
               int temp = arr[i];
               arr[i] = arr[j];
               arr[j] = temp;
           }
       }
       int pet = arr[low];
       arr[low] = arr[j];
       arr[j] = pet;
       return j;
    }
};
