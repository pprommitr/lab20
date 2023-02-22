#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect d1,Rect d2 ){
     double overlab_wide, overlab_high;
	 overlab_wide = min(d1.x+d1.w, d2.x+d2.w) - max(d1.x, d2.x); 
     overlab_high = min(d1.y, d2.y) - max(d1.y - d1.h, d2.y - d2.h);
	 if(overlab_wide < 0 || overlab_high < 0){
		return 0;
	 }
       return overlab_wide * overlab_high;
}
