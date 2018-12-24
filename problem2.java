public class problem2{
public static void main(String[] args){
int x,y,z;long int sum=0;
x=1;
y=2;
while(x<4000000){
if(x%2==0){
sum+=x;
z=x+y;
x=y;
y=z;}
              }
              System.out.println(sum);
                                }
                   }
