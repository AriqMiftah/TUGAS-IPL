#include <iostream>


using namespace std;
int main()
{
I = imread('anime.jpg');
R = I(:,:,1);
G = I(:,:,2);
B = I(:,:,3);
Red = cat(3,R,G*0,B*0);
Green = cat(3,R*0,G,B*0);
Blue = cat(3,R*0,G*0,B);
 
figure, imshow(I);
figure, imshow(Red);
figure, imshow(Green);
figure, imshow(Blue);
return 0;
}
