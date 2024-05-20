#include<iostream>
#include<cstring>
using namespace std;

/*Bài 2. Xây dựng một lớp tên person để đại diện cho một người với các yêu cầu:
Tên có độ dài tối đa 50 ký tự
Ngày, tháng, năm sinh có kiểu int
Quê quán có độ dài tối đa 100 ký tự*/
class Person {
private:
    char name [50];
    int day, month, year;
    char home [100];
public:
//Hàm nhập tên, ngày sinh, quê từ bán phím
    void enterInfo () {
        cout << "Enter your name: ";
        cin.getline(name, 50);
        cout << "Enter your date of birth: ";
        cin >> day;
        cin >> month;
        cin >> year;
        cin.ignore();
        cout << "Enter your home: ";
        cin.getline(home, 100);
    }
//Hàm hiển thị thông tin ra màn hình
    void showInfo() {
        cout <<"Name: "<< name<< endl;
        cout <<"Date of birth: "<< day <<"/"<<  month << "/" << year<< endl;
        cout << "Home: "<< home<< endl;
    }
//Hàm lấy tên, hàm gán tên
    char* getName() {
        return name;
    }
    void setName(char*name) {
        strcpy(this->name, name);
    }
//Hàm lấy quê quán, hàm gán quê quán
    char* getHome() {
        return home;
    }
    void setHome(char*home) {
        strcpy(this->home, home);
    }
//Hàm lấy ngày sinh, hàm gán ngày sinh
    void getBirth(int&d, int&m, int&y){
        d = day;
        m = month;
        y = year;
    }
    void setBirth(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
};

////Viết chương trình chính minh họa cách sử dụng
int main() {
    Person p1;
    p1.enterInfo();
    p1.showInfo();
    p1.setName(&"Dat");
    p1.setHome("HaNoi");
    p1.setBirth(1,1,2005);
    cout << "After edit: \n";
    p1.showInfo();
    return 0;
}


