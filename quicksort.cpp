// Quick sort
#include<iostream>
using namespace std;
void fillarray(int a[], int n);
void displayarray(int a[],int n);
void quicksort(int a[],int l,int r);
int partition(int a[],int l,int r);
void swap(int &x,int &y);


int main(){
	
	int n;
	cout<<"How many random elements you want in your array"<<endl; 
	cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"\nBefore Sorting\n";
	displayarray(a,n);
	cout<<"\n";
	quicksort(a,0,n-1);
	cout<<"\nAfter Sorting\n";
	displayarray(a,n);
	cout<<"\n";
	
return 0;
}
void fillarray(int a[],int n){
 cout<<"Fill the elements"<<endl;
 for(int i=0;i<=n-1;i++){
	cin>>a[i];
	
}
}
void displayarray(int a[],int n){
	for(int i=0;i<=n-1;i++){
		cout<<"\t "<<a[i];
	}
}
void quicksort(int a[],int l,int r)
{
	if(l<r)
	{
		int pos=partition(a,l,r);
		quicksort(a,l,pos-1);
		quicksort(a,pos+1,r);
	}
}
void swap (int &x,int &y)
{
  int temp=x; 
   x=y;  
   y=temp;  
}
int partition(int a[], int l, int r)
{ 
    int i=l-1,pivot=a[r];
	for(int j=l;j<=r-1;j++)
	{
	if(a[j]<pivot)
	swap(a[++i],a[j]);
	}
	swap(a[++i],a[r]);
	return i;
}















