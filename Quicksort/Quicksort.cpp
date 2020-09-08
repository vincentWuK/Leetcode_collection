#include <iostream>

using namespace std;

int Get_Mid(int a[], int left, int right)
{
    int pivot = a[left];
    while (left<right)
    {
        while ((left<right)&&(a[right]>=pivot))
        {
            right--;
        }
        a[left]=a[right];
        while ((left<right)&&(a[left]<=pivot))
        {
            left++;
        }
        a[right]=a[left];
    }
    a[left]=pivot;
    return left;
}

void quicksort(int a[],int left,int right)
{
     if (left<right)
     {
         int mid = Get_Mid(a, left, right);
         quicksort(a, left, mid-1);
         quicksort(a, mid+1, right);
     }
}

int main()
{
    int c[10]={3,5,2,1,5,6,8,8,9,12};
    int l=0;
    int r=9;
    quicksort(c,l,r);
    for (int i=0;i<10;i++)
    {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}