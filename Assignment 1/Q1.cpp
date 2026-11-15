#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n\n----- ARRAY MENU -----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            {
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter elements:\n";
                for(int i = 0; i < n; i++)
                {
                    cin >> a[i];
                }

                cout << "Array created successfully.\n";
                break;
            }

            case 2:
            {
                cout << "Array elements are:\n";

                for(int i = 0; i < n; i++)
                {
                    cout << a[i] << " ";
                }

                break;
            }

            case 3:
            {
                int pos, value;

                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                // Right shift
                for(int i = n; i >= pos; i--)
                {
                    a[i] = a[i-1];
                }

                a[pos-1] = value;
                n++;

                cout << "Element inserted successfully.\n";
                break;
            }

            case 4:
            {
                int pos;

                cout << "Enter position to delete: ";
                cin >> pos;

                // Left shift
                for(int i = pos-1; i < n-1; i++)
                {
                    a[i] = a[i+1];
                }

                n--;

                cout << "Element deleted successfully.\n";
                break;
            }

            case 5:
            {
                int key;
                bool found = false;

                cout << "Enter element to search: ";
                cin >> key;

                for(int i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        cout << "Element found at position "
                             << i + 1 << endl;

                        found = true;
                        break;
                    }
                }

                if(!found)
                {
                    cout << "Element not found.\n";
                }

                break;
            }

            case 6:
                cout << "Exiting program...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while(choice != 6);

    return 0;
}