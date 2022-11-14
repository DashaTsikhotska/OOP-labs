#include <string>
#include <iostream>
#include <fstream>
#include <time.h>
#include <cstdlib>
#include <vector>
#include "UniMaster.h"
#include "Calculator.h"
#include "FunctorClasses.h"
#include <algorithm>
#include <iterator>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <iterator>


using namespace std;

#include "Record.h"
#include "FriendClass.h"

//task 7_lab 5
void Service(Client* recClient) {
    int input;
    cout << "If you want to read from the file press 0" << endl;
    cout << "If you want to write to the file press 1" << endl;

    cin >> input;
    if (input == 0) recClient->readFromFile();
    else if (input == 1) recClient->printToFile();
    else cout << "You exited from the function." << endl;
}

//task 19: Функція з параметром у вигляді об'єкту класу
void changeHairstyleCost(Hairstyle h)
{
  h.cost += 100;
}

//task 20: Функція з параметром у вигляді адреси на об'єкт класу
void changeHairstyleCost(Hairstyle* h)
{
  h->cost += 100;
}

//task 21: Функція типу описаного класу, повертатє об’єкт класу, оперує з методами класу.
Hairstyle* createHairstyle(string description, Catalog* cat, int cost)
{
  return new Hairstyle(description, cat, cost);
}

void showlist(list<int> g)
{
    list<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main()
{
  srand(time(NULL));

  //task 9 
  cout << "Polymorphic function calls" << endl;
  NailMaster nailMaster;
  MakeUpArtist makeUpMaster;
  UniMaster uniMaster;
  Person* p = &nailMaster;
  p->func();
  p = (Person*)&makeUpMaster;
  p->func();
  p = (Person*)&uniMaster;
  p->func();
  cout << "/////////////////////////////////////////////////////////////////////////////////" << endl;

  //task 10_lab 5 
  cout << "Task 10" << endl;
  Client client_6("Halyna", "Frenklin");
  client_6.func();//Раннє(статичне)
  cout << " " << endl;
  Client client_7("Milinda", "Gonz");
  Person* human = &client_7; //пізнє(динамічне)
  human->func();

  Manager* manager_6 = new Manager("Mark", "Leeenl");
  cout << "//////////////////////////////////////try - catch/////////////////////////////////" << endl;
  manager_6->display();
  manager_6->printToFile();
  manager_6->readFromFile();
  manager_6->display();
  cout << "//////////////////////////////////////////////////////////////////////////////////" << endl;


  //task 23
  //Динамічні 
  Catalog* catalog1 = new Catalog("catalog1");
  Catalog* catalog2 = new Catalog("catalog2");

  Hairstyle* hairstyles[5] = {
    new Hairstyle("Hairstyle1",catalog1,100),
    new Hairstyle("Hairstyle2",catalog2,200),
    createHairstyle("Hairstyle3",catalog1,300),
    new Hairstyle("Hairstyle4",catalog2,400),
    new Hairstyle("Hairstyle5",catalog1,500),
  };


  //Виклик функції (task 19)
  changeHairstyleCost(hairstyles[0]);

  cout << "new cost " << hairstyles[0]->cost << endl;
  cout << endl;

  changeHairstyleCost(*(hairstyles[0])); 

  cout << "new cost " << (*(hairstyles[0])).cost << endl;
  cout << endl;

  catalog1->addHairstyle(hairstyles[0]);
  catalog1->addHairstyle(hairstyles[2]);
  catalog1->addHairstyle(hairstyles[4]);

  catalog2->addHairstyle(hairstyles[1]);
  catalog2->addHairstyle(hairstyles[3]);

  Client* client[5] = {
    new Client("ClientName1","ClientSurName1"),
    new Client("ClientName2","ClientSurName2"),
    new Client("ClientName3","ClientSurName3"),
    new Client("ClientName4","ClientSurName4"),
    new Client("ClientName5","ClientSurName5"),
  };

  cout << "Count clients = " << Client::countClients << endl;

  cout << endl;

  Hairdresser* hairdresser[5] = {
    new Hairdresser("HairdresserName1","HairdresserSurName1"),
    new Hairdresser("HairdresserName2","HairdresserSurName2"),
    new Hairdresser("HairdresserName3","HairdresserSurName3"),
    new Hairdresser("HairdresserName4","HairdresserSurName4"),
    new Hairdresser("HairdresserName5","HairdresserSurName5"),
  };
  //hairdresser[0]->
  //task 17: Дружній клас
  FriendClass fc;

  fc.changePhone(hairdresser[0]);

  cout << "new phone " << hairdresser[0]->getPhone() << endl;
  cout << endl;

  //task 23
  
  Manager* manager[2] = {
    new Manager("ManagerName1","ManagerSurname1"),
    new Manager("ManagerName2","ManagerSurname2")
  };

  Record* records[5];

  records[0] = manager[0]->createRecord(client[0], hairdresser[0], hairstyles[0], "10:00");
  records[1] = manager[1]->createRecord(client[1], hairdresser[1], hairstyles[1], "12:00");
  records[2] = manager[0]->createRecord(client[2], hairdresser[2], hairstyles[2], "13:00");
  records[3] = manager[1]->createRecord(client[3], hairdresser[3], hairstyles[3], "14:00");
  records[4] = manager[0]->createRecord(client[4], hairdresser[4], hairstyles[4], "15:00");


  //task 14
//Simple constructor
  Hairdresser hairdresser__1("Rodrigo", "Gonzales");
  //obvious constructor
  Hairdresser hairdresser__2 = Hairdresser();
  //Short constructor
  Hairdresser hairdresser__3;

  //task 10: Множинне наслідування
  UniMaster* master = new UniMaster("Name", "Surname", "School", 3, 20000, "F", 19);
  master->display();


  //Віртуальна функція
  master->func();
  hairdresser[0]->func();
  manager[0]->func();
  client[0]->func();
  cout << endl;

  Hairdresser resultOfSum, resultOfSubs;
  Calculator<Hairdresser, 1> calculator;//////////////////////
  calculator[2];

 Calculator<int, 1> calculator_one_;
  calculator_one_.square(1, 2, 3, 4);


  cout << hairdresser__1.getExperience() << endl;
  ++hairdresser__1;
  cout << hairdresser__1.getExperience() << endl;
  hairdresser__1--;
  cout << hairdresser__1.getExperience() << endl;

  resultOfSum = hairdresser__1 + hairdresser__2;
  resultOfSubs = hairdresser__1 - hairdresser__2;

  cout << hairdresser__1.getExperience() << " , " << hairdresser__2.getExperience() << endl;

  cout << "Sum: " << resultOfSum.getExperience() << endl;

  cout << "Subs: " << resultOfSubs.getExperience() << endl;
  cout << hairdresser__3.getExperience() << endl;
  hairdresser__3 += hairdresser__1;
  cout << hairdresser__3.getExperience() << endl;
  hairdresser__3 -= hairdresser__1;
  cout << hairdresser__3.getExperience() << endl;
  hairdresser__3 *= hairdresser__1;
  cout << hairdresser__3.getExperience() << endl;
  hairdresser__3 = hairdresser__1;
  cout << hairdresser__3.getExperience() << endl;


  list<int> list_one, list_two;

  for (int i = 0; i < 10; ++i) {
      list_one.push_back(i * 2);
      list_two.push_front(i * 3);
  }
  cout << "\nList 1  is : ";
  showlist(list_one);

  cout << "\nList 2  is : ";
  showlist(list_two);

  cout << "\nList1 .front() : " << list_one.front();
  cout << "\nlist1 .back() : " << list_one.back();

  cout << "\nList1 .pop_front() : ";
  list_one.pop_front();
  showlist(list_one);

  cout << "\nList2 .pop_back() : ";
  list_two.pop_back();
  showlist(list_two);

  cout << "\nList1 .reverse() : ";
  list_one.reverse();
  showlist(list_one);

  cout << "\nList2 .sort(): ";
  list_two.sort();
  showlist(list_two);
  cout << "\n\n\n";
  deque<int> deque;
  set<int>set;
  multiset<int>multiset;
  queue<int>queue;
  stack<int>stack;
  multimap<int, double>multi;


  cout << "Functors :" << endl;///////////////////////////
  vector<int> arr1 = { 1,2,3,4,5 };
  vector<int> arr2 = { 10,20,30,40,50 };
  vector<int> result;
  vector<int>::iterator iterator;



  cout << "arr1" << endl;
  for (int k : arr1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "arr2" << endl;
  for (int k : arr2)
  {
      cout << k << " ";
  }
  cout << endl;
  result.resize(5);
  cout << "plus" << endl;
  transform(arr1.begin(), arr1.begin() + 5, arr2.begin(), result.begin(), operator_plus());
  for (int k : result)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "minus" << endl;
  transform(arr1.begin(), arr1.begin() + 5, arr2.begin(), result.begin(), operator_addition());
  for (int k : result)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "times" << endl;
  transform(arr1.begin(), arr1.begin() + 5, arr2.begin(), result.begin(), operator_times());
  for (int k : result)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "divides" << endl;
  transform(arr2.begin(), arr2.begin() + 5, arr1.begin(), result.begin(), operator_divides());
  for (int k : result)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "modulus" << endl;
  transform(arr1.begin(), arr1.begin() + 5, arr2.begin(), result.begin(), operator_modulus());
  for (int k : result)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "negate" << endl;
  transform(arr1.begin(), arr1.begin() + 5, result.begin(), operator_negate());
  for (int k : result)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << endl;
  cout << endl;
  vector<int> arr3 = { 1,2,3,4,5 };
  vector<int> arr4 = { 1,1,4,5,3 };
  vector<int> result1;
  cout << "arr3 " << endl;
  for (int k : arr3)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "arr4 " << endl;
  for (int k : arr4)
  {
      cout << k << " ";
  }
  cout << endl;
  result1.resize(5);
  cout << "equal_to" << endl;
  transform(arr3.begin(), arr3.begin() + 5, arr4.begin(), result1.begin(), operator_equal_to());
  for (int k : result1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "not_equal_to" << endl;
  transform(arr3.begin(), arr3.begin() + 5, arr4.begin(), result1.begin(), operator_not_equal_to());
  for (int k : result1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "greater" << endl;
  transform(arr3.begin(), arr3.begin() + 5, arr4.begin(), result1.begin(), operator_greater());
  for (int k : result1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "less" << endl;
  transform(arr3.begin(), arr3.begin() + 5, arr4.begin(), result1.begin(), operator_less());
  for (int k : result1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "greater_equal" << endl;
  transform(arr3.begin(), arr3.begin() + 5, arr4.begin(), result1.begin(), operator_greater_equal());
  for (int k : result1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "less_equal" << endl;
  transform(arr3.begin(), arr3.begin() + 5, arr4.begin(), result1.begin(), operator_less_equal());
  for (int k : result1)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << endl;
  cout << endl;
  vector<bool> arr5 = { false,false,true,true,true };
  vector<bool> arr6 = { false,true,true,false,false };
  vector<bool> result2;
  result2.resize(5);
  cout << "arr5 " << endl;
  for (int k : arr5)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "arr6 " << endl;
  for (int k : arr6)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "logical_and" << endl;
  transform(arr5.begin(), arr5.begin() + 5, arr6.begin(), result2.begin(), logical_and());
  for (int k : result2)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "logical_or" << endl;
  transform(arr5.begin(), arr5.begin() + 5, arr6.begin(), result2.begin(), logical_or());
  for (int k : result2)
  {
      cout << k << " ";
  }
  cout << endl;
  cout << "logical_not" << endl;
  transform(arr5.begin(), arr5.begin() + 5, result2.begin(), logical_not());
  for (int k : result2)
  {
      cout << k << " ";
  }

  cout << endl;
  
  //task 7
  Client* client_one = new Client();
  Service(client_one);

  int value;
  cout << "Do you want to delete dynamic objects?" << endl;
  cout << "If yes press 1, no - press 0" << endl;
  cin >> value;

  if (value == 1) {
      //очищення пам'яті
      delete catalog1;
      delete catalog2;

      cout << endl;

      //delete job[0];
      //delete job[1];

      cout << endl;
      delete manager[0];
      delete manager[1];

  cout << endl;

  for (int i = 0; i < 5; i++)
  {
      delete client[i];
      cout << endl;
      delete hairdresser[i];
      cout << endl;
      delete records[i];
      cout << endl;
  }
  }
  return 0;
}