#include<bits/stdc++.h>
using namespace std;
struct cls{
int start,end;

bool operator<(cls a)const{
if(end!a=.end) return end <a.end;
return start<a.start;
}
};

int main()

{
    struct cls classes[100];
    classes[0].start =5;classes[0].end=6;
    classes[1].start =1;classes[1].end=3;
    classes[2].start =2;classes[2].end=4;
    classes[3].start =2;classes[3].end=5;
    classes[4].start =3;classes[4].end=4;
    classes[5].start =1;classes[5].end=4;

    sort(classes,classes+6);
    for (int i=0;i<6;i++)
    {
        printf("class %d -> %d to %d\n",i+1,classes[i].start,classes[i].end);
    }
    int ending_time=0;
    int number_of_classes=0;
    for(int i=0;i<6;i++)
    {
        if(ending_time <= classes[i].start)
        {
            number_of_classes+=1;
            ending_time=classes[i].end;
            printf("conduction class time :: %d to %d\n",classes[i].start,classes[i].end);
        }
    }
    printf("total classes:: %d\n",number_of_classes)
}
