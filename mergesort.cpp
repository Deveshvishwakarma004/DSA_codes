// Merge sort
#include<iostream>
using namespace std;
void fillarray(int a[], int n);
void displayarray(int a[],int n);
void mergesort(int a[],int l,int r);
void merge(int a[],int l ,int mid ,int r);

int main()
{
	int n;
	cout<<"How many random elements you want in your array"<<endl; 
	cin>>n;
	int a[n];
	fillarray(a,n);
	cout<<"\nBefore Sorting\n";
	displayarray(a,n);
	cout<<"\n";
	mergesort(a,0,n-1);
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
void mergesort(int a[], int l , int r){
	if(l<r)
	{
		int mid=(l+r)/2;
		mergesort(a,l,mid); // LHS subarray
		mergesort(a,mid+1,r); //RHS subarray
		merge(a,l,mid,r);
	}
}
void merge(int a[],int l,int mid,int r)
{
int n1=mid-l+1;
  int n2=r-mid;
  int Left[n1+1],Right[n2+1];
 
	for(int i=0;i<n1;i++) 
	  Left[i]=a[l+i];
	for(int i=0;i<n2;i++) 
	  Right[i]=a[mid+1+i];
	  Left[n1]=INT_MAX;
	  Right[n2]=INT_MAX;
	  
	int i=0,j=0;
	for(int k=l;k<=r;k++) 
	{
		if(Left[i]<Right[j]) a[k]=Left[i++];
		else a[k]=Right[j++];
	}	
}
