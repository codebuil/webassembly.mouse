int xxx=0;
int yyy=0;
int www=0;
int hhh=0;
int bbb=0;
int xx=0;
int yy=0;
void setRect(int x,int y,int w, int h){
    xxx=x;
    yyy=y;
    www=w;
    hhh=h;
}
void setMousePos(int x,int y,int b){
    xx=x;
    yy=y;
    bbb=b;
}
int getMouseClick(){
    if(xx>xxx && xx<xxx+www && yy>yyy && yy<yyy+hhh) return 1;
    return 0;
}