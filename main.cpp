#include <QApplication>
#include "match.h"

int main(int argc, char *argv[]) {

  QApplication app(argc, argv);

  Match window;

  window.resize(300, 400);
  window.setWindowTitle("Breakout");
  window.show();

  return app.exec();
}
/*
QImage разработан и оптимизирован для ввода-вывода и для прямого доступа к пикселям и манипулирования ими
QRect Прямоугольник обычно выражается как верхний левый угол и размер. Размер (ширина и высота) QRect всегда эквивалентен математическому прямоугольнику, который формирует основу для его рендеринга.
QApplication специализирует QGuiApplication с некоторыми функциями, необходимыми для приложений на основе QWidget . Это обрабатывает специфическую инициализацию виджета, завершение.
Класс QWidget является базовым классом всех объектов пользовательского интерфейса.(Виджет является атомом пользовательского интерфейса: он получает мышь, клавиатуру и другие события из оконной системы и отображает свое представление на экране.
Каждый виджет прямоугольный, и они отсортированы в Z-порядке. Виджет обрезается его родителем и виджетами перед ним.)
Класс QPaintEvent
Класс QPaintEvent содержит параметры событий для событий рисования.
Класс QString предоставляет строку символов Unicode.
Класс QFontMetrics предоставляет информацию о метриках шрифта.
Класс QTimerEvent содержит параметры, которые описывают событие таймера.
Q_UNUSED ( имя )
Указывает компилятору, что параметр с указанным именем не используется в теле функции. Это может использоваться для подавления предупреждений компилятора, позволяя определять функции с осмысленными именами параметров в их сигнатурах.
*/