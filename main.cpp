#include <SFML/Graphics.hpp>
 
using namespace sf;
 
int main()
{
 // ������, �������, ����������, �������� ������� ����� ����������
 RenderWindow window(VideoMode(800, 600), "SFML Works!");


 RectangleShape rect(Vector2f(20, 80));
 RectangleShape rect1(Vector2f(20, 80));

 CircleShape circle(30.f);
 circle.setPosition(370, 300);


 Texture textur2;
 textur2.loadFromFile("luntik1.jpg_large");
 circle.setTexture(&textur2);

 rect.setPosition(50, 300);
 rect1.setPosition(730, 300);

 rect.setOutlineThickness(1);
 rect.setOutlineColor(Color::Blue);
 rect1.setOutlineThickness(1);
 rect1.setOutlineColor(Color::Blue);

 Texture textur;
 textur.loadFromFile("stena.jpg");
 rect.setTexture(&textur);

 Texture textur1;
 textur1.loadFromFile("stena1.jpg");
 rect1.setTexture(&textur1);
 // ������� ���� ����������. �����������, ���� ������� ����
 while (window.isOpen())
 {
	
  // ������������ ������� ������� � �����
  Event event;
  while (window.pollEvent(event))
  {
   // ������������ ����� �� �������� � ����� ������� ����?
   if (event.type == Event::Closed)
    // ����� ��������� ���
    window.close();
  }
 // ��������� ���� 
  window.draw(rect);
  window.draw(rect1);
 window.display();
 window.draw(circle);
 }
 
 return 0;
}