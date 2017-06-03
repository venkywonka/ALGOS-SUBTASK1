#include <iostream>
#include<vector>

using namespace std;

int main()
   {

  int n,i,max=0;char rep='y';
   cout<<"enter the size of stack";
   cin>>n;                                      //length of stack
   
  vector <int> arr(n);                         //declaration of a vector
  cout<<"enter the different cloth lenghts in the stack"; 
   for(i=0;i<n;i++)                            // taking input into the vector
 {
   cin>>arr[i];  
   if(arr[i]>=max)
     max=arr[i];
 }
  
 while(rep=='y')
 {
   int m;
  cout<<"enter the size of cloth you want";
  cin>>m;                                      //lenght of cloth needed by customer


  int j,k,l;int first[n],second[n];


  
 for(i=0;i<n;i++)                              // taking input into the vector
 {
   first[i]=arr[i];
   second[i]=arr[i];
 }
  int size=arr.size();
  for(j=size-1;j>=0;j--)                        //executing Mrs.shobha's method
   {
       if(first[j]>=m)
           {
             first[j]=first[j]-m;
             break;
           }  
   }

  cout<< "Mrs.Shobha's solution:  "<<endl;
  for(j=0;j<size;j++)                          //displaying Mrs.shobha's solution
   {
       cout<<first[j]<<" ";
   }
  
  
  vector <int> arr1(size);
  int x=max;int count=0;
  for(k=0;k<size;k++)
  {
      if(arr[k]>=m && arr[k]<=x)             //executing Kamal's method
      {
          x=arr[k];
          arr1[count++]=k;
          
      }
  }
  cout<<endl;
  
  second[arr1[count-1]]=second[arr1[count-1]]-m;
  
  cout<< "Kamal's solution: "<<endl;
  for(j=0;j<size;j++)                       //displaying Kamal's solution 
   {
       cout<<second[j]<<" ";
   }
   
   cout<<endl;
   
   vector <int> arr2(size);
  int count1=0;
  for(k=0;k<size;k++)
  {
      if(arr[k]>=m && arr[k]>=x)           //executing Jasmine's method
      {
          x=arr[k];
          arr2[count1++]=k;
          
      }
  }
  
  int size3=arr2.size();
  
  arr[arr2[count1-1]]=arr[arr2[count1-1]]-m;
  
  cout<< "Jasmine's solution:  "<<endl;
  for(j=0;j<size;j++)                       //displaying Jasmine's solution 
   {
       cout<<arr[j]<<" ";
   }
   
   cout<<"\ndo u want to purchase another cloth piece?(y/n)";cin>>rep;
}
return 0;
}
