// 07_04_23 (������ ����)
//
//�������� ��������� ��������� �����
//� ���������� ������ ����������� ���-�� ������� � ����� ��������� �������
//������������ ������: ��������, �������, ����� �����

//��������������� ���

#include <iostream>
#include <Windows.h>

using namespace std;

//��������
class Apartment
{
public:
    //������������ ������ ��� ����� ���������� ������
    int countRoom;
    int* rooms = new int[countRoom];

    //����������� 
    Apartment(int apartCount)
    {
        countRoom = apartCount;
    }

    void getCountRoom(int* rooms, int counter)
    {
        for (int i = 0; i < counter; i++)
        {
            cout << rooms[i] << "\n";
        }
    }
};

//������� 
class Room
{
public:
    double width, height, length;

    //�����������, ����� ������ ������ �����-�� ����������
    //� � ����� ��������� �������� �������� �������
    //����������� ������ �� ����������
    Room(double c_width, double c_height, double c_length)
    {
        width = c_width;
        height = c_height;
        length = c_length;

    };

    //����� 
    double getSquare()
    {
        return ((width+ length)*2* length);
    }

    Room()
    {

    }

private:

};

