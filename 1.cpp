#include<iostream>
#include<math.h>

using namespace std;

/*Bài 1: Xây dựng một lớp tên Point để đại diện cho một điểm trong không gian 2D với các yêu cầu:
Hoành độ và tung độ là các số thực float*/
class Point {
private :
    float x, y;
public :
//Hàm thành viên để nhập hoành độ, tung độ từ bàn phím
    void enterPoint() {
        cout << "Nhap hoanh do: x = ";
        cin >> x;
        cout << "Nhap tung do: y = ";
        cin >> y;
    }
//Hàm thành viên để hiển thị hoành độ, tung độ ra màn hình
    void showPoint() {
        cout << "Diem vua nhap la: (" << x <<", "<< y <<")";
    }
//Hàm thành viên lấy hoành độ
    float get_x()  { return x; }
//Hàm thành viên gán hoành độ
    void setX(float newX) {
        x = newX;
    }
//Hàm thành viên lấy tung độ
    float gety()  { return y; }
//Hàm thành viên gán tung độ
    void setY(float newY) {
        y = newY;
    }
//Hàm thành viên đồng thời lấy hoành độ và tung độ
    void getXY(float&hd, float&td) {
        hd = x;
        td = y;
    }
//Hàm thành viên đồng thời gán hoành độ và tung độ
    void setX_Y(float newX, float newY) {
        x = newX;
        y = newY;
    }
//Hàm thành viên tính khoảng cách giữa hai điểm
    float distance(Point p) {
        float dx = x - p.x;
        float dy = y - p.y;
        return sqrt(dx*dx + dy*dy);
    }
//Viết chương trình chính minh họa cách sử dụng
};

int main() {
    Point p1;
    p1.enterPoint();
    p1.showPoint();
    cout << endl;
    Point p2;
    p2.enterPoint();
    p2.showPoint();
    float d = p1.distance(p2);
    cout << endl << "Khoang cach giua 2 diem la: "<< d <<endl;
    p1.setX(3);
    p1.setY(4);
    p1.showPoint();
    cout << endl;
    p1.setX_Y(5, 6);
    p1.showPoint();
    return 0;
}