
void move(char click,int i , int x)
{
    if(click== 77){
        i++;
        x++;
    }
    else if(click ==75){
        i--;
        x--;
    }
}
void delet(char *body)
{

    int j=0;
    while(*(body+j)!='\0'){
     *(body+j)=*(body+j+1);
     j++;
    }

}
void edit (char *body,char click,int i , int x)
{

     *body=click;
     i++;
     x++;
}
void home(char click,int i)
{
    if(click == 71)
        gotoxy(30,30);
        i=0;
}
void end(char click,int i)
{
    if(click == 79)
        gotoxy(130,30);
        i=size;
}

