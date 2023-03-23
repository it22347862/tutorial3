#include <iostream>


int volume (int height,int width,int length);

using namespace std;
int main (){
	
	int box1heighst,box1length,box1width;
	int box2heighst,box2length,box2width;
	int box3heighst,box3length,box3width;
	int totalvolume;
		
	cout<<"enter box 1 height :";
	cin>>box1heighst;
	cout<<"enter box 1 length :";
	cin>>box1length;
	cout<<"enter box 1 width:";
	cin>>box1width;
	
	cout<<endl;
	
	
	cout<<"enter box 2 height :";
	cin>>box2heighst;
	cout<<"enter box 2 length :";
	cin>>box2length;
	cout<<"enter box 2 width:";
	cin>>box2width;
	
		cout<<endl;
		
	cout<<"enter box 3 height :";
	cin>>box3heighst;
	cout<<"enter box 3 length :";
	cin>>box3length;
	cout<<"enter box 3 width:";
	cin>>box3width;
	
	
		cout<<endl;
	
	
	totalvolume=volume(box1heighst,box1length,box1width)+volume(box2heighst,box2length,box2width);
	
	cout<<"total volume is :"<<	totalvolume;
	
	
	
	
	
}

int volume (int height,int width,int length){
	int total;
	total=(height+ width+ length);
	return total;
	
};