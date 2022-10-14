// WAP for count sort
#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
void countsort(int a[],int n, int digit);
void swap(int &x, int &y);   //pass by refernce
int findmax(int a[], int n);
void radixsort(int a[], int n);
int main()
{
	int n;
	cout<<"Enter the size of array : "<<endl;
	cin>>n;
	int a[n];
	cout<<"Enter the array elements :"<<endl;
	fillarray(a,n); //function calling 
	cout<<"The unsorted array is :"<<endl;
	displayarray(a,n);	
	radixsort(a,n);

	
}
void fillarray(int a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
void displayarray(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<" \t"<<a[i];
	}
}
void swap(int &x,int &y){
	int t=x;
	x=y;
	y=t;
}
int findmax(int a[], int n){
	int max=a[0]; 
    for(int i=1; i<=n-1; i++)
   {
  if(a[i]>=max){
  	max=a[i];
  } 
  	
   }
   return max;
   
}
void countsort(int a[],int n ,int digit){
int count[10]={0}; 
	int output[n]; 
		
	for(int i=0; i<=n-1; i++) 
	 count[(a[i]/digit)%10] ++; 
	for(int i=1; i<=9; i++)  
	count[i]= count[i] + count[i-1];  
			
	for(int i=n-1; i>=0; --i)    
	 output[--count[(a[i]/digit)%10]] = a[i];
    
	cout<<"\nAfter sorting at "<<digit<<" place\n";
	displayarray(output,n); 
	
	for(int i=0; i<=n-1; i++)
	 a[i]=output[i];
}
void radixsort(int a[],int n)
{
	int max=findmax(a,n);//func calling
	int digit=1;
	while(max>0)
	{
	countsort(a,n,digit);
	max=max/10;
	digit=digit*10;	
	}
}
	                 

	
	


