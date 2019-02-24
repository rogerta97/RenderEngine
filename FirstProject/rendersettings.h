#ifndef RENDERSETTINGS_H
#define RENDERSETTINGS_H

#include <QWidget>

namespace Ui {
class RenderSettings;
}

class RenderSettings : public QWidget
{
    Q_OBJECT

public:
    explicit RenderSettings(QWidget *parent = nullptr);
    ~RenderSettings();

private:
    Ui::RenderSettings *ui;
};

#endif // RENDERSETTINGS_H
