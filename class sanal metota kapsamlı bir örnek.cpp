    #include <iostream>
class Silah{
	public:
		int NamluBoyu;
		bool SeriTek;
	virtual void ates(){
	}
};

class Ak47 : public Silah{
	public:
		bool Sungu;
	void ates(){
		std::cout<<"tak tak tak";		
	}
};

class M1 : public Silah{
	public:
		bool Kur;
	void ates(){
		std::cout<<"tarrrr tarrr";
	}
};

 void AtesEt(Silah* silahptr){
	silahptr->ates();
}



    using namespace std;
    int main ()
    {
	class Silah silah;
	class Ak47 ak47;
	class M1 m1;
	std::cout<<"Silah seç 1=ak47,2=m1";
	int c;
	std::cin>>c;
	ak47.NamluBoyu=100;
	m1.NamluBoyu=350;
	if(c==1){
		std::cout<<"Namlu Boyu = "<<ak47.NamluBoyu<<std::endl;
		std::cout<<"Ates etmek icin b ye basiniz";
		char e;
		std::cin>>e;
			if(e=='b'){
				AtesEt(&ak47);
			}
	}    
	else if(c==2){
		std::cout<<"Namlu Boyu = "<<m1.NamluBoyu<<std::endl;
		std::cout<<"Ates etmek icin b ye basiniz";
		char g;
		std::cin>>g;
			if(g=='b'){
				AtesEt(&m1);
			}
	}
        return 0;
    }
