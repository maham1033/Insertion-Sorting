# include<iostream>
using namespace std; 



int main()
{
int a;
cout<<"Enter the size:";
cin>>a;
int A[a];
for(int i=0;i<a;i++)
{
	cin>>A[i];
}
for(int i=0;i<a;i++)
{
	cout<<A[i] << ",";
}

for(int i=1;i<a;i++)
{
	for(int y=0;y<i;y++)
{
	if(A[y]>A[i])
	{
		swap(A[y],A[i]);
	}
	
}
}
cout<<"\n";
for(int i=0;i<a;i++)
{
	cout<<A[i]<<",";
}
return 0;
}
