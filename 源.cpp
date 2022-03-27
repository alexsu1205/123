#include <fstream>//ifstream读文件，ofstream写文件，fstream读写文件
#include <string>//文本对象，储存读取的内容
#include <iostream>//屏幕输出cout
#include <cstdlib>//调用system("pause");
#include <windows.h>//用于函数SetConsoleOutputCP(65001);更改cmd编码为utf8
using namespace std;

int main(int argc,char** argv)
{

    ifstream in("abc.txt");
    string line;
    char user[50], pas[50], all[50];
    char content;
 
    int i;
    if (in) // 有该文件
    {
        while (getline(in, line)) // line中不包括每行的换行符
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
            cout << "账号为：" << user << endl;
            cout << "密码为：" << pas << endl;
            //line.copy(all, 100, 0);
              //  cout<<all;

            //cout<<"line内容"<<line;
           // p3=sizeof(line);
       // string str[p3]=line;
         /*  while(!in.eof()){
            in>>content;
            //cout<<content;

            }*/
            //cout << line << endl;
        }

    }

    else // 没有该文件
    {
        cout << "no such file" << endl;
    }

    system("pause");
    return 0;

}
