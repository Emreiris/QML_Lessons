#include <QGuiApplication>
#include <QQmlApplicationEngine>

/* Change this number to build desired application. */
constexpr size_t LESSON_NUM = 1;

int main(int argc, char *argv[])
{

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/lesson_%1.qml").arg(LESSON_NUM));
    engine.load(url);

    return app.exec();
}
