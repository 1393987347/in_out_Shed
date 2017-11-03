#include <iostream>
using namespace std;
template <typename T>
#define buffersize  4

class shed
{
    private:
        shed *top = new shed;
        shed *bot = new shed;  //栈底
        T buffer[buffersize];
    public:
        shed();  //构造函数


        // void shed ()
        // {
        //     for(int i = 0 ; i < buffersize; i++)
        //     {
        //         buffer[i] = 0;
        //     }
        //     bot = &buffer[buffersize - 1];  //指向栈的底部
        //     top = bot;        
        // }

        bool ifEmpty()   //判断栈空
        {
            if(*top == *bot)
            {
                cout << "栈为空栈" << endl;
                return false;
            }
        }

        bool isFull()    //判断栈满
        {
            if(*top >= *bot + buffersize || *bot >= *top + buffersize)
            {
                cout << "栈已满" << endl;
                return false;
            }
        }

        void inShed(T value)  //入栈
        {
            top -> buffer[1] = value;
            top++;
        }

        void outShed()  //出栈
        {
            delete(top);
            top--;
        }

        void reverse(void) //反转
        {
            
        }

        void travel(void)   //显示栈
        {
            for(int i = 0; i < buffersize; i++)
            {
                cout << buffer[i] << ' ' << endl;
            }
        }

};

int main(void)
{
    shed <int> s;
    s.inShed(1);
    s.inShed(2);
    s.inShed(3);
    s.inShed(4);
    s.travel();

    s.outShed();
    s.travel();



    
}