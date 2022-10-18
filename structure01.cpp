#include<stdio.h>

main () {
	int i,a,Maxy,Maxm,Maxd,y1,y2;
  struct date {
    int day;
    int month;
    int year;
  };
  struct student {
    int std_id;
    char std_name[40];
    struct date std_birth;
    struct date std_checkin;
    int room;
  };

  typedef struct student STD;
  STD stdrecord[5] = { {10001, "Chris Hemsworth" ,11, 12, 2552, 3 ,5 ,2560, 4} ,
                       {10002, "Tom Cruise" ,3 ,4 ,2552 ,6 ,5 ,2555, 4},
                       {10003, "Taylor Swift" ,13 ,12, 2552, 1 ,5, 2560, 2},
                       {10004, "Hugh Grant", 9 ,9 ,2551, 1 ,5, 2560, 1},
                       {10005, "Kristen Stewart", 9 ,4, 2552 ,7 ,5 ,2560, 1} };
    
    Maxy=0;
    Maxm=0;
    Maxd=0;

   for(i=0;i<5;i++) {
   	if(stdrecord[i].std_checkin.year>=Maxy) 
   		Maxy=stdrecord[i].std_checkin.year;	
   }
   for(i=0;i<5;i++) {
   	if(stdrecord[i].std_checkin.month>=Maxm) 
   		Maxm=stdrecord[i].std_checkin.month;	
   }
   for(i=0;i<5;i++) {
   	if(stdrecord[i].std_checkin.day>=Maxd) 
   		Maxd=stdrecord[i].std_checkin.day;	
   }
   
   for(i=0;i<5;i++) {
   	if(stdrecord[i].std_checkin.year==Maxy&&stdrecord[i].std_checkin.month==Maxm&&stdrecord[i].std_checkin.day==Maxd)
   	printf("the last student is %s",stdrecord[i].std_name);
   }
   
}

