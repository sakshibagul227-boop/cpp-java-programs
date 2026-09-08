#include<iostream>
using namespace std;

void BinSearch(int A[], int n)
{
    int key, low, high, mid, found;
    char ch;

    do
    {
        cout<<"Enter roll number to search: ";
        cin>>key;

        low=0;
        high=n-1;
        found=0;

        while(low<=high)
        {
            mid=(low+high)/2;

            if(A[mid]==key)
            {
                found=1;
                break;
            }
            else if(key<A[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }

        if(found==1)
            cout<<"Student is Present"<<endl;
        else
            cout<<"Student is Absent"<<endl;

        cout<<"Do you want to search another roll number? (Y/N): ";
        cin>>ch;

    }while(ch=='Y' || ch=='y');
}

int main()
{
    int A[100], n, i;

    cout<<"Enter total number of students: ";
    cin>>n;

    cout<<"Enter roll numbers in ascending order:"<<endl;

    for(i=0; i<n; i++)
    {
        cout<<"Enter roll number: ";
        cin>>A[i];
    }

    BinSearch(A,n);

    return 0;
}