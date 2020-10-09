//
// Created by kalee on 06/10/2020.
//
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

struct Document;


//not segregrated interface
//struct IMachine{
//    virtual void print(Document &doc) = 0;
//    virtual void scan(Document &doc) = 0;
//    virtual void fax(Document &doc) = 0;
//};


//segregated interfaces
struct IPrinter
{
    virtual void print(Document &doc) = 0;
};
struct IScanner
{
    virtual void scan(Document &doc) = 0;
};
struct IFax
{
    virtual void fax(Document &doc) = 0;
};

struct Scanner: IScanner{
    void scan(Document &doc) override {

    }
};

struct Printer: IPrinter{
    void print(Document &doc) override {

    }
};

struct IMachine: IPrinter, IScanner{};

struct Machine: IMachine{
    IPrinter &printer;
    IScanner &scanner;

    Machine(IPrinter &printer, IScanner &scanner) : printer(printer),
    scanner(scanner) {}

    void print(Document &doc) override {
        printer.print(doc);

    }

    void scan(Document &doc) override {
        scanner.scan(doc);

    }
};



int main(){

    return 0;
}