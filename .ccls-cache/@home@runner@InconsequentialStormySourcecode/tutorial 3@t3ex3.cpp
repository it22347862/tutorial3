#include <iostream>


struct {
	
	int length;
	int width;
	int height;

	
	
}box1,box2;

int totalvolume(int length,int width,int height);
using namespace std;

int main (){
	
	int total;
	
	cout<<"enter box 1 length :";
	cin>>box1.length;
	cout<<"enter box 1 width :";
	cin>>box1.width;
	cout<<"enter box 1 height :";
	cin>>box1.height;
	
	cout<<endl;
	
	cout<<"enter box 2 length :";
	cin>>box2.length;
	cout<<"enter box 2 length :";
	cin>>box2.width;
	cout<<"enter box 2 height :";
	cin>>box2.height;
	
		cout<<endl;
	
	
	total=totalvolume(box1.length,box1.width,box1.height)+totalvolume(box2.length,box2.width,box2.height);
	cout<<"Total volume is :"<<total;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
int totalvolume(int length,int width,int height){
	
	int total;
	total=(length*width*height);
	return total;
};