#include <stdio.h>
#include <stdlib.h> // 需要包含stdlib.h以使用free函数
#include <iostream>
using namespace std;

struct student {
    int num;
    char name[20];
    char sex[2];
    float score[50];
    float sum = 0;
    float avg;
};

void a(struct student *stu,int m,int n){
	int i,j; 

	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
				cout << "NIhao" << endl;
			stu[i].sum+=stu[i].score[j];
		}
		cout << "hao" << endl;
		stu[i].avg=stu[i].sum/n;
	}
	printf("第%d个学生的总成绩为%s，平均分为%s",n,stu[i+1].sum,stu[i].avg);
	cout << "hao" << endl;
	return ;
}

int main(void) {
    int m, n, t,i, j;
    
    printf("\n一共有这么多学生：");
    scanf("%d", &n);
	
    struct student stu[n];
    
    printf("\n一共有这么多门课：");
    scanf("%d", &m);  
    printf("学号\t姓名\t性别\t\t各科分数\n");
	
    for(i = 0; i < n; i++){
        stu[i].num = 1001 + i; 
        printf("%d\t", stu[i].num);
        scanf("%s %s", stu[i].name, stu[i].sex);
		
        for(j = 0; j < m; j++){
            scanf("%f", &stu[i].score[j]);
            cout << stu[i].score[j];
        }
        printf("\n");
    } 
    	
    		printf("（1）求每个学生n门课程成绩的总分、平均分\n");
			printf("（2）求每门课程成绩的平均分\n");
			printf("（3）按输入成绩的顺序，显示指定第i个人的总分和平均分\n");
			printf("（4）按输入成绩的顺序，显示指定第i个人的第j门课成绩，并显示改成绩是高\n"
			"于课程平均分还是低于课程平均分。\n");
			printf("（5）求每个学生按平均分的排名\n");
			printf("（6）数字0，则退出程序（结束运行）\n");
			
			while(1){
				int t;
				scanf("%d",&t);
				if(t==0)
					break;
				if(t==1){
					a(stu,m,n);
					break;
				}
				else
					break;		
			}
		
    return 0;
}

