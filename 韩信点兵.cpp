#include <iostream>

class HanXin{
public:
	int result = 0;
	void line3(int n){
		result += 70 *n;
	}
	void line5(int n){
		result += 21 *n;
	}
	void line7(int n){
		result += 15 *n;
	}
	void showMany(){
		if(result % 105 < 100 && result % 105 >10){
			std::cout<<result % 105<<std::endl;
		}
		else std::cout<<"Impossible"<<std::endl;
	}
};

int main() {

    int n, n1, n2, n3;

    std::cin >> n;

    for(int i = 0; i < n; ++i) {

        std::cin >> n1 >> n2 >> n3;

        HanXin hx;  //韩信

        hx.line3(n1);  //3人一排

        hx.line5(n2);   //5人一排

        hx.line7(n3);   //7人一排

        hx.showMany();

    }

}

