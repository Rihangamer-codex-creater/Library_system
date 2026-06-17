#include <iostream>
#include <string>
using namespace std;

class Member_Detail
{
    private:
        string name;
        int age;

    public:
        void get_data()
        {
            cout << "Input Name: ";
            cin >> name;
            cout << "Input Age: ";
            cin >> age;
        }

        void display()
        {
            cout << "\nBook Holder Name: " << name;
        }
};

class Book
{
    private:
    string book[5];
    int books_issued;

    public:
    Book():books_issued(0) { }

    void issue_book()
    { 
        if (books_issued < 5)
        {
            cout << "\nInput book name: ";
            cin >> book[books_issued++];
            cout << "\nBook Issued Successfully";
        }
        else
        cout << "\nCannot issue more books";
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

    void display()
    {
        cout << "\nNo of Books issued: " << books_issued;
    }
};

class Library_Member : public Member_Detail , public Book
{
    private:
    string member_type;
    int id;

    public:
    void get_data()
    {
        Member_Detail :: get_data();
        cout << "Input Member Type: ";
        cin >> member_type;
        cout << "Input Id: ";
        cin >> id;
    }

    void display()
    {
        Member_Detail :: display();
        Book :: display();
    }

};

int main(int argc , char* argv[])
{
    Library_Member l;
    l.get_data();
    cout << "\n";
    l.display();
    return 0;
}