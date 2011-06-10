#include "anketa.h"

anketa::anketa(QWidget *parent): QWidget(parent){
    lay = new QGridLayout;
    this->setLayout(lay);
    bxAge = new QSpinBox;
    bxAge->setMinimum(18);
    bxAge->setMaximum(99);
    bxHeight = new QSpinBox;
    bxHeight->setMaximum(300);
    bxSport = new QSpinBox;
    bxSport->setMaximum(7);
    bxMass = new QDoubleSpinBox;
    bxMass->setMaximum(300);
    bxCoachPotato = new QCheckBox;
    bxCoachPotato->setText(tr("Are you a coach potato?"));
    bxAllergy = new QCheckBox;
    bxAllergy->setText(tr("Allergy:"));
    l1 = new QLabel;
    l1->setText(tr("Age, years:"));
    l2 = new QLabel;
    l2->setText(tr("Height, cm:"));
    l3 = new QLabel;
    l3->setText(tr("Weight, kg:"));
    l4 = new QLabel;
    l4->setText(tr("Sport activities, times in a week:"));
    lay->addWidget(l1,0,0,1,1);
    lay->addWidget(bxAge,0,1,1,1);
    lay->addWidget(l2,1,0,1,1);
    lay->addWidget(bxHeight,1,1,1,1);
    lay->addWidget(l3,2,0,1,1);
    lay->addWidget(bxMass,2,1,1,1);
    lay->addWidget(l4,3,0,1,1);
    lay->addWidget(bxSport,3,1,1,1);
    lay->addWidget(bxCoachPotato,4,0,1,2);
    lay->addWidget(bxAllergy,5,0,1,2);
}
anketa::~anketa(){}

