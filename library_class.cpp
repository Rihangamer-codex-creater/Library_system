#include <iostream>
#include <string>
using namespace std;

class Library_Member
{
    private:
        string name;
        int age;
    public:
        int id;
        string member_type;
        int books_issued;
    void get_data()
    {
        cout << "Input Name: ";
        cin >> name;
        cout << "Input Age: ";
        cin >> age;
        cout << "Input ID: ";
        cin >> id;
        cout << "Input Member Type: ";
        cin >> member_type;
        cout << "Input Books Issued: ";
        cin >> books_issued;
    }

    void show_details()
    {
        cout << "\nBook Holder Name: " << name;
        cout << "\nNo of Books Issued:" << books_issued;
    }

    void issue_book()
    { 
        books_issued++; 
        cout << "\nBook Issued Successfully";
    }

    void book_back()
    {
        if (books_issued>=1)
        {
            books_issued--;
            cout << "\nBook Returned Succesfully";
        }
        else 
        cout <<"\nNo books to return";
    }
};

int main(int argc , char* argv[])
{
    Library_Member l;
    l.get_data();
    l.issue_book();
    l.issue_book();
    l.book_back();
    cout << "\n";
    l.show_details();
    return 0;
}