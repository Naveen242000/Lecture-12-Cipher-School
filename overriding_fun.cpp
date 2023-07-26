using namespace std;
class Animal{
public:
void speak(){
  cout<<"they made a sound.!"<<endl;
}
};
class Dog:public Animal{
public:
void speak(){
 cout<<"wooff bhavv grrrr"<<endl;
}
};
class Cat:public Animal{
public:
void speak(){
  cout<<"Meowwwww"<<endl;
}
};
int main(){
  Dog d;
  Animal a;
  Cat c;
  a.speak();
  d.speak();
  c.Animal::speak();
  return 0;
}
