#include <stdio.h>
#include <stdlib.h> // ��Ҫ����stdlib.h��ʹ��free����
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
	printf("��%d��ѧ�����ܳɼ�Ϊ%s��ƽ����Ϊ%s",n,stu[i+1].sum,stu[i].avg);
	cout << "hao" << endl;
	return ;
}

int main(void) {
    int m, n, t,i, j;
    
    printf("\nһ������ô��ѧ����");
    scanf("%d", &n);
	
    struct student stu[n];
    
    printf("\nһ������ô���ſΣ�");
    scanf("%d", &m);  
    printf("ѧ��\t����\t�Ա�\t\t���Ʒ���\n");
	
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
    	
    		printf("��1����ÿ��ѧ��n�ſγ̳ɼ����ܷ֡�ƽ����\n");
			printf("��2����ÿ�ſγ̳ɼ���ƽ����\n");
			printf("��3��������ɼ���˳����ʾָ����i���˵��ֺܷ�ƽ����\n");
			printf("��4��������ɼ���˳����ʾָ����i���˵ĵ�j�ſγɼ�������ʾ�ĳɼ��Ǹ�\n"
			"�ڿγ�ƽ���ֻ��ǵ��ڿγ�ƽ���֡�\n");
			printf("��5����ÿ��ѧ����ƽ���ֵ�����\n");
			printf("��6������0�����˳����򣨽������У�\n");
			
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

