#include "SDModelerController.h"
#include <cmath>

#define H 6.63*pow(10, -3)
#define C 3*pow(10,8)

#define concentration concentrationStandartForm*pow(10,23)

SDModelerController::SDModelerController(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	cuvetteThickness			= this->ui.cuvetteThicknessSpinBox->value() * pow(10, -3);
	lambda						= this->ui.lambdaSpinBox->value() * pow(10, -9);
	ringWidth					= this->ui.ringWidthSpinBox->value() * pow(10, -6);
	concentrationStandartForm	= this->ui.concentrationSlider->value();
	energyOfImp					= this->ui.energyOfImpSlider->value() * pow(10, -5);
	widthOnHalf					= this->ui.widthOnHalfSlider->value() * pow(10, -5);

	//настроим график
	ui.qcp->xAxis->setRange(QCPRange(-0.005, 0.005));
	ui.qcp->yAxis->setRange(QCPRange(-pow(10, 13), pow(10, 13)));

	calculateRadiusOfTheDiaphragm();
}

void SDModelerController::calculateRadiusOfTheDiaphragm() {
	makeGraphicalCalc();
	ui.qcp->replot();
}

void SDModelerController::makeGraphicalCalc() {
	ui.qcp->clearGraphs();
	ui.qcp->addGraph(); //for N_QD(r)
	ui.qcp->addGraph();	//for N_phot(r)
	//линейная часть N_QD(r)
	QVector<double> r(100001), N_QD(100001), N_phot(100001);
	uint32_t i = 0;
	for (auto ri = -0.005; ri <= 0.005; ri+=0.0000001) {
		r[i] = ri;
		N_QD[i] = 2 * concentrationStandartForm*cuvetteThickness*ri*ringWidth*pow(10, 23);
		auto exp1 = exp(-2 * pow(ri / widthOnHalf, 2));
		auto exp2 = exp(-2 * pow((ri + ringWidth) / widthOnHalf, 2));
		N_phot[i] = energyOfImp*lambda*(exp1 - exp2) / (pow(2*M_PI,0.5)*H*C);
		i++;
	}
	//ui.qcp->graph(0)->setData(r, N_QD);
	ui.qcp->graph(1)->setData(r, N_phot);
}

void SDModelerController::cuvetteChanged(int newValue) {
	cuvetteThickness = newValue * pow(10, -3);
	calculateRadiusOfTheDiaphragm();
}

void SDModelerController::lambdaChanged(int newValue) {
	lambda = newValue * pow(10, -9);
	calculateRadiusOfTheDiaphragm();
}

void SDModelerController::ringWidthChanged(int newValue) {
	ringWidth = newValue * pow(10, -6);
	calculateRadiusOfTheDiaphragm();
}

void SDModelerController::concentrationChanged(int newValue) {
	concentrationStandartForm = newValue;
	calculateRadiusOfTheDiaphragm();
}

void SDModelerController::energyChanged(int newValue) {
	energyOfImp = newValue * pow(10, -5);
	calculateRadiusOfTheDiaphragm();
}

void SDModelerController::widthChanged(int newValue) {
	widthOnHalf = newValue * pow(10, -4);
	calculateRadiusOfTheDiaphragm();
}
