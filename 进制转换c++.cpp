#include <iostream>

class Number{
public:
	Number(int n1,int n2){
		nu1 = n1;
	}
	int converto(int n){
	    //n1ʮ����ת��n����
		int k[10001],i,j,r = 0;
		for(i = 0;nu1 % n != 0;i++){
			k[i] = nu1 % n;
		}
		for(j = 0;i >= 0; i--,j++){
			r += 10 * i * k[j];
		}
		return r;	
	}
	show(){
		std::cout<<nu1<<std::endl;
	}
private:
	int nu1;
};

int main() {

    int n, n1, n2;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2;

        Number no1(n1, 10);     //n1��10����������

        Number no3 = no1.converto(n2);  //no3��n2���Ƶ�������

        no3.show();     //������

    }

}
