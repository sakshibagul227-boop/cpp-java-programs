#include<iostream>
using namespace std;

void LinSearch(int A[], int n)
{
    int i, found, key;
    char ch;

    do
    {
        found = 0;

        cout << "Enter roll no. to search: ";
        cin >> key;

        for(i = 0; i < n; i++)
        {
            if(A[i] == key)
            {
                found = 1;
                break;
            }
        }

        if(found == 1)
        {
            cout << "Student is present";
        }
        else
        {
            cout << "Student is absent";
        }

        cout << "\nAnother roll search? (y/n): ";
        cin >> ch;

    } while(ch == 'y');
}

int main()
{
    int n, i;
    int A[10];

    cout << "Enter total number of students: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        cout << "Enter present roll no.: ";
        cin >> A[i];
    }

    LinSearch(A, n);

    return 0;
}