#include <iostream>

using namespace std;

void ov(const int k)
{

    cout<<k;
}

void ov(int k)
{
    k=k+1;
    cout<<k;
}

int main()
{
    int b=0;

    ov(b);

}

//�����ͱ�����Ӧһ�������ԣ����Ա�����Ӧ�ຯ�����ܻ�����úͱ������ݣ�const��intҲ���ݣ���ͬ��һ���������жຯ��ֻ���Ա���
//ʱ���,����ƥ��

