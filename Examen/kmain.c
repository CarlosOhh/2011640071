/* Global Variables */
/*
int prom;
//int *arg1;
int r1;
//int *arg2;
int r2;
//int *arg3;
int r3;

void myfunction(void){
prom = (r1 + r2 + r3)/3;
return;
}

int sum_of_three(int arg1,int arg2,int arg3)
{
r1 = arg1;
r2 = arg2;
r3 = arg3;
myfunction();
return prom;
}

struct example {
	unsigned char config;	// bit 0 - 7 20
	unsigned short address; // bit 8 - 23
	unsigned char index;	// bit 24 - 31
} __attribute__((packed));
*/

/* Option 1 */
/*
int prom1;
int prom2;
int arg1;
int arg2;
int arg3;

void myfunction(void){
prom1 = (arg1 + arg2 + arg3)/3;
return;
}

int sum_of_three(int *arg1,int *arg2,int *arg3)
{
myfunction();
prom2 = (*arg1 + *arg2 + *arg3)/3;
//arg1 = *arg1;
//arg2 = *arg2;
//arg3 = *arg3;
return prom2;
}

struct example {
        unsigned char config;   // bit 0 - 7 20
        unsigned short address; // bit 8 - 23
        unsigned char index;    // bit 24 - 31
} __attribute__((packed));
*/

/* Option 2 with gloabal variable*/
/*
int prom1;

void examen(int *arg1,int *arg2,int *arg3)	//Prototype
{
prom1 = (*arg1 + *arg2 + *arg3)/3;			//Get the value in the direction received
return;
}

int sum_of_three(int arg1,int arg2,int arg3)
{
examen(&arg1, &arg2, &arg3);			//The number direction is shared
return prom1;					//Send back the promedy of the three numbers received
}

struct example {
        unsigned char config;   // bit 0 - 7 20
        unsigned short address; // bit 8 - 23
        unsigned char index;    // bit 24 - 31
} __attribute__((packed));
*/

/*Option without a global variable*/
/*
int sum_of_three(int arg1,int arg2,int arg3, int *dir)
{
int cdir;					//Local Variable
*dir = (arg1 + arg2 + arg3)/3;                   //Get the value in the direction received
cdir = *dir;
return cdir;                                     //Send back the promedy of the three numbers received
}

struct example {
        unsigned char config;   // bit 0 - 7 20
        unsigned short address; // bit 8 - 23
        unsigned char index;    // bit 24 - 31
} __attribute__((packed));
*/

/* Option X*/
//int prom1;

void examen(int arg1,int arg2,int arg3, int *dir)      //Prototype
{
*dir = (arg1 + arg2 + arg3)/3;                      //Get the value in the direction received
//prom1 = (*arg1 + *arg2 + *arg3)/3;                      //Get the value in the direction received
return;
}

int sum_of_three(int arg1,int arg2,int arg3)
{
int dir;
examen(arg1, arg2, arg3, &dir);                    //The number direction is shared
return dir;                                   //Send back the promedy of the three numbers received
}

struct example {
        unsigned char config;   // bit 0 - 7 20
        unsigned short address; // bit 8 - 23
        unsigned char index;    // bit 24 - 31
} __attribute__((packed));

//Como checar el contenido de las variables, quiza sea la dirección o el contenido de la variable en el box.log
