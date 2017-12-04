#include <graphics.h> // 引用图形库
#include <conio.h>
void main()
{
     initgraph(640, 480); // 初始化绘图窗口
     circle(200, 200, 100); // 画圆，圆心(200, 200)，半径 100
     getch(); // 按任意键继续
     closegraph(); // 关闭图形界面
}