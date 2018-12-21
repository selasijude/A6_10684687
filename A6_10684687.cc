#include <iostream>

using namespace std;

int Bsearch(int arr[] ,int num, int first, int last)
{
    int midd;
    if(first > last)
    {
        cout<<"number not found "<<endl;
        return -1;
    }
    else midd =(first + last)/2;


  if(arr[midd] == num){

   cout <<"The Number "<<num<<" is found at " << midd << " index \n";
   return -1;

  } else if (num > arr[midd]) {

   Bsearch( arr, num, midd+1, last);

  } else if (num < arr[midd]) {

   Bsearch (arr, num, first , midd-1);
  }
 }







int main()
{
    int arr[]={7,8,11,13,14,16,19,24,32};

    int num = 11;

    int first = 0;
    int last = 8;

    Bsearch (arr, num, first, last);


    return 0;
}
