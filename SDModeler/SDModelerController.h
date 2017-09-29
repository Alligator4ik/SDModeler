#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SDModelerController.h"

class SDModelerController : public QMainWindow
{
	Q_OBJECT

public:
	SDModelerController(QWidget *parent = Q_NULLPTR);

private:
	Ui::SDModelerControllerClass ui;
};
