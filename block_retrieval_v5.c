#include <kipr/botball.h>
void movetiny(void)
{
   
    
    mav(2,250);
    mav(3,250);
    msleep(500);
    ao();
}
void move4in(void)
{
    printf("Your alive ACHDS");
    printf("Doing nothing4in.\n");
   
    camera_open_black();      
    
    
    mav(2,250);
    mav(3,250);
    msleep(1500);
    ao();
} 
void movelittleb(void)
{
    mav(2,-250);
    mav(3,-250);
    msleep(900);
    ao();
    msleep(1000);
} 
void movelittle(void)
{
    mav(2,250);
    mav(3,250);
    msleep(900);
    ao();
    msleep(1000);
} 
void moveccw(void)
{
    //  45 ccw
    mav(2,270);
    mav(3,-270);
    msleep(1650);
    
    ao();
}
    void movecw(void)
{
  mav(2,-270);
    mav(3,270);
    msleep(1650);
        ao();

}
 void moveback(void)
{
      mav(2,-250);
    mav(3,-250);
    msleep(1550);
    ao();
     
 }


int main()
{
    int close_cnt = 0;
    printf("Hello World\n");
    printf("Show Me Going");
    
    //move arm up
    enable_servo (2);
    set_servo_position (2,200);
    //open servo
     {    
       enable_servos(0);
            set_servo_position (0,1000); 
            set_servo_position (0,1200);
   }
    
      //         move  forward until end of start box
                move4in(); move4in(); move4in();
    //turn 90         
    moveccw();  moveccw();
           // move until a little b4 firetruck
                  move4in(); move4in(); move4in(); move4in(); move4in(); move4in(); move4in(); move4in(); 
  
    
    
             {
          //move servo down
                 enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
             }
     move4in();
   //turn to move firetruck away
    moveccw();movecw();
   //move close to firepole
    move4in();move4in();
            
  
  
      //      move until fire pole 
                 move4in();move4in();move4in();movelittle();movetiny();movetiny();

set_servo_position (0,800); 
            set_servo_position (0,600);
//start copying 
  //drop block away
    moveback(); moveback();movelittleb(); movecw();movecw();move4in();move4in();
move4in();move4in();move4in();movelittle();movetiny();move4in();movetiny();
      {
          //move servo up
                 enable_servos(2);
                  
            set_servo_position (2,900);
             }
 
//stop copying here

    //turn to ditect fire
    moveccw();moveccw();
    //moveback
    moveback();moveback();
    //insert camera code here
    
    //if med 1 is on fire
    //move arm up
    enable_servo (2);
    set_servo_position (2,200);
    move4in();move4in();move4in();movelittle();movetiny();
      //open servo
     {    
       enable_servos(0);
            set_servo_position (0,1000); 
            set_servo_position (0,1200);
   }
    moveback();moveback();moveback();
    
   while(1)
   {
    if(digital(4)==1)
        {
        printf("switch closed \n");
            printf("closes = %d \n", close_cnt);

// move4in();  code
            

     //        if ((close_cnt >1) && (close_cnt < 3 ))
             {
            enable_servos(2);
                  set_servo_position (2,800);
            set_servo_position (2,950);
             }
            
  // if ((close_cnt >20) && (close_cnt < 22 ))   
   {    
       enable_servos(0);
            set_servo_position (0,800); 
            set_servo_position (0,1000);
   }
      //       if ((close_cnt >22) && (close_cnt < 25 )) 
                 move4in();move4in();movelittle();
           //   if ((close_cnt >24) && (close_cnt < 26 ))   
   {    
       
            set_servo_position (0,800); 
            set_servo_position (0,600);
              }
      //       if ((close_cnt >25) && (close_cnt < 27) )
                moveback();
        
        close_cnt++;
        }
       msleep(150);
       printf("closes = %d \n", close_cnt);
   	   camera_close();
  	   
   }
    
    return 0;
}


