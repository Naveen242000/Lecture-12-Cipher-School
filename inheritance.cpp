#include<bits/stdc++.h>
using namespace std;
class A{};
class B:public A{};
class A{};
class B{};
class C: public A,public B{};
class A{};
class B:public A{};
class C:public B{};
class A{};
class B:public A{};
class C:public A{};
class A{};
class B{};
class C: public A,public B{};
class D: public C{};
class E: public C{};
int main(){
  return 0;
}
