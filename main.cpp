//#include <cmath>
// #define _USE_MATH_DEFINES
#include <ctime>
#include <math.h>
#include <Windows.h>
//
//    SetConsoleCP(1251);
//    SetConsoleOutputCP(1251);
//

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

string myErase(string str, int a, int b) {
    for (int i = a - 1; i < b; i++) {
        str[i] = ' ';
    }
    return str;
}

int main() {


    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(0));

    string s;
    getline(cin, s);
    cout << "new: " << myErase(s, 1, 4);

    return 0;
}
/* int arr[5][5], counter = 0, count[30], n;

 for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
     for (int j = 0; j < sizeof(arr) / sizeof(*arr); j++) {
             arr[i][j] = 0 + rand() % 10;
     }
 }

 cout << ": " << endl;
 for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
     for (int j = 0; j < sizeof(arr) / sizeof(*arr); j++) {
         cout << arr[i][j] << " ";
     }
     cout << " " << endl;

 }


 cout << " " << endl;
 return 0;*/

/*
int n;


string** arr;
cout << "enter length:";
cin >> n;
cout << n;
arr = new string[n][n];
for (int i = 0; i < n; i++) {

}

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        arr[i][j] = 0 + rand() % 10;
    }
}
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << " " << endl;
}

cout << "---" << endl;
for (int i = 0; i < 3; i++) {
    sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += arr[i][j];
    }
    cout << "сумма " << i << " строки: " << sum << endl;
    if (sum == prev) {
        counter++;
    }
    prev = sum;
}
if (counter == 3) {
    cout << "это магический квадрат" << endl;
}

return 0;
}*/


/*
   short n;
cin >> n;
string s;
short l;
while (n--) {
  cin >> s;
  l = s.length();
  if (l <= 10)
      cout << s << endl;
  else
      cout << s[0] << l - 2 << s[l - 1] << endl;
}


int amount;
string* arr;
cout << "enter length:";
cin >> amount;
arr = new string[amount];
for (int i = 0; i < amount; i++) {
  cin >> arr[i];
}
for (int i = 0; i < amount; i++) {
  if (arr[i].size() > 10) {
      cout<<(arr[i][0])<< arr[i].size()-2 << arr[i][(arr[i].size() - 1)]<<endl;
  }
  else {
      cout << arr[i]<< endl;
  }
}  */

//    void prlppd(float a, float b, float c) {
//        setlocale(0, "");
//        cout << "Объем параллелепипеда: " << a * b * c << endl;
//        cout << "Площадь поверхности параллелепипеда: " << 2 * (a * b + b * c + a * c) << endl;
//    }
//    int a, b, c;
//    cout << "Введите длину, ширину и высоту параллелепипеда:" << endl;
//    cin >> a >> b >> c;
//    prlppd(a, b, c);
//    return 0;
//}
/*
class Goods {
public: float x1, x2, y1, y2, z1, z2;
  float getPerimeter(Triangle t) {
      float p = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
      return p;
  }
  float getSquakre(Triangle t) {
      float s = 0.5 * (y1 - x1) * (z2 - x2) - (z1-x1)*(y2-x2);
      return s;
  }

};*/
/*ефыл 157 class Triangle {
public: float x1, x2, y1, y2, z1, z2;
  float getPerimeter(Triangle t) {
      float p = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2) + pow((z1 - z2), 2));
      return p;
  }
  float getSquare(Triangle t) {
      float s = 0.5 * (y1 - x1) * (z2 - x2) - (z1-x1)*(y2-x2);
      return s;
  }

};  cout <<"x1 x2, y1 y2, z1 z2"<<endl;
Triangle t2;
cin >> t2.x1 >> t2.x2 >> t2.y1 >> t2.y2 >> t2.z1 >> t2.z2;
cout<<"perimeter: "<< t2.getPerimeter(t2);
cout<<"square: "<< t2.getSquare(t2);*/

/*task 156
class Child {
private: string name;
   string surname;
   int age;
public:
Child(string name, string surn, int age) {
    this->name = name;
    this->surname = surn;
    this->age = age;   }
void getData() {
    cout << "Имя: " << name << "; Фамилия: " << surname << "; Возраст: " << age;}};
Child c =  Child("namee", "sur", 12);
Child c1 = Child("namee1", "sur1", 13);
Child c2 = Child("namee2", "sur2", 14);
c.getData(); c1.getData(); c2.getData();
*/
/* class PGF {
double a[4][2], n, ax, ay, axn, ayn, axn1, axn2, ayn1, ayn2, cx, cy, i;
double r;
int nf;
public:
void Vibor(){
    cout << endl;
    cout << "Выберите фигуру: круг-1, квадрат-2, прямоугольник-3";
    cout << endl;
    cin >> nf;
};
void Vvod() {
    if (nf == 1)
    {
        cout << endl; cout << "Введите параметры круга \n";
        cout << " cx="; cin >> cx; cout << " cy="; cin >> cy; cout << " r="; cin >> r;
        cout << endl;
    }
    if (nf == 2)
    {
        cout << endl; cout << "Введите параметры квадрата "; cout << endl;
        cout << "Координаты центра:\n cx="; cin >> cx;
        cout << " cy="; cin >> cy;
        cout << "Вектор от центра до вершины:\n";
        cout << " ax="; cin >> ax; cout << " ay="; cin >> ay;
    }
    if (nf == 3)
    {
        cout << endl; cout << "Введите параметры прямоугольника"; cout << endl;
        cout << "Координаты центра:\n cx="; cin >> cx;
        cout << " cy="; cin >> cy;
        cout << "Вектор от центра до вершины:\n";
        cout << " ax="; cin >> ax; cout << " ay="; cin >> ay;
    }
};
void Perem() {
    int sx, sy;
    cout << "Введите координаты смещения фигуры ";
    cout << endl;
    cout << "Смещение по X= "; cin >> sx;
    cout << "Смещение по Y= "; cin >> sy;
    cx = cx + sx; cy = cy + sy;
    ax = ax + sx; ay = ay + sy;
};
void Izm_raz() {
    double s, Ax, Ay, Bx, By, Cx, Cy, k, d, AB, BC;
    if (nf == 1)
    {
        cout << "Коэффициент изменения радиуса круга= ";
        cout << endl;
        cin >> k;
        r = r * k;
    }
    if (nf == 2)
    {
        cout << "Коэффициент изменения расстояния до вершины квадрата= ";
        cout << endl;
        cin >> k;
        ax = ax - cx;
        ay = ay - cy;
        ax = ax * k;
        ay = ay * k;
        ax = ax + cx;
        ay = ay + cy;
    }
    if (nf == 3)
    {
        cout << "Коэффициент изменения расстояния до вершины прямоугольника= ";
        cout << endl;
        cin >> k;
        ax = ax - cx;
        ay = ay - cy;
        ax = ax * k;
        ay = ay * k;
        ax = ax + cx;
        ay = ay + cy;
    }
};
void Vivod() {
    cout << "Параметры фигуры";
    cout << endl;
    if (nf == 1)
    {
        cout << endl; cout << "cx=" << cx << " cy=" << cy << " r=" << r;
        cout << endl;
    }
    if (nf == 2)
    {
        cout << endl;
        cout << "cx=" << cx << " cy=" << cy << " ax=" << ax << " ay=" << ay;
        cout << endl; cout << endl;
    }
    if (nf == 3)
    {
        cout << endl;
        cout << "cx=" << cx << " cy=" << cy << " ax=" << ax << " ay=" << ay;
        cout << endl;
    }
};
};
PGF a;
a.Vibor();
a.Vvod();
a.Vivod();
a.Perem();
a.Vivod();
a.Izm_raz();
a.Vivod();
a.Vivod();
*/
/*
* 155
class Tiles {
public:
string marka;
float height, width, price;

void getdata(Tiles t) {
    cout << "марка: "<<t.marka <<"; Высота: "<< t.height
        <<"ж Ширина: "<<t.width<< "; Цена: "<< t.price<< endl;
}
};
Tiles t;
t.marka = "Какая то марка..";
t.height = 300;
t.width = 300;
t.price = 200;
t.getdata(t);*/
/*
* task 153
class Vector {
private:
    int x1;
      int x2;
      int x3;
public:
    Vector() {
        x1 = 0;
        x2 = 0;
        x3 = 0;
    }
      Vector(int a, int b, int c) {
         x1 = a;
          x2 = b;
          x3 = c;
      }
      Vector addition(Vector first, Vector second) {
          Vector v7{ first.getx1() + second.getx1() ,
              first.getx2() + second.getx2(),first.getx3() + second.getx3() };
          return v7;
      }
      Vector substraction(Vector first, Vector second) {
          Vector v7{ first.getx1() - second.getx1() ,
              first.getx2() - second.getx2(), first.getx3() - second.getx3() };
          return v7;
      }
      int product(Vector first, Vector second) {
          int p= first.getx1() * second.getx1()+
              first.getx2() * second.getx2() + first.getx3() * second.getx3();
          return p;
      }
      float lenght(Vector v) {
          float l = sqrt(pow(v.getx1(),2)+pow(v.getx2(), 2)+pow(v.getx3(), 2));
          return l;
      }

      float coss(Vector a, Vector b) {
         // float c = (float)(a.getx1() * b.getx1() + a.getx2() * b.getx2() + a.getx3() * b.getx3());
          float c = product(a,c);
          float d = (float)(a.lenght(a) * b.lenght(b));
          float r = c / d;
          return r;
      }
      int getx1() { return x1; }
      int getx2() { return x2; }
      int getx3() { return x3; }

      void setx1(int x1) {
          this->x1 = x1;
      }
      void setx2(int x2) {
          this->x2 = x2;}
      void setx3(int x3) {
          this->x3 = x3;
      }
};

Vector v { 2, 3, 4};
Vector v1{ 2, 2,5 };

Vector v3=v3.addition(v, v1);
cout << v3.lenght(v3) << endl;
Vector v4 = v4.substraction(v3, v1);
cout << v4.lenght(v4) << endl;
cout << v3.coss(v, v1) << endl;*/
/*
int m[5]{ 1,2,3,4,5 }, n[5]{6,7,8,9,10};
int a[sizeof(m) / sizeof(*m) + sizeof(n) / sizeof(*n)];
cout << sizeof(a) / sizeof(*a) << endl;
for (int i = 0; i < sizeof(m) / sizeof(*m); i++) {
    a[i] = m[i];
}
for (int i = sizeof(m) / sizeof(*m)-1; i < sizeof(a) / sizeof(*a); i++) {
    a[i] = n[i];
}
for (int i = 0; i < sizeof(a) / sizeof(*a); i++) {
    cout << a[i];
}
*/
/*
int** arr = new int* [m];
for (int i = 0; i < m; i++) {
    arr[i] = new int[n];
}
cout << "array: ";
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        arr[i][j] = 1 + rand() % 100;
    }
}*/
/*150
int a, b,c;
cout << "Введите стороны треугольника " << endl;
cin >> a >> b>>c;
if (a == b && b==c) {
    cout << "равносторонний" << endl;
}
else {
    cout << "нет" << endl;
}*/
/*149
int a;
cout << "Введите a и b: " << endl;
cin >> a;
if (a == 100) {
    cout << "C" << endl;
}
else {
    switch (a / 10) {
    case 1: cout << "X"; break;
    case 2: cout << "XX"; break;
    case 3: cout << "XXX"; break;
    case 4: cout << "XL"; break;
    case 5: cout << "L"; break;
    case 6: cout << "LX"; break;
    case 7: cout << "LXX"; break;
    case 8: cout << "LXXX"; break;
    case 9: cout << "XC"; break;
    } switch (a % 10) {
    case 1: cout << "I"; break;
    case 2: cout << "II"; break;
    case 3: cout << "III"; break;
    case 4: cout << "IV"; break;
    case 5: cout << "V"; break;
    case 6: cout << "VI"; break;
    case 7: cout << "VII"; break;
    case 8: cout << "VIII"; break;
    case 9: cout << "IX"; break;
    }
}*/
/*148
float a, b;
cout << "ax+b=0" << endl << "Введите a и b: " << endl;
cin >> a >> b ;
if (a!=0) {
    cout << ((-1) * b)/a << endl;
}else if (a == 0 && b != 0) {
    cout << "NO" << endl;
}else if (a == 0 && b == 0) {
    cout << "INF" << endl;
}*/


/*147
int a;
cout << "Введите число: " << endl;
cin >> a;
if (a == 1 || a%4 ==0) {
    cout << "может" << endl;
}
else {
    cout << "не может" << endl;
}*/
/*146
int a, b, c, d;
cout << "Введите координаты ладьи и вашей фигуры: " << endl;
cin >> a >> b >> c >> d;
if (a == c || b == d) {
    cout << "бьет" << endl;
}
else {
    cout << "не бьет" << endl;
}*/
/*145
int a, b,c,d;
cout << "Введите координаты ладьи и вашей фигуры: " << endl;
cin >> a >> b>> c>>d;
if (a==c || b ==d) {
    cout << "бьет" << endl;
}
else {
    cout << "не бьет" << endl;
}
*/
/*144
string a="abc", b="abcd";
if (a.size() == b.size()) {
    cout << "строки равны" << endl;
}
else {
    cout << "строки не равны" << endl;
}*/
/*143
string a,b;
cout << "Введите строки: " << endl;
cin >> a>>b;
if (a.size()> b.size()) {
cout << "первая строка длиннее" << endl;
}else if (a.size() > b.size()) {
    cout << "вторая строка длиннее" << endl;
}
else {
    cout << "строки равны" << endl;
}
*/

/*142
char a;
do {
    cin >> a;
    cout << (int)a << endl;
} while (a != '0');
*/
/*141
string a, b,c;
cout << "Введите год и место рождения и возраст смерти: " << endl ;
cin >> a >> b>>c;
cout << "Вымышленный персонаж романа родился в "<<b<<", в "<<a<<" году и умер в возрасте "<<c<<" лет";
*/
/*140
string a;
cout << "Введите строку: " << endl;
cin >> a;
cout << "Длина первой строки:" << a.size() << endl;
*/
/*139
string a;
cout << "Enter your name: " << endl;
cin >> a;
cout << "Hello, "<<a <<"!" << endl;*/
/*138
float sum = 0;
for (float i = 1; i <= 2.0; i += 0.1) {
    sum += sin(i * 3.14 / 180);
}
cout << sum ;
*/
/*137
float a;
cout << "Введите цену яблок за 100 гр : " << endl;
cin >> a;
cout << "Таблица стоимости яблок: " << endl;
for (int i = 1; i < 10; i++) {
    cout<< i<<"00 гр: " << a * i<< "тг" << endl;
}*/
/*136
void prlppd(float a, float b, float c) {
setlocale(0, "");
cout << "Объем параллелепипеда: " << a * b * c << endl;
cout << "Площадь поверхности параллелепипеда: " << 2*(a*b + b*c + a*c) << endl;
}
float a, b, c;
cout << "Введите ширину, высоту и длину параллелепипеда: " << endl;
cin >> a >> b >> c;
prlppd(a, b, c);*/
/*135
int dohod(float summa, float stavka, float srok) {
    setlocale(0, "");
    return (summa * stavka * (srok / 365)) / 100;
}
float a, b , c;
cout << "Введите сумму вклада, ставку, срок депозита: " << endl;
cin >> a >> b>>c;
cout << dohod(a, b, c) << endl;
*/
/*134
*
int sqrt2(int n) {
setlocale(0, "");
return sqrt(n);
}
int n;
cout << "Введите символ: " << endl;
cin >> n;
cout << sqrt2(n) << endl;
*/

/*133
void copy(string n) {
setlocale(0, "");
string n;
cout << n << " " << n << " " << n << endl;
}
cout << "Введите символ: " << endl;
cin >> n;
copy(n);*/
/*130
int sum=0, m,n;
//{ {2,5,2}, {3,3,3}, {4,1,4} };
cout << "size: ";
cin >> m>>n;
int **arr= new int*[m] ;
for (int i = 0; i < m; i++) {
    arr[i] = new int[n];
}
cout << "array: ";
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        arr[i][j] = 1 + rand() % 100;
    }
}
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << arr[i][j] << " ";
    }
    cout << " " << endl;
}
cout << endl;
for (int i = 0; i < m; i++) {
    for (int j = i+1; j < n; j++) {
        sum += arr[i][j];
    }
}
cout << "sum: "<<sum << " ";*/
/*129
int sum, prev=0, counter = 0;
int arr[3][3]{ {2,5,2}, {3,3,3}, {4,1,4} };
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        arr[i][j] = 0 + rand() % 10;
    }
}
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";}
    cout << " " << endl;
}

cout << "---" << endl;
for (int i = 0; i < 3; i++) {
    sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += arr[i][j];
    }
    cout << "сумма " << i << " строки: " << sum << endl;
    if (sum == prev) {
        counter++;
    }
    prev = sum;
}
if (counter==3) {
    cout << "это магический квадрат" << endl;
}*/
/*task 128
int sum, max=INT_MIN, maxIn= 0;
int arr[3][3];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        arr[i][j] = 0 + rand() % 10;
    }
}
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << " " << endl;
}
cout << "--- " << endl;
for (int i = 0; i < 3; i++) {
    sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += arr[i][j];
    }
    cout << "сумма " << i << " строки: " << sum << endl;
    if (sum > max) {
        max = sum;
        maxIn = i;
    }
}
cout << "сумма элементов максимальна в строке: " << maxIn << endl;
*/
/*task 127
int sum;
int arr[3][3];
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        arr[i][j] = 0 + rand() % 10;
    }
}
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << arr[i][j] << " ";
    }
    cout << " " << endl;
}
cout <<"--- "<<endl;
for (int i = 0; i < 3; i++) {
    sum = 0;
    for (int j = 0; j < 3; j++) {
        sum += arr[j][i];
    }
    cout << "сумма "<< i<<" столбца: " << sum << endl;
}*/
/*task 126
double sum = 0;
double arr[2][4]{ { 1,2,3,4 }, { 2,3,4,5} };
for (int i = 0; i<2; i++) {
for (int j = 0; j<4; j++) {
    sum += arr[i][j];
}
}
cout << "среднее арифмет.:" << sum / (2 * 4) << endl;
*/
/*task 126
double sum = 0;
double arr[2][4]{ { 1,2,3,4 }, { 2,3,4,5} };
for (int i = 0; i<2; i++) {
    for (int j = 0; j<4; j++) {
        sum += arr[i][j];
    }
}
cout << "среднее арифмет.:" << sum / (2 * 4) << endl;
*/
/*task 125
int num = 80, cif = 50, otvet, step = 25;
do {
    cout << "eto: " << cif <<"?" << endl;
    cin >> otvet;
    if (step == 0) { step++; }
    if (otvet == 1) { // больше
        cif += step;
        step /= 2;
    }
    else if(otvet == 0){ // меньше
        cif -= step;
        step /= 2;
    }
    if (otvet == 2) { //правильно
        cout << "угадал: " << cif << endl;
        break;
    }
} while (cif != 0);
*/
/*task 124
int max(int a, int b) {
    if (a < b) {
        return b;
    }
    else {
        return a;
    }
}
int c = max(4, 7);
cout << c << endl;
*/
/*task 123
int arr[100];
for (int i = 1; i < 100; i++) {
    arr[i] = 1 + rand() % 6;
}
for (int i = 1; i < 100; i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << "номер нарушителей:";
for (int i = 1; i < 100; i++) {
    if (arr[i]%i==0) {
    cout << i << " ";
    }
}*/
/*task 122
bool even = false;
bool otr = false;
int arr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = -20 + rand() % 40;
}
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
for (int i = 0; i < 10; i++) {
    if (arr[i]<0) {
        otr = true;
    }
    if (arr[i]%2==0) {
        even = true;
    }
} cout << " "<< endl;
if (even && otr) {
    cout << "true";
}*/

/*task 121
string lastn[5]{ "ashigaliev","maksutkyzy","tusipkyzy","nurganatkyzy","samuratkyzy"};
char n;
cout << "enter: " << endl;
cin >> n;
for (int i = 0; i<5; i++) {
  if (lastn[i].at(0) == n) {
      cout << lastn[i] << endl;
  }
}  */

/*task 120 а
int n, j;
cout << "Введите два числа" << endl;
cin >> n>>j;

if (n == j ) {
    cout << "Введите дополнительую информацию" << endl;
}
else {
    cout <<"Ответ: " << n + j - 1 << endl;
}/*
/*task 119
int max = INT_MIN, num;
do {
    cin >> num;
    if (num == 0) {
        break;
    }
    else if(num > max){
        max = num;
    }
} while (num != 0);
cout << "max: " << max << endl;
*/
/*task 118
int n;
bool b = false;
cout << "Введите кол-во шариков мороженого" << endl;
cin >> n;

if (n%5==3 || n % 5 == 0 || n % 3 == 0 || n % 3 == 2) {
    b = true;
}
if (b) {
    cout << "Можно купить ровно " << n <<" шариков" << endl;
}else{
    cout << "нельзя" << endl;
}*/
/*task 117
string n;
bool q = false;
cout << "enter: " << endl;
cin >> n;

for (int i = 0; n[i]; i++)
{
    if (static_cast<int>(n[i]) == 50)
    {
        q = true;
    }
}
if (q) {
    cout << "yes" << endl;
}
else {
    cout << "no" << endl;
}
*/
/*task 116
int ot, do1, sum = 0;
cout << "Введите диапазон" << endl;
cin >> ot >> do1;

for (int i = ot; i <= do1; i++) {
    if(i%2!= 0){
        sum += i;
    }
} cout << "sum: " << sum << endl;
*/
/*task 115
float a = 10, aOne = 10, aTwo = 0, i2 = 1, sum = 10, i3 = 0;
while (a < 20) {
    if (sum < 100) {
      sum += a;
      i3++;
    }
    a = aOne + aOne * 0.1;
    aOne = a;
    i2++;
}
    cout << "день, когда он будет пробегать больше 20км/день : " << i2 << endl;
    cout << "пробег за все дни больше 100 км в день: " << i3 << " "<<endl;
*/
/*task 114
static double arr[12]{5,5,5,5,5,5,4,3,2,3,4,3}, counter=0;
cout << "общий список: ";

for (int i = 0; i < 12; i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;

for (int i = 0; i < 12 && arr[i] ==5; i++) {
    counter++;
}
cout << "counter:"<< counter << endl;
*/
/*task 113
int a, aOne = 1, aTwo = 1, n;
cin >> n;
cout << aOne << " " << aTwo << " ";
for (int i = 3; i <= n; i++)
{
    a = aOne + aTwo;
    cout << a << " ";
    aOne = aTwo;
    aTwo = a;
}
*/
/*task 112
float degree(float a, float n) {
    int res = a;
    do {
        res = res * a;
        n--;
    } while (n > 1);
    return res;
}
float a, b;
cout << "введите число и степень:" <<endl;
cin >> a >> b;
cout << a<<"^"<<b<<":" << degree(a,b);
*/
/*task 111
static double arr[10];
int sum = 0, min=INT_MAX, minInd=0;
cout << "общий список: ";
for (int i = 0; i < 10; i++) {
    arr[i] = 0 + rand() % 20;
}
for (int i = 0; i < 10; i++) {
    cout<< arr[i]<<" ";
}
cout << " "<< endl;
for (int i = 0; i < 10; i++) {
    if (arr[i] <= min) {
        min = arr[i];
        minInd = i;
    };
}
for (int i = 2; i <6; i++) {
    sum += arr[i];
}
cout << "index of min: " << arr[minInd] << endl;
cout << "sum between 2nd & 5th elements: " << sum << endl;
*/
/*task 110
    srand(time(0));
    float sum = 0, max= INT_MIN, min= INT_MAX;
    float arr[10], arr2[10], arr3[10];
    cout << "общий список: ";
    for (int i = 0; i < 10; i++) {
        arr[i] = 10 + rand() % 20;
        arr2[i] = 10 + rand() % 20;
    }
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
     for (int i = 0; i < 10; i++) {
        arr3[i] = arr[i]+ arr2[i];
        sum += arr3[i];
        if (arr3[i]< min) {
            min = arr3[i];
        }
        if (arr3[i] > max) {
            max = arr3[i];
        }
    }
     for (int i = 0; i < 10; i++) {
         cout << arr3[i] << " ";
     }
     cout << endl;
    cout << "avr: " << sum / 10 << endl;
    cout << "min: " << min << endl;
    cout << "max: " << min << endl;
    */
/*task 109
int sum = 0, i = 0;
do {
    i += 2;
    sum += i;
} while (i < 100);
cout << "sum: " << sum;
*/
/*task 108
float volumeOfCil(float height, float r){
    return 3.14 * height * pow(r, 2);
}
float a, b;
cout << "Введите высоту и радиус цилиндра: " << endl;
cin >> a >> b;
cout << "Объем: " << volumeOfCil(a, b);
*/
/*task 107
int arr[10], sum = 0, min = INT_MAX, minInd=0;
cout << "общий список: ";
for (int i = 0; i < 10; i++) {
    arr[i] = 0 + rand() % 100;
}
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
cout << endl;
for (int i = 0; i < 10; i++) {
    if (arr[i] <= min) {
        min = arr[i];
        minInd = i;
    }
}
for (int i = 0; i < minInd; i++) {
    sum += arr[i];
}
cout << "min:" << min<<endl;
cout << "sum:" << sum;*/
/*task 106
int arr[20], sum = 0;
cout << "общий список: ";
for (int i = 0; i < 20; i++) {
    arr[i] = 100 + rand() % 100;
}
for (int i = 0; i < 20; i++) {
    cout << arr[i] << " ";
}
cout << endl;
for (int i = 0; i < 20; i++) {
    if (arr[i]%3 ==1) {
        sum += arr[i];
    }

}
    cout << "sum:"<<sum;
    */
/*task 105
float arr[10], n;
cout << "общий список: ";
bool abc = false;
for (int i = 0; i < 10; i++) {
    arr[i] = 0 + rand() % 100;
}
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
cout << endl;
cout << "введите число: ";
cin >> n;
for (int i = 0; i < 10; i++) {
    if (arr[i] == n) {
        cout << "находится";
        abc = true;
        break;
    }

}
if (abc == false) {
    cout << "не находится";
}*/
/*task 104
float avr, amount = 0, sum = 0, counter=0;
float *arr;
cout << "кол-во: ";
cin >> amount;
arr = new float[amount];
cout << "общий список: ";
for (int i = 0; i < amount; i++) {
    arr[i] = 150 + rand() % 40;
}
for (int i = 0; i < amount; i++) {
    cout << arr[i] << " ";
}
cout << endl;
for (int i = 0; i < amount; i++) {
    sum += arr[i];
}
avr = sum / amount;
for (int i = 0; i < amount; i++) {
    if (arr[i] > avr) {
        counter++;
    }
}
cout << "средний рост: " << avr << endl;
cout << "выше среднего: " << counter << endl;
*/
/*task 103
int *arr, temp, size;
cout << "size: ";
cin >> size;
arr = new int[size];
cout << "array: ";
for (int i = 0; i <size ; i++) {
    arr[i] = 1 + rand() % 100;
}
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}
cout << endl;
for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size-i-1; j++) {
        if (arr[j] > arr[j + 1]){
            temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
    }
}
for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
}*/
/*task 102
int arr[100], n, win[10];
bool z = false;
cout << "100 tickets: ";
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = 1 + rand() % 1000;
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << endl;
for (int i = 0; i < sizeof(win) / sizeof(*win); i++) {
    win[i] = arr[1 + rand() % 100];
}
cout << "Win tickets: ";
for (int i = 0; i < sizeof(win) / sizeof(*win); i++) {
    cout << win[i] << " ";
}
cout << endl;
cout << "check your ticket: ";
cin >> n;
for (int i = 0; i < sizeof(win) / sizeof(*win); i++) {
    if (n == win[i]) {
        cout << "You won!";
        z = true;
        break;
    }
}
if (z == false) {
    cout << "You lost!";
}
*/
/*task 101
int arr[10], mas[10], masOtr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = -50 + rand() % 100;
}
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << "polozh: ";

for (int i = 0; i < 10; i++) {
    if (arr[i]> 0) {
        mas[i] = arr[i];
        masOtr[i] = 0;
    }
    else {
        masOtr[i] = arr[i];
        mas[i] = 0;
    }
}
for (int i = 0; i < 10; i++) {
    if (mas[i] != 0) {
        cout << mas[i] << " ";
    }

}
cout << " " << endl;
cout << "otricc: ";
for (int i = 0; i < 10; i++) {
    if (masOtr[i] != 0) {
        cout << masOtr[i] << " ";
    }
}
*/
/*task 100
int arr[10], min, max, minIndex = 0, maxIndex = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = 1 + rand() % 20;
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i]<<" ";
}
cout << " " << endl;
min = arr[0], max = arr[0];
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] <= min) {
        min = arr[i];
        minIndex = i+1;
    }
    if (arr[i] >= max) {
        max = arr[i];
        maxIndex = i+1;
    }
}
cout << "min: " << min << "; minIndex: " << minIndex<< endl;
cout << "max: " << max << "; maxIndex: " << maxIndex << endl;
cout <<"answer: "<< maxIndex + minIndex << endl;
*/
/*task 99
int arr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = -20 + rand() % 30;
}
cout << "массив: ";
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << "0.2: ";
for (int i = 0; i < 10; i++) {
    if (arr[i] < 0) {
        arr[i] = 0;
    }
    cout << arr[i] << " ";
}
*/
/*task 98
int arr[10];
for (int i = 0; i < 10; i++) {
    arr[i] = 1 + rand() % 10;
}
cout << "массив: ";
for (int i = 0; i < 10; i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << "x2: ";
for (int i = 0; i < 10; i++) {
    arr[i] = arr[i] * 2;
    cout << arr[i] << " ";
}*/
/*task 97
int arr[10], sum = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] != 0) {
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }
    else {
        break;
    }
}
cout << sum << " " << endl;
*/
/*task 96
int arr[30], counter=0, count[30], n;

for (int i = 0; i < sizeof(count) / sizeof(*count); i++) {
    count[i] = 0 + rand() % 10;
}
cout << "количество детей: ";
for (int i = 0; i < sizeof(count) / sizeof(*count); i++) {
    cout << count[i] << " ";
}
cout << " " << endl;
for (int i = 0; i < sizeof(count) / sizeof(*count); i++) {
    if (count[i] > 3) {
        counter++;
    }
}
cout << "counter: " << counter << endl;

for (int i = 0; i < 30; i++) {
    arr[i] = i+1;
}
cout << "массив: ";
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;

cout << "переселение: ";
for (int i = 0; i < (sizeof(arr) / sizeof(*arr))/2; i++) {
    n = arr[i];
    arr[i] = arr[(sizeof(arr) / sizeof(*arr)) - 1 - i];
    arr[(sizeof(arr) / sizeof(*arr)) - 1 - i] = n;
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
*/
/*task 95
int arr[10], mult = 1, n;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = 50 + rand() % 50;
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << "enter number" << endl;
cin >> n;

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i]< n) {
        mult *= arr[i];
    }
}
cout << "sum: " << mult << endl;
*/
/* task 94
int arr[7], sum = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = 1 + rand() % 200;
}

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << " " << endl;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] % 5 == 0 && arr[i] % 8 == 0) {
        sum += arr[i];
    }
}
cout << "sum: " << sum << endl;
*/
/* task 93
int arr[10], multip = 1;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = 5 + rand() % 15;
}

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
cout << " " << endl;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] %3 ==0 && arr[i] % 9==0) {
        multip*= arr[i];
    }
}
cout << "multiplication: " << multip << endl;
*/
/* task 92
int arr[30], count = 0;

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = -40 + rand() % 80;
}

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << " " << endl;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i]<-3) {
        count++;
    }
}
cout << "count: " << count << endl;
*/
/*91
int arr[10], mas[10];
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
cin >>arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
mas[i] = arr[i];
}
for (int i = 0; i < (sizeof(arr) / sizeof(*arr)) - 1; i++) {
for (int j = i+1; j < sizeof(arr) / sizeof(*arr); j++) {
   if (arr[i] == arr[j]) {
       mas[i] = -1;
       mas[j] = -1;
   }
}
}

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
if (mas[i] > -1) {
   cout << mas[i]<< " ";
}
}
*/
/*task 90
int arr[10], sum = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    sum += arr[i];
}
cout << sum << endl;
*/
/*task 89
int arr[10],max, maxIn = 0, sum = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
max = arr[0];
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] >= max) {
        max = arr[i];
        maxIn = i;
    }
}
for (int i = 0; i < maxIn; i++) {
        if (arr[i]> 0) {
         sum += arr[i];
        }
}

cout << sum << endl;
*/
/* task 88
static double arr[10];
int sum=0, count=0, firstNegativeIndex=0, lastNegativeIndex = 0, arrSize = sizeof(arr) / sizeof(*arr);

for (int i = 0; i < arrSize; i++) {
cin >> arr[i];
}

for (int i = 0; i < arrSize; i++) {
if (arr[i] < 0) {
    count++;
    firstNegativeIndex = i;
    break;
}
}
cout << "index of first negative number: " << firstNegativeIndex << endl;

for (int i = arrSize - 1; i > firstNegativeIndex; i--) {
if (arr[i] < 0) {
    lastNegativeIndex = i;
    break;
}
lastNegativeIndex = arrSize -1;
}
cout << "index of last negative number: " << lastNegativeIndex << endl;

if (count >= 1) {
for (int i = firstNegativeIndex; i <= lastNegativeIndex; i++) {
    sum += arr[i];
}
cout << "sum between: " << sum;
}
else {
cout << "no negatives";
}
*/
/*uu
int arr[1000], n=1;

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    arr[i] = n;
    n++;
}

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i] << " ";
}
cout << endl;
cout << endl;

for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i]> 10) {
    if (arr[i] % 2 == 3) {
        cout << arr[i] << " ";
    }
}
}
*/

/*task 87
int arr[10], min, minIndex=0, sum=0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
min = arr[0];
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] <= min) {
        min = arr[i];
        minIndex =i;
    }
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (i > minIndex) {
        sum += arr[i];
    }
}
cout << sum << endl;
*/

/*86
int arr[10], min;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
min = arr[0];
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] < min) {
        min = arr[i];
    }
}
cout << min << endl;
*/
/*85
int arr[10], count = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] > 0) {
        count++;
    }
}
cout << count << endl;
*/
/*84
int arr[10], count = 0;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (arr[i] < 0) {
        count++;
    }
}
cout << count << endl;
*/

/* task 83
int arr[10], pr=1;
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    if (i%2!=0) {
        pr = pr * arr[i];
    }
}
cout << pr << " "<<endl;
*/
/*82
int arr[7];
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cin >> arr[i];
}
for (int i = 0; i < sizeof(arr) / sizeof(*arr); i++) {
    cout << arr[i]<< " ";
}
*/

/* task 81
  int num = 7;
  do {
      num = num +7;
      cout << num << " ";
  } while (num < 98);*/

/* task 80
int num=1;
do {
    num = num * 2;
    cout << num << " ";
} while (num < 512);
*/

/*task 79
 double ot, do1, shag;
 cout << "Введите диапазон от и до в цельсиях" << endl;
 cin >> ot >>  do1;

 cout << "Введите шаг" << endl;
 cin >> shag;
 for (double i = ot; i <= do1; i++) {
  cout << i <<" в фаренгейтах: " << ((i * 9) / 5) + 32 << endl;
 }*/

/* task 78
int num, avr, amount=0, sum =0;
do {
    cin >> num;
    if (num == 0) {
        break;
    }
    else {
        sum += num;
    }
    amount++;
} while (num != 0);
avr = sum / amount;
cout << "sum: " << sum << endl;
cout << "average: " << avr << endl;
*/

/* task 77
int num, min = INT_MAX;
do {
    cin >> num;
    if (num == 0) {
        break;
    }
    else if (min > num) {
        min = num;
    }
} while (num != 0);
cout <<"min"<<  min << endl;
*/

/* task 76
int n, sum = 0, num=0;
cin >> n;
while (n>0) {
    ++num;
    sum += n % 10;
    n /= 10;
}
cout << sum << " "<< num << endl;
*/
/* task 75
int i = 1;
while (i < 15){
    cout << 7*i << endl;
    i++;
}
*/
/* task 74
int a,b,c,d, sum;
for (int i = 1000; i <= 9999; i++) {
a = i / 1000;
b = i / 100 % 10;
c = i / 10%10;
d = i % 10;
sum = a + b + c+d;
   if (sum == 10) {
       cout << i << endl;
   }
}*/
/*task 73
int a, b;
cout << "Введите числa: " << endl;
cin >> a>> b;
for (int i = a; i > 0; i--) {
    if (a % i == 0 && b % i == 0) {
        cout << i;
        break;
    }
}*/
/*task 72
for (float i = 20; i >= 10; i--) {
    cout << i << endl;
}
*/
/*task 71
float total = 1;
int a;
cout << "Введите числo: " << endl;
cin >> a;
for (float i = 1; i <= a; i++) {
    total = total * i;
}
cout <<"факториал:"<< total << endl;
*/
/*task 70
for (float i = -4; i <=4; ) {
cout << "y("<<i<<"): " << 5 * pow(i, 2) - 3 * i - 10 << endl;
    i = i + 0.5;
}*/
/*task 69
float total = 0;
int a;
cout << "Введите числo: " << endl;
cin >> a;
for (float i = 1; i <= a; i++) {
  total += 1 / i;
}
cout << total << endl;*/

/*task 68
for (int i = 1; i <= 12; i++) {
    cout << 5 << "^" << i << ": " << pow(5,i) << endl;
}
*/
/*task 67
for (int i = 1; i <= 9; i++) {
cout << 9 << "*"<< i<<": " << 9 * i << endl;
}
*/
/*task 66
for (int i = 50; i <= 99; i++) {
    if (i % 2 != 0) {
        cout << i << endl;
    }
}*/
/*task 65
int n, a,b,c;
cout << "Введите числo: " << endl;
cin >> n;
a = n / 100;
b = n / 10%10;
c = n % 10;
cout << a+b+c << endl;
*/
/*task 64
int total = 0;
for (int i = 100; i <= 200; i++) {
    if (i % 17 == 0) {
       total += i;
    }
}
cout << total << endl;
*/
/*task 63
for (int i = 10; i <= 99; i++) {
    if (i % 9 == 0 && i % 30 != 0) {
        cout << i << endl;
    }
}*/
/*task 62
int a;
cout << "Введите числo: " << endl;
cin >> a;
int total = 0;
for (int i = 1; i <= a; i++) {
total += i;
}
cout << total << endl;
*/
/*task 61
for (int i = 10; i <= 30; i++) {
    if (i % 7 == 1 || i % 7 == 2) {
        cout << i << endl;
    }
}*/
/*task 60
for (int i = 100; i <= 990; i++) {
   if (i %73==0) {
    cout << i << endl;
   }
}*/
/*task 59
for (int i = 10; i <= 99; i++) {
    if (i %5==0) {
     cout << i << endl;
    }
}
*/
/*task 58
int a;
cout << "До скольки?: " << endl;
cin >> a;
for (int i = 1; i <= a; i++) {
  cout << i << "^3:" << pow(i,3) << endl;
}*/
/*task 57
for (int i = 20; i <= 50; i++) {
    if (i % 3== 0 && i % 5 != 0) {
        cout << i << endl;
    }
}*/
/*task 56
int total = 0;
for (int i = 1; i <= 50; i++) {
    if (i % 5 == 0) {
        total += i;
    }
}
cout << total << endl;
*/
/*task 55
for (int i = 35; i <= 87; i++) {
    if (i % 7 == 1 || i % 7 == 2 || i % 7 == 5) {
        cout << i << endl;
    }
}*/
/*task 54
int total = 1;
for (int i = 1; i <= 6; i++) {
    if (i % 2 == 0) {
        total =total * pow(i, 3);
    }
}
cout << total << endl;
*/
/*task 53
int total = 0;
for (int i = 7; i <= 121; i++) {
    if (i % 2 == 0) {
        total += i * i;
    }
}
cout << total << endl;
*/
/*task 52
int total = 0;
for (int i =5; i <= 33; i++) {
    if (i % 2 != 0) {
        total += i * i;
    }
}
cout << total << endl;
*/
/*task 51
int total=1;
for (int i = 1; i <= 7; i++) {
    total = total * i;
}
cout << total << endl;
*/
/*task 50
for (int i = 0; i <= 20; i++) {
    if (i % 2 == 0) {
     cout << i << "^2:" << i * i << endl;
    }
}
*/
/* task49
for (int i = 0; i <= 10; i++) {
cout<<i<<"^2:"<< i * i << endl;
}
*/
/* task 48
int a;
float price, b;
cout << "Выберите вид топлива:  \n " << "1 - бензин 92, 2 - 95, 3 - 98 " << endl;
cin >> a;
if (a == 1) {
    price = 182;
}
if (a == 2) {
    price = 194;
}if (a == 3) {
    price = 205;
}
if (a <= 3 && a >= 1) {
    cout << "Сколько литров : " << endl;
    cin >> b;
    cout << "Стоимость в тг: " << price * b << endl;
}
else {
    cout << "Введите от 1 до 3" << endl;
}

/*
* task 46
int a, b, c;
cout << "Введите числа: " << endl;
cin >> a >>  b >> c;
cout << "четные: " << endl;
if (a%2==0) {
    cout <<a<< endl;
}
if (b % 2 == 0) {
    cout << b << endl;
}  if (c % 2 == 0) {
    cout << c << endl;
}
*/

/*таск 44
float a;
cout << "Введите сумму в долларах: " << endl;
cin >> a;
cout << "в тенге будет: " << a * 489.84<< endl;
cout << "Введите сумму в евро: " << endl;
cin >> a;
cout << "в тенге будет: " << a * 549.30 << endl;
*/

/*43
float a, b, c, max;
cout << "Введите числа: " << endl;
cin >> a >> b >> c;
max = a;
if (max < b) {
    max = b;
}
if (max < c) {
    max = c;
}
cout << "макс:" << max << endl;
*/
/*task 42
float a, b, c, min;
cout << "Введите числа: " << endl;
cin >> a >> b>>c;
min = a;
if (min > b) {
    min = b;
}
if (min > c) {
    min = c;
}
    cout << "мин:" << min<< endl;
*/
/*41
int a;
cout << "Введите числo: " << endl;
cin >> a;
if (a%2 == 0) {
    cout << "четное "<< endl;
}
else {
    cout << "нечетное" << endl;
}
*/
/*task 40
float a, b;
cout << "Введите числа: " << endl;
cin >> a >> b;
if (a > b) {
    cout << a << " больше "<<b<< endl;
}
else if (a < b) {
    cout << a << " меньше " << b << endl;
}
else {
    cout << "числа равны" << endl;
}
*/
/*task 39
float a;
cout << "Введите сумму покупки : " << endl;
cin >> a;
if (a > 10000) {
    cout << "Стоимости покупки с учетом скидки: " << a - (a * 0.5) << endl;
}
else if (a > 5000) {
    cout << "Стоимости покупки с учетом скидки: " << a - (a * 0.3) << endl;
}
else {
    cout << "Скидок нет: " << endl;
}
*/
/*task 38
float a;
cout << "Введите сумму покупки : " << endl;
cin >> a;
if (a > 25000) {
    cout << "Стоимости покупки с учетом скидки: " << a- (a*0.1) << endl;
}
else {
    cout << "Скидок нет: "<< endl;
}*/

/*tsk 37
float a, b, c;
cout << "Введите значения коэффициентов: " << endl;
cin >> a >> b >> c;
if (a == 0 ) {
    cout << "Коэффициент при второй степени неизвестного равен нулю: " << endl;
}
else {
    float d = b * b - 4 * a * c;
    float x1 = (-b - sqrt(d))/(2*a);
    float x2 = (-b + sqrt(d))/(2*a);
       cout << "x1:" << x1 << " " << "x2: " << x2 << endl;
}
*/

/*task 36
float a, b, c;
cout << "Введите сумму и срок вклада в днях: " << endl;
cin >> a >> b;
if (a < 50000) {
    c = 10;
}
else {
    c = 13;
}
cout << "Профит по простой формуле: " << (a*(c/100)*(b/365))/100 << endl;
*/

/*task 34
float a, b;
cout << "Введите переменные х2 и х3: " << endl;
cin >> a >> b;
cout << "Ответ: " << -2.7 * b + 0.23 * a - 1.4;
*/
/*task 33
float a, b;
cout << "Введите переменные х2 и х: " << endl;
cin >> a >> b;
cout << "средняя арифметическая: " << (a + b)/2;
*/
/*32
float a, b, c;
cout << "Введите переменную х и dx: " << endl;
cin >> a >> b;
cout << "x: " << a+b;
*/
/*task 31
float a, b, c;
cout << "Введите высоту и радиусы полого цилиндра: " << endl;
cin >> a >> b >> c;
cout << "Объем: " << 3.14 * a * (pow(b,2) - pow(c, 2));
*/

/*task 30
float a, b, c;
cout << "Введите сопротивления трех резисторов: " << endl;
cin >> a >> b >> c;
cout << "Сопротивление цепи: " <<a+b+c;
*/

/*29
float a, b;
cout << "Введите высоту и радиус конуса" << endl;
cin >> a >> b;
cout << "Объем: " << (1/3) * 3.14 * b * b * a;
*/

/*task 22
float a;
cout << "Введите радиус" << endl;
cin >> a;
cout << "Обем шара:" << (4/3)*3.14*a*a*a << " " << "Площадь поверхности:" << 4 * 3.14 * a * a;
*/

/* task 21
float a, b, c;
cout << "Введите цены тетрадей и обложек" << endl;
cin >> a >> b;
cout << "Введите количество" << endl;
cin >> c;
cout << "Стоимость общая" << a*c + b*c;
*/
/*task 20
float a, b, c;
cout << "Введите длины сторон и угол между сторонами в радианах" << endl;
cin >> a >> b >> c;
cout << "площадь" << 0.5 * a * b * sin(c*3.14/180);
*/
/* 17
 int a, b;
 cout << "Введите время в минутах" << endl;
 cin >> a;
 b = a / 60;
 cout << "В час+мин: " << b << "час" << a-b*60 << "мин";
 */

/*
 //Task 14
float a;
cout << "Введите вес в фунтах" << endl;
cin >> a;
cout << "В кг: " <<  a*0.454;
*/

/*
 Task 15
float a;
cout << "Введите расстояние в миллях" << endl;
cin >> a;
cout << "В километрах: " <<  a*1.609 ;
*/


/*Task 14
float a, b, c;
cout << "Введите ширину, высоту и длину параллелепипеда: " << endl;
cin >> a >> b >> c;
cout << "Объем параллелепипеда: " <<  a*b*c << endl;
*/


/* TASK 19
float b, a, c, d;
cout << "Введите длину: " << endl;
cin >> a;
cout << "Введите время: " << endl;
cin >> b;
b = modf(b, &c);
if (b < 0.6){
    d = c * 60 +b*100;
    cout<< "Скорость: " << a / d << endl;
}
else {
    cout << "Секунды до 60" << endl;

*/


/* TASK 18

float a, b, c , d, e, f, ab, cb,ac,p;
cout << "Введите координаты точки А: " << endl;
cin >> a >> b;
cout << "Введите координаты точки B: "<<endl;
cin >> c >> d;
cout << "Введите координаты точки C: " << endl;
cin >> f >> e;
ab = sqrt(pow(c-a, 2)+pow(d-b, 2));
cb = sqrt(pow(f - c, 2) + pow(e-d,2));
ac = sqrt(pow(f - a, 2) + pow(e - b, 2));
p = (ab + cb + ac) / 2;
cout << "Длина отрезка AB: " << ab;
cout << "Длина отрезка BC: " << cb;
cout << "Длина отрезка AC: " << ac;
cout << "Площадь: " << sqrt(p * (p - ab) * (p - cb) * (p - ac));*/
//во время смог изучить язык с++
//мнение





// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
