#include <iostream>
using namespace std;

class Printer{
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
protected:
    Printer(string model, string manufacturer, int availableCount){
        this->model=model;
        this->manufacturer = manufacturer;
        this->availableCount = availableCount;
        printedCount = 0;
    }
    bool print(int pages){
        if(availableCount<pages){
            cout << "사용 가능한 용지가 없습니다." << endl;
            return false;
        }
        else{
            printedCount += pages;
            availableCount -= pages;
            return true;
        }
    }
public:
    string get_model() { return model; }
    string get_manuf() { return manufacturer; }
    int get_avlCount() { return availableCount; }
};

class InkPrinter:public Printer{
    int availableInk;
public:
    InkPrinter(string model, string manufacturer, int availableCount, double ink) : Printer(model, manufacturer, availableCount){
        availableInk = ink;
    }
    bool printInkJet(int pages){
        if(print(pages));
        else return false;
        if(availableInk<pages){
            cout << "잉크가 부족합니다." << endl;
            return false;
        }
        else{
            availableInk -= pages;
            return true;
        }
    }
    int get_ink(){ return availableInk; }
    void show(){
        cout << get_model() << ", " << get_manuf() << ", 남은종이 " << get_avlCount() << ", 남은 잉크 " << get_ink() << endl;
    }
};

class LaserPrinter:public Printer{
    double availableToner;
public:
    LaserPrinter(string model, string manufacturer, int availableCount, double toner) : Printer(model, manufacturer, availableCount){
        availableToner = toner;
    }
    bool printLaser(int pages){
        if (print(pages));
        else return false;
        
        if(availableToner<pages/2){
            cout << "토너가 부족합니다." << endl;
            return false;
        }
        else{
            availableToner -= pages/2;
            return true;
        }
    }
    double get_toner() { return availableToner; }
    void show(){
        cout << get_model() << ", " << get_manuf() << ", 남은종이 " << get_avlCount() << ", 남은 토너 " << get_toner() << endl;
    }
};

int main(){
    InkPrinter *inkjet = new InkPrinter("Officejet V40", "Hp", 5, 10);
    LaserPrinter *laser = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);
    cout << "현재 작동중인 2대의 프린터는 아래와 같다." << endl;
    cout << "잉크젯: " << inkjet->get_model() << ", " << inkjet->get_manuf() << ", 남은종이 " << inkjet->get_avlCount() << ", 남은 잉크 " << inkjet->get_ink() << endl;
    cout << "레이저: " << laser->get_model() << ", " << laser->get_manuf() << ", 남은종이 " << laser->get_avlCount() << ", 남은 잉크 " << laser->get_toner() << endl << endl;

    char more;
    int pages;
    int choice;
    while(true){
        cout << "프린터(1:잉크젯, 2:레이저)와 매수입력>> ";
        cin >> choice >> pages;
        if(choice==1){
            if(inkjet->printInkJet(pages))
                cout << "프린트하였습니다." << endl;
        }
        else if(choice==2){
            if(laser->printLaser(pages))
                cout << "프린트하였습니다." << endl;
        }
        else{
            cout << "잘못 선택했습니다. " << endl;
        }
        inkjet->show();
        laser->show();
        while(true){
            cout << "계속 프린트 하시겠습니까(y/n)>>";
            cin >> more;
            if(more=='n')
                return 0;
            else if(more=='y')
                break;
            else
                cout << "잘못 입력했습니다.";
        }
    }
    
}
