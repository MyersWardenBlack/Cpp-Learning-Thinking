//三只小猪称体重

#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cout<<"请输入A小猪的体重:"<<endl;
    cin>>A;
    cout<<"请输入B小猪的体重:"<<endl;
    cin>>B;
    cout<<"请输入C小猪的体重:"<<endl;
    cin>>C;
    if(A<B)
    {
        if(B>C)
        {
            cout<<"体重最重的小猪是:B"<<endl;
        }
        else if(B<C)
        {
                cout<<"体重最重的小猪是:C"<<endl;
        }
    }
    else if(A>B)
    {
        if(A>C)
        {
            cout<<"体重最重的小猪是:A"<<endl;
        }
        else if(A<C)
        {
            cout<<"体重最重的小猪是:C"<<endl;
        }
    }
return 0;
}



//伪随机数

#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;

    e = rand()%100;
    cout<<e<<endl;
    b = rand()%100;
    cout<<b<<endl;
    c = rand()%100;
    cout<<c<<endl;
    d = rand()%100;
    cout<<d<<endl;
return 0;
}



//水仙花数

#include <iostream>
using namespace std;
int main()
{
    int num = 100;
    int a,b,c;
    do
    {
        a = num%10;
        b = (num/10)%10;
        c = num/100;
        if(a*a*a+b*b*b+c*c*c==num)
        {
            cout<<num<<endl;
        }
        num++;
    }while(num<1000);

    return 0;
}



//乘法口诀表

#include <iostream>
using namespace std;
int main()
{
    for(int i = 1; i < 10; i++)
    {

        for(int j=1; j<=i; j++)
        {
            cout<<j<<"*"<<i<<"="<<j*i<<" ";

        }
        cout<<endl;
    }

    return 0;
}



//寻找数组中的最大值

#include <iostream>
using namespace std;
int main()
    {
        int arr[5]={10,20,30,40,50};
        int max = 0;
        for(int i = 0;i<5;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }

    cout<<max<<endl;
    return 0;

    }


//寻找数组最大值2

#include <iostream>
#include <algorithm>
using namespace std;
int main()
    {
        int arr[5]={10,20,30,40,50};
        sort(arr,arr+5,greater<int>() );
        cout<<arr[0]<<endl;

        return 0;

    }



//数组元素逆置

#include <iostream>

using namespace std;
int main()
{
    int arr[5]={0,3,5,7,8};
    int arr2[5];
    for(int i=0;i<5;i++)
    {
        arr2[i]=arr[4-i];
        cout<<arr2[i]<<endl;
    }

return 0;
}



//冒泡排序
#include <iostream>
using namespace std;
int main()
 {
    int arr[9]={4,2,8,0,5,7,1,3,9};

    cout<<"排序前的结果是:"<<endl;
    for(int i=0; i<9; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<""<<endl;                     //换行

    for(int i = 1; i < 9; i++)          //一共需要排序几轮，总个数-1=8轮
    {
        for(int j = 0; j < 9-i; j++)       //每一轮需要排序几次，总个数-第几轮=次数
        {
            if(arr[j] > arr[j+1])
            {
                int mid=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=mid;           //交换两个元素的神秘代码 doge
            }
        }
    }
     cout<<"排序后的结果是:"<<endl;
     for(int i=0; i<9; i++)
     {
         cout<<arr[i]<<" ";             //输出
     }
    return 0;
 }



//二维数组  成绩单     我好不容易心动一次，你却让我输的这么彻底

#include <iostream>
using namespace std;
int main()
{
    int arr[3][3] = {
            {100,100,100},
            {90,50,100},
            {60,70,80}
    };

    for(int i = 0; i < 3; i++)
    {
        int zong = 0;
        for(int j = 0; j < 3; j++)
        {
            zong=arr[i][j] + zong;

        }
        cout<<"score"<<zong<<endl;
    }

    return 0;
}



//函数常见形式 有参有返

#include <iostream>
using namespace std;
int test04(int a,int b)     //有返回值就有返回值类型
{
    return a;               //返回值
}
int main()
{
    int c = test04(100,200);
    cout<<c<<endl;

return 0 ;
}



//返回两个数之中的最大值
//函数的声明是定义的函数在main函数下边的情况

#include <iostream>
using namespace std;

int max(int a,int b);   //函数的声明，声明可以有多次，但是定义只能有一次

int main()
{
    int a = 10;
    int b = 30;
    cout<<max(a,b)<<endl;
    return 0;
}
int max(int a,int b)            //（函数的定义）这一行移上去，加个分号就可以了
{
    return (a > b ? a: b);
}




//const修饰指针

#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 20;
    int * p = &a;
    *p = 30;
    cout<<a<<endl;
    p = &b;
    *p = 90;
    cout<<b<<endl;

    return 0;
}



//使用指针循环输出数组元素

#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int * p =arr;		//arr 就代表数组的首地址
    for(int i = 0; i < 10; i++)		//循环输出数组的元素
    {
        cout<<*p<<" ";
        p++;
    }
    return 0;
}




//适用地址传递会改变实参

#include <iostream>
using namespace std;

void swap(int * p1, int * p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
int main()
{
    int a = 10;
    int b = 20;
    swap(&a, &b);
    cout<<a<<" "<<b<<endl;
}



//冒牌排序 + 数组 + 指针

#include <iostream>
using namespace std;

void bubblesort(int * arr, int len)         //参数1是数组首地址，参数2是数组长度
{
    for(int i = 0; i <len - 1 ; i++)
    {
        for(int j = 0; j < len-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }

    }

    for(int i = 0; i <len ; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,len);        //传入数组名，表示首地址

    return 0 ;
}




结构体数组

#include <iostream>
#include <string>
using namespace std;
//首先应该先定义结构体
struct student
{
    string name;
    int age;
    int score;
};

int main()
{
    //结构体数组
    struct student arr[3] =
            {
            {"张三",19,65},
            {"lisi", 20,90},
            {"wangwu",18,85}

            };
    //结构体数组元素赋值
    arr[1].name = "李四";
    arr[2].name = "王五";
    //遍历结构体数组
    for(int i = 0; i < 3; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].score<<endl;
    }
    return 0;
}



//结构体指针

#include <iostream>
#include <string>
using namespace std;
struct student {
    string name;
    int age;
    int score;
};

int main()
{
    struct student s[3] = {{"zhangsan",19,66},{"lisi",18,79},{"wanngwu",19,99}};
    struct student * p = &s[0];
    struct student * p1 = &s[2];
    cout<<p->name<<" "<<p->age<<endl;
    cout<<p1->name<<" "<<p->score<<endl;
    return 0;
}



//结构体做函数参数

#include <iostream>
#include <string>

using namespace std;

struct student
{
    string name;
    int age;
    int score;
};

void PRINTNAME(struct student * stu)
{
    cout<<stu->name<<" "<<stu->age<<" "<<stu->score<<" "<<endl;
}

int main()
{
    struct student stu;
    stu.name = "zhangsan";
    stu.age = 19;
    stu.score = 90;

    PRINTNAME(&stu);

    return 0;
}




//设计英雄结构体包括姓名年龄性别，创建结构体数组包括五人，冒泡排序输出年龄从小到大的
#include <iostream>
#include <string>
using namespace std;

struct hero{
   string name;
   int age;
   string gender;
};

int main()
{
   struct hero arr[5] = {
           {"liubei",23,"nan"},
           {"guanyu",22,"nan"},
           {"zhangfei",20,"nan"},
           {"zhaoyun",21,"nan"},
           {"diaochan",19,"nv"}
   };
   for(int i = 0; i < 4; i++)
   {
       for(int j = 0; j < 5-i-1; j++)
       {
           if(arr[j].age > arr[j+1].age)
           {
               struct hero temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }

   for(int i = 0; i < 5; i++)
   {
       cout<<arr[i].name<<" "<<arr[i].age<<" "<<arr[i].gender<<endl;
   }
   return 0;
}





//九进制转十进制
//https://www.lanqiao.cn/problems/2095/learning/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s = "2022";
  int ans = 0;
  for(int i = 0; i < s.size(); i++)
  {
    ans = ans*9 + s[i]-'0';
  }
  cout<<ans<<endl;
  return 0;
}
