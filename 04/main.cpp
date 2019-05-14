#include <iostream>
#include <cassert>
#include "byteprint.h"

using namespace std;

struct student {
char name [17];
uint16_t year;
float average;
uint8_t gender : 1;
uint8_t courses;
student* starosta;


};


int main()
{
    student students[3]={{"Alex",14,4,1,3,&students[1]},{"Anna",18,5,0,3,nullptr},{"Tima",16,3,1,3,&students[1]}};

   /* assert(nibble_to_hex(0x0) == '0');
    assert(nibble_to_hex(0x1) == '1');
    assert(nibble_to_hex(0x2) == '2');
    assert(nibble_to_hex(0x3) == '3');
    assert(nibble_to_hex(0x4) == '4');
    assert(nibble_to_hex(0x5) == '5');
    assert(nibble_to_hex(0x6) == '6');
    assert(nibble_to_hex(0x7) == '7');
    assert(nibble_to_hex(0x8) == '8');
    assert(nibble_to_hex(0x9) == '9');
    assert(nibble_to_hex(0xa) == 'a');
    assert(nibble_to_hex(0xb) == 'b');
    assert(nibble_to_hex(0xc) == 'c');
    assert(nibble_to_hex(0xd) == 'd');
    assert(nibble_to_hex(0xe) == 'e');
    assert(nibble_to_hex(0xf) == 'f');
    uint32_t u32 = 0x42;
    cout << "u32 bytes: ";
    print_in_hex(&u32, sizeof(u32));
    cout << '\n';
    print_in_binary (15);
    cout << endl;
    calc (1025, '&', 127);*/
    cout << "address of students  " << &students;
    cout << endl << "Size of students  " << sizeof(students);
    cout << endl << "address of student 0  " << &students[0];
    cout << endl << "Size of student 0  " << sizeof(students[0]);
    cout << endl << "address of student 1  " << &students[1];
    cout << endl << "Size of student 1  " << sizeof(students[1]);
    cout << endl << "address of student 2  " << &students[2];
    cout << endl << "Size of student 2  " << sizeof(students[2]);
    cout << endl;
    cout << endl << "address of student 0 name " << &students[0].name;
    cout << endl << "offset of student 0 name " <<offsetof(student, name);
    cout << endl << "Size of student 0 name  " << sizeof(students[0].name);
    cout << endl << "print_in_hex of student 0 name  "; print_in_hex(&students[0].name,sizeof(students[0].name));
    cout << endl << "print_in_binary of student 0 name  "; print_in_binary(&students[0].name,sizeof(students[0].name));
    cout << endl;
     cout << endl << "address of student 0 year " << &students[0].year;
    cout << endl << "offset of student 0 year " <<offsetof(student, year);
    cout << endl << "Size of student 0 year  " << sizeof(students[0].year);
    cout << endl << "print_in_hex of student 0 year  "; print_in_hex(&students[0].year,sizeof(students[0].year));
    cout << endl << "print_in_binary of student 0 year  "; print_in_binary(&students[0].year,sizeof(students[0].year));
    cout << endl;
     cout << endl << "address of student 0 average " << &students[0].average;
    cout << endl << "offset of student 0 average " <<offsetof(student, average);
    cout << endl << "Size of student 0 average  " << sizeof(students[0].average);
    cout << endl << "print_in_hex of student 0 average  "; print_in_hex(&students[0].average,sizeof(students[0].average));
    cout << endl << "print_in_binary of student 0 average  "; print_in_binary(&students[0].average,sizeof(students[0].average));
    cout << endl;
    cout << endl << "address of student 0 courses " << (void*)&students[0].courses;
    cout << endl << "offset of student 0 courses " <<offsetof(student, courses);
    cout << endl << "Size of student 0 courses  " << sizeof(students[0].courses);
    cout << endl << "print_in_hex of student 0 courses  "; print_in_hex(&students[0].courses,sizeof(students[0].courses));
    cout << endl << "print_in_binary of student 0 courses  "; print_in_binary(&students[0].courses,sizeof(students[0].courses));
    cout << endl;
    cout << endl << "address of student 0 starosta " << &students[0].starosta;
    cout << endl << "offset of student 0 starosta " <<offsetof(student, starosta);
    cout << endl << "Size of student 0 starosta  " << sizeof(students[0].starosta);
    cout << endl << "print_in_hex of student 0 starosta  "; print_in_hex(&students[0].starosta,sizeof(students[0].starosta));
    cout << endl << "print_in_binary of student 0 starosta  "; print_in_binary(&students[0].starosta,sizeof(students[0].starosta));
    cout << endl;      cout << endl;
    cout << endl << "print_in_hex of student 0 courses  "; print_in_hex(&students,sizeof(students));

}
