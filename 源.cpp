#include <fstream>//ifstream���ļ���ofstreamд�ļ���fstream��д�ļ�
#include <string>//�ı����󣬴����ȡ������
#include <iostream>//��Ļ���cout
#include <cstdlib>//����system("pause");
#include <windows.h>//���ں���SetConsoleOutputCP(65001);����cmd����Ϊutf8
using namespace std;

int main(int argc,char** argv)
{

    ifstream in("abc.txt");
    string line;
    char user[50], pas[50], all[50];
    char content;
 
    int i;
    if (in) // �и��ļ�
    {
        while (getline(in, line)) // line�в�����ÿ�еĻ��з�
        {
            int p1=0, p2=0, p3=0;
            for (i = 0; i < line.size(); i++)all[i] = line[i];
            all[i] = '\0';
            while (all[p1] != '-') {
                user[p1] = all[p1];
                user[++p1] = '\0';
            }
            while (all[p1++] == '-');
            p1--;
            while (all[p1]) {
                pas[p2] = all[p1++];
                pas[++p2] = '\0';
            }
            cout << "�˺�Ϊ��" << user << endl;
            cout << "����Ϊ��" << pas << endl;
            //line.copy(all, 100, 0);
              //  cout<<all;

            //cout<<"line����"<<line;
           // p3=sizeof(line);
       // string str[p3]=line;
         /*  while(!in.eof()){
            in>>content;
            //cout<<content;

            }*/
            //cout << line << endl;
        }

    }

    else // û�и��ļ�
    {
        cout << "no such file" << endl;
    }

    system("pause");
    return 0;

}
