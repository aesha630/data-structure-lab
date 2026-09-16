#include <iostream>
using namespace std;

int main()
{
    int book[10];
    int n = 0;
    int choice;
    int searchID;

    do
    {
        cout << "\n\n====== SMART LIBRARY ======";
        cout << "\n1. Add Book";
        cout << "\n2. Display Books";
        cout << "\n3. Search Book";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                if (n >= 10)
                {
                    cout << "\nLibrary is full! Cannot add more books.";
                }
                else
                {
                    cout << "\nEnter Book ID: ";
                    cin >> book[n];

                    n++;

                    cout << "Book Added Successfully!";
                }
                break;

            case 2:
                if (n == 0)
                {
                    cout << "\nNo books in the library.";
                }
                else
                {
                    cout << "\n\nBooks in Library:\n";

                    for (int i = 0; i < n; i++)
                    {
                        cout << "Book " << i + 1
                             << " - ID: " << book[i] << endl;
                    }
                }
                break;

            case 3:
                if (n == 0)
                {
                    cout << "\nNo books available to search.";
                }
                else
                {
                    cout << "\nEnter Book ID to search: ";
                    cin >> searchID;

                    bool found = false;

                    for (int i = 0; i < n; i++)
                    {
                        if (book[i] == searchID)
                        {
                            found = true;
                            break;
                        }
                    }

                    if (found)
                    {
                        cout << "Book Found!";
                    }
                    else
                    {
                        cout << "Book Not Found!";
                    }
                }
                break;

            case 4:
                cout << "\nThank you for using Smart Library!";
                break;

            default:
                cout << "\nInvalid Choice! Please try again.";
        }

    } while (choice != 4);

    return 0;
}

