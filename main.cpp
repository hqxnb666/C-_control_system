#include <iostream>
#include "Manger.h"
#include "Student.h"
#include "Teacher.h"
#include "Subject.h"

using namespace std;

int main() {
    Manger manager;
    manager.readFile_stu(); // ��������ʱ��ȡѧ���ļ�
    manager.readFile_tea(); // ��������ʱ��ȡ��ʦ�ļ�

    // ��ʾ���˵�����������
    manager.menu_main(); 

    return 0;
}
