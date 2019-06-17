#include<iostream>
#include<cstring>
using namespace std;
class Table
{
	private:
		int x,y,z;
		string str;
	public:
		Table(int x,int y){
            this x->x;
            this y->y;
        }
		
		void show(){
            cout<<x<<" "<<y<<endl;
        }
		
		void set(int x,int y,int z){
            	this->x=x;
	            this->y=y;
	            this->z=z; 
        }
		void set(int x,int y,string s){
            	this->x=x;
	            this->y=y;
	            str=s; 
        }
		
		void addRow(){
            x++;
        };
		void addColumn(){
            y++;
        };
		void delRow(int m){
            x=x-m;
        }
		void delColumn(int n){
            y=y-n;
        }
		~Table();
}; 
int main() {
  Table tb;
  tb.show();
  tb.addRow();
  tb.show();
  tb.addColumn();
  tb.show();
  Table tb1(5,5);
  tb1.show();
  tb1.set(1,1,30);
  tb1.set(2,2,"hello");
  tb1.show();
  tb1.delRow(1);
  tb1.show();
  tb1.delColumn(1);
  tb1.show();
  return 0;
}
