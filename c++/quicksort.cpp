/**
 * NOTE: For the Quicksort method I have referred: https://www.geeksforgeeks.org/cpp-program-for-quicksort/
 **/
#include <iostream>

using namespace std;

class Book
{
private:
    int bookID;
    string bookName;
    string ISBN;

public:
    Book() {}

    ~Book() {}

    int GetBookID()
    {
        return this->bookID;
    }

    string GetBookName()
    {
        return this->bookName;
    }

    string GetISBN()
    {
        return this->ISBN;
    }

    void SetBookID(int book_ID)
    {
        this->bookID = book_ID;
    }

    void SetBookName(string book_Name)
    {
        this->bookName = book_Name;
    }

    void SetBookISBN(string isbn)
    {
        this->ISBN = isbn;
    }

    void toString()
    {
        cout << "Book ID: " << this->bookID << " Book Name: " << this->bookName << " ISBN: " << this->ISBN << endl;
    }
};

void swap(int *el1, int *el2)
{
    int temp = *el1;
    *el1 = *el2;
    *el2 = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size, Book book_List[])
{
    int i;
    for (i = 0; i < size; i++)
    {

        for (int j = 0; j < size; j++)
        {
            if (book_List[j].GetBookID() == arr[i])
            {
                book_List[j].toString();
            }
        }
    }
}

int main()
{

    Book b1 = Book();
    b1.SetBookID(0);
    b1.SetBookISBN("SN0109934/D023");
    b1.SetBookName("After 1");

    Book b2 = Book();
    b2.SetBookID(1);
    b2.SetBookISBN("SN0109934/D024");
    b2.SetBookName("After 2");

    Book b3 = Book();
    b3.SetBookID(2);
    b3.SetBookISBN("SN0109934/D025");
    b3.SetBookName("After 3");

    Book b4 = Book();
    b4.SetBookID(3);
    b4.SetBookISBN("SN0109934/D026");
    b4.SetBookName("After 4");

    Book b5 = Book();
    b5.SetBookID(4);
    b5.SetBookISBN("SN0109934/D027");
    b5.SetBookName("After 5");

    Book bookList[] = {b1, b2, b3, b4, b5};

    int arr[] = {b4.GetBookID(), b2.GetBookID(), b1.GetBookID(), b5.GetBookID(), b3.GetBookID()};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Orginal Book List: \n";
    printArray(arr, n, bookList);

    quickSort(arr, 0, n - 1);
    cout << "Sorted Book List: \n";
    printArray(arr, n, bookList);
    return 0;
}
