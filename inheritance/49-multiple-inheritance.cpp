#include <iostream>
using namespace std;


class Printer {
protected:
    int printSpeed; 

public:
    Printer(int speed) : printSpeed(speed) {
        cout << "Printer constructor called." << endl;
    }

    void printDocument(const string &document) {
        cout << "Printing document: " << document << " at " << printSpeed << " pages per minute." << endl;
    }

    void display_printer_data() {
        cout << "Print speed: " << printSpeed << " ppm" << endl;
    }
};


class Scanner {
protected:
    int scanResolution; 

public:
    Scanner(int resolution) : scanResolution(resolution) {
        cout << "Scanner constructor called." << endl;
    }

    void scanDocument(const string &document) {
        cout << "Scanning document: " << document << " at " << scanResolution << " DPI." << endl;
    }

    void display_scanner_data() {
        cout << "Scan resolution: " << scanResolution << " DPI" << endl;
    }
};


class MultiFunctionPrinter : public Printer, public Scanner {
private:
    string model;

public:
    MultiFunctionPrinter(int speed, int resolution, const string &m)
        : Printer(speed), Scanner(resolution), model(m) {
        cout << "MultiFunctionPrinter constructor called." << endl;
    }

    void display_mfp_data() {
        display_printer_data();
        display_scanner_data();
        cout << "Model: " << model << endl;
    }
};

int main() {
    MultiFunctionPrinter mfp(30, 1200, "Canon Pixma TR4520");
    mfp.display_mfp_data();

    cout << endl;
    cout<<"|------Here it is inherited properties from both---------|"<<endl;
    mfp.printDocument("Report.pdf");
    mfp.scanDocument("Image.png");

    return 0;
}
