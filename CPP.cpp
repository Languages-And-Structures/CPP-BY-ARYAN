#include<iostream>
#include<cmath>
#include<string>
#include<fstream>
#include<vector>
#include<list>
#include<map>
#include<functional>
#include<algorithm>
using namespace std;
//video16

/*void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 4, b = 5;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    swap(&a, &b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}*/

/*void swapPointer(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 4, y = 5;
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    swapPointer(x, y);
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    return 0;
}*/


/*int & swapReference(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main(){
    int x = 4, y = 5;
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    swapReference(x, y) = 745;
    cout<<"The value of a is "<<x<<" and the value of b is "<<y<<endl;
    return 0;
}*/

//video17

/*int product(int a, int b){
    // Not recommended to use below lines with functions
     static int c=0; // This executes only once
     c = c + 1; // Next time this function is run, the value of c will be retained
    return a*b;
}

int main(){
    int a, b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    cout<<"The product of a and b is "<<product(a, b)<<endl;
    return 0;
}*/

//video18

/*int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}

int main(){
    int a;
    cout<<"Enter the number "<<endl;
    cin>>a;
    cout<<"The fibonacci series of "<<a<<" is "<<fib(a)<<endl;
    return 0;
}*/
/*int volume (int l, int b, int h){
     return (l*b*h);
 }

int volume (int a){
    return (a*a*a);
}

int volume (int r, int h){
    return (3.14*r*r*h);
}

int volume (float r){
    return (4/3*3.14*r*r*r);
}

int main(){
    cout<<"The volume of cuboid of 3, 4 and 5 is "<<volume(3, 4, 5)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of sphere of radius 3 is "<<volume(3)<<endl;
    return 0;
}*/

//video21
/*class employee{
    private:
        int a, b, c;
    public:
        int d, e;
        void setData(int a1, int b1, int c1); // Declaration
        void getData(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
        }
};
void employee :: setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}

int main(){
    employee aryan;
    // aryan.a = 134; -->This will throw error as a is private
    aryan.d = 34;
    aryan.e = 89;
    aryan.setData(1,2,4);
    aryan.getData();
    return 0;
}*/

/*class footballer{
    private:
        string name;
        int noofgoals;
        int noofassists;
        int noofmatches;
        public:
        footballer(string n, int g, int a, int m){
            name = n;
            noofgoals = g;
            noofassists = a;
            noofmatches = m;
        }
        int totalgoals(){
            return noofgoals;
        }
        int totalassists(){
            return noofassists;
        }
        int totalmatches(){
            return noofmatches;
        }
};

int main(){
    footballer messi("Lionel Messi", 700, 300, 1000);
    //messi.noofgoals = 700; // This will throw error as noofgoals is private
    footballer ronaldo("Cristiano Ronaldo", 800, 400, 1100);
    cout<<messi.totalgoals()<<endl;
    cout<<ronaldo.totalgoals()<<endl;
    cout<<messi.totalassists()<<endl;
    cout<<ronaldo.totalassists()<<endl;
    cout<<messi.totalmatches()<<endl;
    cout<<ronaldo.totalmatches()<<endl;
    return 0;
}*/

/*class binary{
    string s;
    private:
        void read();
        void chk_bin();
        void ones_complement();
    public:    
        void display();
};

void binary :: read(){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}

void binary :: chk_bin(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }
}

void binary :: ones_complement(){
    for(int i=0; i<s.length(); i++){
        if(s.at(i)=='0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
}

void binary :: display(){
    read();
     chk_bin();
      ones_complement();
    cout<<"Displaying your binary number"<<endl;
    for(int i=0; i<s.length(); i++){
        cout<<s.at(i);
    }
}

int main(){
    binary b;
    //b.read();
    //b.chk_bin();
    //b.display();
    //b.ones_complement();
    b.display();
    return 0;
}*/

//video23

/*class shop{
    int itemId[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void){counter = 0;}
        void setPrice(void);
        void displayPrice(void);
};

void shop :: setPrice(void){
    cout<<"Enter the Id of your item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
    shop dukaan;
    dukaan.initCounter(); // This will initialize the counter to 0
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}*/

/*class shop{
    int itemId[100];
    int itemPrice[100];
    static int counter;// This will not be the part of object of the class
    public:
        void setPrice(void);
        void displayPrice(void);
        static void getcounter(void){
            cout<<"The value of counter is "<<counter<<endl;
        }
};

int shop :: counter = 0;

void shop :: setPrice(void){
    cout<<"Enter the Id of your item number "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item"<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop :: displayPrice(void){
    for(int i=0; i<counter; i++){
        cout<<"The price of item with Id "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main(){
   shop wallmart[3];
    for(int i=0; i<3; i++){
        wallmart[i].setPrice();
        wallmart[i].displayPrice();
    }
    /*shop dukaan;
    dukaan.setPrice();
    dukaan.getcounter();
    dukaan.setPrice();
    dukaan.getcounter();
    dukaan.setPrice();
    dukaan.getcounter();
    dukaan.displayPrice();
    return 0;
}*/

/*class complex{
    int a, b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}*/

/*class complex{
    int a,b;
    public:
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }
        friend complex sumComplex(complex o1, complex o2);
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex sumComplex(complex o1, complex o2){
    complex o3;
    o3.setData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main(){
    complex c1, c2, sum;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}*/

/*class y;
class x{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        friend void add(x, y);
};

class y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }
        friend void add(x, y);
};

void add(x o1, y o2){
    cout<<"Summing data of x and y objects gives me "<<o1.data + o2.num<<endl;
}

int main(){
    x a;
    y b;
    a.setValue(3);
    b.setValue(5);
    add(a, b);
    return 0;
}*/

/*class c2;

class c1{
    int val1;
    public:
        void indata(int a){
            val1 = a;
        }
        void display(void){
            cout<<val1<<endl;
        }
        friend void exchange(c1 &, c2 &);
};

class c2{
    int val2;
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
        friend void exchange(c1 &, c2 &);
};

void exchange(c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}

int main(){
    c1 oc1;
    c2 oc2;
    oc1.indata(34);
    oc2.indata(67);
    exchange(oc1, oc2);
    cout<<"The value of c1 after exchanging becomes ";
    oc1.display();
    cout<<"The value of c2 after exchanging becomes ";
    oc2.display();
    return 0;
}*/

/*class complex{
    int a,b;
    public:
    // Creating a constructor
    // Constructor is a special member function with the same name as of the class
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
        complex(void);
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(void){
    a = 10;
    b = 0;
}

int main(){
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}*/

/*class complex{
    int a,b;
    public:
        complex(int, int);
        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

complex :: complex(int x, int y){//Parameterized constructor
    a = x;
    b = y;
}

int main(){
    //implicit call
    complex c1(4, 6), c2(5, 7), c3(6, 8);
    //explicit call
    complex c4=complex (7, 9);
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    c4.printNumber();
    return 0;
}*/

/*class point{
    int x, y;
    friend void distance(point, point);
    public:
        point(int a, int b){
            x = a;
            y = b;
        }
        void displayPoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};
void distance(point p1, point p2){
    int x = (p2.x - p1.x);
    int y = (p2.y - p1.y);
    float dist = sqrt((x*x) + (y*y));
    cout<<"The distance between two points is "<<dist<<endl;
}

int main(){
    point p1(1, 1), p2(4, 5);
    p1.displayPoint();
    p2.displayPoint();
    distance(p1, p2);
    return 0;
}*/


/*class complex{
int a,b;
public:
 complex(void){
    a = 0;
    b = 0;
    
 }
    complex(int x, int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }
    void printNumber(){
        cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }


};   

int main(){
    complex c1(4, 6), c2(5), c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}*/

/*class simple{
    int data1;
    int data2;
    int data3;
    public:
        simple(int a, int b = 9, int c = 8){
            data1 = a;
            data2 = b;
            data3 = c;
        }
        void printData();
};

void simple :: printData(){
    cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}

int main(){
    simple s(1);
    s.printData();
    simple s2(1, 2);
    s2.printData();
    return 0;
}*/

/*class bankdeposit{
    int principal;
    int years;
    float interestRate;
    float returnValue;
    public:
        bankdeposit(){}// This is a default constructor as it takes no arguments but initializes the object with some values like 0 or NULL etc.
        bankdeposit(int p, int y, float r); // r can be a value like 0.04
        bankdeposit(int p, int y, int r); // r can be a value like 14
        void show();
};

bankdeposit :: bankdeposit(int p, int y, float r){
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue*(1+r);
    }
}

bankdeposit :: bankdeposit(int p, int y, int r){
    principal = p;
    years = y;
    interestRate = float(r)/100;
    returnValue = principal;
    for(int i=0; i<y; i++){
        returnValue = returnValue*(1+interestRate);
    }
}

void bankdeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal<<endl
        <<"Return value after "<<years<<" years is "<<returnValue<<endl;
}

int main(){
    bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout<<"Enter the value of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 = bankdeposit(p, y, r);
    bd1.show();
    cout<<"Enter the value of p, y and R"<<endl;
    cin>>p>>y>>R;
    bd2 = bankdeposit(p, y, R);
    bd2.show();
    return 0;
}*/
/*class number{
    int a;
    public:
        number(){
            a = 0;
        }
        number(int num){
            a = num;
        }
        // When no copy constructor is found, compiler supplies its own copy constructor
        number(number &obj){
            cout<<"Copy constructor called!!!"<<endl;
            a = obj.a;
        }
        void display(){
            cout<<"The number for this object is "<<a<<endl;
        }
};

int main(){
    number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();
    number z1(z);// Copy constructor invoked
    z1.display();
    x = z;// Copy constructor not called
    x.display();
    z2 = z;// Copy constructor not called
    z2.display();
    number z3 = z;// Copy constructor invoked as z3 is initialized during declaration
    z3.display();
    return 0;
}*/

/*int count=0;

class num{
    public:
        num(){
            count++;
            cout<<"This is the time when constructor is called for object number "<<count<<endl;
        }
        ~num(){
            cout<<"This is the time when my destructor is called for object number "<<count<<endl;
            count--;
        }
};

int main(){
    cout<<"We are inside our main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2, n3;
        cout<<"Exiting this block"<<endl;
    }
    cout<<"Back to main"<<endl;
    return 0;
}*/

/*class employee{
    int salary;
    public:
        int id;
        employee(){}
        employee(int empid){
            id = empid;
            salary = 34;
        }


};

class programmer : public employee{
    public:
        int languageCode = 9;
        programmer(int empid){
            cout<<"Constructor of programmer"<<endl;
            id = empid;
        }
};

int main(){
    employee aryan(1), rohan(2);
    cout<<aryan.id<<endl;
    cout<<rohan.id<<endl;
    programmer skillf(10);
    cout<<skillf.id<<endl;
    cout<<skillf.languageCode<<endl;
    return 0;
}*/

/*class base{
    int data1;
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void base :: setData(){
    data1 = 10;
    data2 = 20;
}

int base :: getData1(){
    return data1;
}

int base :: getData2(){
    return data2;
}

class derived : private base{
    int data3;
    public:
        void process();
        void display();
};

void derived :: process(){
    setData();
    data3 = data2*getData1();
}

void derived :: display(){
    cout<<"The value of data1 is "<<getData1()<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
    cout<<"The value of data3 is "<<data3<<endl;
}

int main(){
    derived der;
    // der.setData(); -->This will throw error as setData is private
    der.process();
    der.display();
    return 0;
}*/

/*class student{
    protected:
        int roll_number;
    public:
        void set_number(int a){
            roll_number = a;
        }
        void print_number(void){
            cout<<"The roll number is "<<roll_number<<endl;
        }
};

class Exam : public student{
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float m1, float m2){
            maths = m1;
            physics = m2;
        }
        void print_marks(){
            cout<<"The marks obtained in maths are "<<maths<<endl;
            cout<<"The marks obtained in physics are "<<physics<<endl;
        }
};

class Result : public Exam{
    float percentage;
    public:
        void display_result(){
            percentage = (maths + physics)/2;
            print_number();
            print_marks();
            cout<<"Your percentage is "<<percentage<<"%"<<endl;
        }
};

int main(){
    Result aryan;
    aryan.set_number(420);
    aryan.set_marks(94.0, 90.0);
    aryan.display_result();
    return 0;
}*/

/*class base1{
    protected:
        int base1int;
    public:
        void set_base1int(int a){
            base1int = a;
        }
};

class base2{
    protected:
        int base2int;
    public:
        void set_base2int(int a){
            base2int = a;
        }
};

class base3{
    protected:
        int base3int;
    public:
        void set_base3int(int a){
            base3int = a;
        }
};

class derived : public base1, public base2, public base3{
    public:
        void show(){
            cout<<"The value of base1int is "<<base1int<<endl;
            cout<<"The value of base2int is "<<base2int<<endl;
            cout<<"The value of base3int is "<<base3int<<endl;
            cout<<"The sum of base1int and base2int is "<<base1int + base2int + base3int<<endl;
        }
};

int main(){
    derived aryan;
    aryan.set_base1int(25);
    aryan.set_base2int(35);
    aryan.set_base3int(45);
    aryan.show();
    return 0;
}*/

/*class simplecalulator{
   protected:
        float a, b;
        public:
            void setdatasimple(float x, float y){
                a = x;
                b = y;
            }
            void getdatasimple(){
                cout<<"Enter the value of a and b"<<endl;
                cin>>a>>b;
            }
            void sum(){
                cout<<"The sum of a and b is "<<a+b<<endl;
            }
            void difference(){
                cout<<"The difference of a and b is "<<a-b<<endl;
            }
            void product(){
                cout<<"The product of a and b is "<<a*b<<endl;
            }
            void division(){
                cout<<"The division of a and b is "<<a/b<<endl;
            }
            




};

class scientificcalculator{
    protected:
        float p, q;
        public:
            void setdata(float x, float y){
                p = x;
                q = y;
            }
            void getdata(){
                cout<<"Enter the value of p and q"<<endl;
                cin>>p>>q;
            }
            void power(){
                cout<<"The value of a raised to the power of b is "<<pow(p, q)<<endl;
            }
            void squareroot(){
                cout<<"The square root of a is "<<sqrt(p)<<endl;
                cout<<"The square root of b is "<<sqrt(q)<<endl;
            }
            void exponential(){
                cout<<"The value of exponential of a is "<<exp(p)<<endl;
                cout<<"The value of exponential of b is "<<exp(q)<<endl;
            }
            void logarithm(){
                cout<<"The value of logarithm of a is "<<log(p)<<endl;
                cout<<"The value of logarithm of b is "<<log(q)<<endl;
            }

};

class hybridcalculator : public simplecalulator, public scientificcalculator{
    public:
        void displaysimple(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
        }
        void displayscientific(){
            cout<<"The value of p is "<<p<<endl;
            cout<<"The value of q is "<<q<<endl;
        }
};

int main(){
    hybridcalculator h;
    
    h.getdatasimple();
    h.sum();
    h.difference();
    h.product();
    h.division();
    h.displaysimple();
    
    h.getdata();
    h.power();
    h.squareroot();
    h.exponential();
    h.logarithm();
    h.displayscientific();
    return 0;
}*/

/*class a{
   void say(){
       cout<<"Hello world"<<endl;
   }

};
class b : public a{
    public:
        void say(){
            cout<<"Hello my beautiful world"<<endl;
        }
};

int main(){
    b aryan;
    aryan.say();
    return 0;
}*/
/*class base1{
    int data1;
    public:
        //base1(){};// This is a default constructor
        base1(int i){
            data1 = i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void printDataBase1(){
            cout<<"The value of data1 is "<<data1<<endl;
        }   
};

class base2{
    int data2;
    public:
        //base2(){};// This is a default constructor
        base2(int i){
            data2 = i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void printDataBase2(){
            cout<<"The value of data2 is "<<data2<<endl;
        }
};

class derived : public base1, public base2{
    int derived1, derived2;
    public:
        derived(int a, int b, int c, int d) : base1(a), base2(b){
            derived1 = c;
            derived2 = d;
            cout<<"Derived class constructor called"<<endl;
        }
        
        void printDataDerived(){
            cout<<"The value of derived1 is "<<derived1<<endl;
            cout<<"The value of derived2 is "<<derived2<<endl;
        }
};

int main(){
    derived aryan(1,2,3, 4);
    aryan.printDataBase1();
    aryan.printDataBase2();
    aryan.printDataDerived();
    return 0;
}*/

/*int main(){
    int* p = new int(69);
    cout<<"The value at address p is "<<*p<<endl;
    delete p;
    cout<<"The value at address p is "<<*p<<endl;
    return 0;
    int* x = new int[4];
    x[0] = 1;
    x[1] = 2;
    x[2] = 3;
    x[3] = 4;
    cout<<"The value at address p[0] is "<<x[0]<<endl;
    delete[] x;
    cout<<"The value at address p[0] is "<<x[0]<<endl;
}*/

/*class complex{
    int a,b;
    public:
    void setdata(int v1, int v2){
        a = v1;
        b = v2;
    }
    void getdata(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
    }
};

int main(){
    complex* ptr = new complex;
    (*ptr).setdata(1, 2);
    (*ptr).setdata(3, 4);
    (*ptr).getdata();
    ptr->getdata();
    return 0;
}*/

/*class A{
    int a;
    public:
        A &setdata(int a){
            this->a = a;
            return *this;
        }
       void setdata(int a){
            this->a = a;
        }
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
        }
};

int main(){
    A a;
    //a.setdata(4).getdata();
    a.setdata(4);
    a.getdata();
    A b;
    b.setdata(5);
    b.getdata();
    return 0;
}*/

/*class base{
    public:
        int var_base;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }
};

class derived : public base{
    public:
        int var_derived;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    class base* base_pointer;
    class derived* derived_pointer;
    class base obj_base;
    class derived obj_derived;
    base_pointer = &obj_derived;;
    //derived_pointer = &obj_base;
    //class base obj_base;
    //derived_pointer = &obj_base;
    //class derived obj_derived;
    //base_pointer = &obj_derived;
    //base_pointer->var_base = 34;
    //base_pointer->display();
    //derived_pointer= &obj_base;
    derived_pointer->var_base = 134;
    derived_pointer->var_derived = 89;
    derived_pointer->display();
    return 0;
}*/
/*class base{
    public:
        int var_base=69;
        virtual void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
        }
};

class derived : public base{
    public:
        int var_derived=83;
        void display(){
            cout<<"Displaying base class variable var_base "<<var_base<<endl;
            cout<<"Displaying derived class variable var_derived "<<var_derived<<endl;
        }
};

int main(){
    class base* base_pointer;
    class derived obj_derived;
    base_pointer = &obj_derived;
    base_pointer->display();
    return 0;
}*/

/*int main(){
    string s1;
    string s2;
    s1 = "fambruhhhhh";
    ofstream out("s1.txt");
    out<<s1;
    //out.close();
    ifstream in("s2.txt");
    getline(in, s2);
    cout<<s2;
    getline(in, s2);
    cout<<s2;
    return 0;
}*/

/*int main(){
   string s1;
   string s2;
   string s3;
   string s4;
   s3="pendu is the penalty merchant";
   s1="messi is the best";
   //ofstream madrchod("s1.txt");
    //madrchod<<s1;
    //ofstream madrchod2("s2.txt");
    //madrchod2<<s1;
    /*ofstream madrchod3("s1.txt");
    madrchod3<<s3;
    madrchod3.close();
    ofstream madrchod4("s2.txt");
    madrchod4<<s1;
    madrchod4.close();
    ifstream betichod1("s2.txt");
    getline(betichod1, s2);
    cout<<s2<<endl;
    betichod1.close();
    ifstream betichod2("s1.txt");
    getline(betichod2, s4);
    cout<<s4<<endl;
    betichod2.close();
    ofstream pendu;
    pendu.open("s1.txt");
    pendu<<s3;
    pendu.close();
    ofstream goat;
    goat.open("s2.txt");
    goat<<s1;
    goat.close();
    ifstream pendu1;
    pendu1.open("s1.txt");
    getline(pendu1, s2);
    cout<<s2<<endl;
    pendu1.close();
    ifstream goat1;
    goat1.open("s2.txt");
    getline(goat1, s4);
    cout<<s4<<endl;
    goat1.close();






    return 0;
}*/
/*template <class T>
class aryan{
    public:
        T data;
        aryan(T a){
            data = a;
        }
        void display(){
            cout<<"The value of data is "<<data<<endl;
        }
};

int main(){
    aryan<float> a(1.69);
    a.display();
    aryan<int> b(69);
    b.display();
    return 0;
}*/

/*template<class t1, class t2>
class aryan{
    public:
        t1 data1;
        t2 data2;
        aryan(t1 a, t2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<"The value of data1 is "<<this->data1<<endl;
            cout<<"The value of data2 is "<<this->data2<<endl;
        }
};

int main(){
    aryan<int, float> a(1, 1.69);
    a.display();
    aryan<float, char> b(1.69, 'a');
    b.display();
    return 0;
}*/

/*template<class t1=int, class t2=float>

class aryan{
    public:
        t1 data1;
        t2 data2;
        aryan(t1 a, t2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<"The value of data1 is "<<this->data1<<endl;
            cout<<"The value of data2 is "<<this->data2<<endl;
        }
};

int main(){
    aryan<> a(1, 1.69);
    a.display();
    aryan<float, char> b(1.69, 'a');
    b.display();
    return 0;
}*/

/*template<class t>

class aryan{
    public:
        t data;
        aryan(t a){
            data = a;
        }
        
};

template<class t>
//void aryan<t> :: display(){
  //  cout<<"The value of data is "<<data<<endl;
//}
void func(int a){
    cout<<"The value of a is 1 "<<a<<endl;
}

template<class t>

void func(t a){
    cout<<"The value of a is 2 "<<a<<endl;
}

int main(){
    //aryan<int> a(1);
   // a.display();
    func(4.0);
    return 0;
}*/

/*void display(vector<int> vec);
int main(){
    vector<int> vec1;
    vector<int> vec2;
    int element, size;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    for(int i=0; i<size ; i++){
        cout<<"enter an element to add to the vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    /*for(int i=0; i<size; i++){
        cout<<vec1[i]<<" ";
        cout<<endl;
    }
    display(vec1);
    vec1.pop_back();
    display(vec1);
    vec1.insert(vec1.begin(), 566);
    vec1.push_back(566);
    display(vec1);
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,3, 566);
    display(vec1);
 return 0;
}

void display(vector<int> vec){
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
        cout<<endl;
    }
}*/

/*int main(){
list<int> list1;
list<int> list2;
list1.push_back(1);
list1.push_back(2);
list1.push_back(3);
list<int> :: iterator iter= list1.begin();
cout<<"The first element of the list is "<<*iter<<endl;




}*/

/*int main(){
    map<string,int> marksmap;
    marksmap["Aryan"] = 69;
    marksmap["Rohan"] = 89;
    marksmap["Rohit"] = 79;
    marksmap.insert({{"Sachin", 99}, {"Virat", 89}});
    map<string,int> :: iterator iter;
    for(iter = marksmap.begin(); iter!=marksmap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    return 0;
}*/




