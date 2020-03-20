#define CATCH_CONFIG_MAIN
#include "C:\Users\Luis\OneDrive\Desktop\catch.hpp"
#include "DoubleCircularList.h"

TEST_CASE( "DCL", "[dcl]" ) {
    DoubleCircularList L;
    REQUIRE(L.isEmpty()==true);
     Job J(1,2,3);
     Job A(5,3,3);
     Job B(3,7,8);
     Job C(7,8,9);
    REQUIRE(J.toString() == "[1 2 3]");
    L.add(J);
    L.add(A);
    L.add(B);
    L.add(C);
    string a;
    a = L.toString();
    cout << a << endl;
    L.removeCurrent();
    a = L.toString();
    cout << a << endl;
    L.next();
    a = L.toString();
    cout << a << endl;


}