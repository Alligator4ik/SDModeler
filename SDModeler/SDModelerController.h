#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SDModelerController.h"
#include "qcustomplot.h"

class SDModelerController : public QMainWindow
{
	Q_OBJECT

public:
	SDModelerController(QWidget *parent = Q_NULLPTR);
	 
private:
	Ui::SDModelerControllerClass ui;

	//здесь данные храним уже переведенными в СИ
	double_t	cuvetteThickness;
	double_t	lambda;
	double_t	ringWidth;
	uint16_t	concentrationStandartForm; //хранится в стандартном виде
	double_t	energyOfImp;
	float_t		widthOnHalf;
	double_t	diaphragmRadius;

	void		calculateRadiusOfTheDiaphragm();
	void		makeGraphicalCalc();

private slots:
	void		cuvetteChanged(int newValue);
	void		lambdaChanged(int newValue);
	void		ringWidthChanged(int newValue);
	void		concentrationChanged(int newValue);
	void		energyChanged(int newValue);
	void		widthChanged(int newValue);
};
