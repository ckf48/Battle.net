#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Battlenet.h"

class Battlenet : public QMainWindow
{
	Q_OBJECT

public:
	Battlenet(QWidget *parent = Q_NULLPTR);

private:
	Ui::BattlenetClass ui;
};
