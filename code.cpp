#include<iostream>
using namespace std;
void arranger(int arr[],int ,int,int);
int checker(int arr[],int ,int,int);
void sortarray(int arr[],int,int);
int main()
{
    int arr[]={10,15,14,30,69,75};
    int n=6;
    sortarray(arr,0,5);
    for(int i=0;i<5;i++)
        cout<<arr[i]<<" ";
}
void sortarray(int arr[],int s,int e)
{
    if(s>=e)
        return;
    int n=checker(arr,s,e,arr[s]);
    int sw=e-n;
    swap(arr[s],arr[sw]);
    arranger(arr,s,e,sw);
    sortarray(arr,s,sw-1);
    sortarray(arr,sw+1,e);
}
int checker(int arr[],int s,int e,int target)
{
    int count=0;
    for(int i=s;i<=e;i++)
    {
        if(target<arr[s])
            count++;
    }
    return count;
}
void arranger(int arr[],int s,int e,int point)
{
  for(int k=s;k<=e;k++)
  {
      int l=s;
      while(l<point)
      {
          if(arr[l]<arr[point])
            l++;
            else
                break;
      }
      int p=e;
      while(p>point)
      {
          if(arr[p]>arr[point])
            p--;
          else
            break;
      }
      swap(arr[l],arr[p]);
  }
}










