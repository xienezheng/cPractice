#include <graphics.h> // ����ͼ�ο�
#include <conio.h>
void main()
{
     initgraph(640, 480); // ��ʼ����ͼ����
     circle(200, 200, 100); // ��Բ��Բ��(200, 200)���뾶 100
     getch(); // �����������
     closegraph(); // �ر�ͼ�ν���
}