#include<iostream>
using namespace std;

class MaxTree
{
void minBH(int *array, int i, int data){
   int leftChild, parent,rightChild;
   parent= array[i]; 
   leftChild = 2 * i;
   rightChild=leftChild+1;
   while (leftChild<= data) {
      if (leftChild < data && array[rightChild] > array[leftChild])
         leftChild = rightChild;
      if (parent > array[leftChild])
         break;
       else if (parent <= array[leftChild]) {
         array[leftChild/2] = array[leftChild];
         leftChild = 2 * leftChild;
      }
      else break;
   }
     array[leftChild/2] = parent;
   
   
   return;
}
public:
    void creation(int *array, int numberofElements) { //root node creation with i/2 index 
   int Parent;
   for(Parent = numberofElements/2; Parent >= 1; Parent--) {
      minBH(array,Parent,numberofElements);
   }
}
  
};





int main(){
MaxTree obj1;
int numberOfElements;
int i = 1 ;
int array[100];
cout<<" number of elements ? = ";
cin>>numberOfElements;
for ( i ; i<= numberOfElements; i++)
{
    cout<<"enter element # "<<(i)<< " = "; 
    cin>>array[i];
    
}
obj1.creation(array, numberOfElements);
   cout<<"Min Heap\n";
   for (i = 1; i <= numberOfElements; i++) {
      cout<<array[i]<<endl;
   }



}











