
#include <stack>
#include <time.h>
#include <string>
#include <cstdlib>
#include<iostream>
#include<stdlib.h>

//using namespace std;
//
//
//struct listtodo
//{
//    string listData;
//    int priority;
//
//    listtodo* next;
//};

//listtodo* start = NULL, * undo_item = NULL;
//
//void addit_list(string item, int priority)
//{
//    listtodo* temp;
//    listtodo* rear;
//
//    temp = new listtodo;
//    temp->listData = item;
//    temp->priority = priority;
//
//    if (start == NULL || priority <= start->priority)
//    {
//
//        temp->next = start;
//        start = temp;
//
//    }
//    else
//    {
//
//        rear = start;
//
//        while (rear->next != NULL && rear->next->priority <= priority)
//        {
//            rear = rear->next;
//
//        }
//
//        temp->next = rear->next;
//        rear->next = temp;
//    }
//}
//
//void delite()
//{
//    listtodo* temp;
//    if (start == NULL) {
//        cout << ("Нет таких вариантов \a\n");
//    }
//    else
//    {
//        temp = start;
//        cout << "Завершение задачи -> \n" << temp->listData << endl;
//        start = start->next;
//        undo_item = temp;
//
//    }
//
//}
//void showlist()
//{
//    if (undo_item != NULL) {
//        listtodo* temp;
//        temp = undo_item;
//        temp->next = start;
//        start = temp;
//        undo_item = NULL;
//        cout << "Previous deletion undone!" << endl;
//    }
//    else {
//        cout << "Undo unsucessful! (Either no deleted data or limit reached.)" << endl;
//    }
//}
//
//void findlist()
//{
//    listtodo* ptr;
//    ptr = start;
//
//    if (start == NULL) {
//        cout << "empty\n";
//    }
//    else
//    {
//        while (ptr != NULL)
//        {
//            cout << "item is : " << ptr->listData << " and its priority is :" << ptr->priority << "\n";
//            ptr = ptr->next;
//        }
//    }
//}
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    //SetConsoleOutputCP(1251);
//    int choice = 0, priority;
//    string item;
//    system("color 5E");
//    while (choice != 5) {
//        cout << "\t\t++++Список дел!++++++\n";
//        cout << "\t\==============================\n";
//        cout << "\tЧто вы хотетите предпринять? \n";
//        cout << "\t* 1 - Добавить задачу  \n";
//        cout << "\t* 2 - Удалить задачу  \n";
//        cout << "\t* 3 - Найти задачу  \n";
//        cout << "\t* 4 - Посмотреть весь список задач   \n";
//        cout << "\t* 5 - Выход    \n";
//        cout << " \t==============================   \n";
//        cin >> choice;
//        switch (choice)
//        {
//        case 1:
//            cout << "\tInput the data to be added in the item : "
//                <<"____";
//            getline(cin >> ws, item);
//            cout << "Введите приоритет ";
//            cin >> priority;
//            addit_list(item, priority);
//            break;
//
//        case 2:
//            delite();
//            break;
//
//        case 3:
//            findlist();
//            break;
//
//        case 4:
//            showlist();
//            break;
//
//        case 5:
//            break;
//
//        default:
//            cout << "\a";
//            cout << "Такого пункта нет в меню!!\n";
//        }
//    }
//}



