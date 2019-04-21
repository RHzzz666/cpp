#include <iostream>

class Number{
public:
	Number(int n1,int n2){
		nu1 = n1;
	}
	int converto(int n){
	    //n1十进制转成n进制
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

        Number no1(n1, 10);     //n1是10进制正整数

        Number no3 = no1.converto(n2);  //no3是n2进制的正整数

        no3.show();     //输出结果

    }

}
