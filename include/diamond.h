#include <list>
#include <string>
#include <iostream>

namespace hum {

class IProduct {
public:
    IProduct() {};
    ~IProduct() {};

    virtual void show() = 0;
};

class Book :public IProduct {
public:
    enum BookType {
        HISTORY = 0,
        EDUCATION = 1,
        TECHNOLIGY = 2
    };

    Book() {};
    ~Book() {};
    void setBookID(std::string bookid) { book_id_ = bookid; };    
    void show() { std::cout << "book id: " << book_id_ << std::endl; };

private:
    std::string book_id_;
    BookType type_;
};

class IStore {
public:
    IStore() {};
    virtual ~IStore() {};

    virtual void open()  = 0;
    virtual void close()  = 0;
    virtual bool restock(IProduct* product) = 0;
    virtual void display() = 0;
};

class AbsStore :public IStore {
public:
    AbsStore();
    ~AbsStore();
    void open();
    void close();
protected:
    bool isopen_;
    std::list<IProduct*> goods_;
};

class BookStore: virtual public AbsStore {
public:
    BookStore();
    ~BookStore();

    void display();
    bool restock(IProduct* book);
};

};
