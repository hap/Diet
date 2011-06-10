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
    bxSport->setMaximum(21);
    bxMass = new QDoubleSpinBox;
    bxMass->setMinimum(25);
    bxMass->setMaximum(300);
    bxCoachPotato = new QComboBox;
    bxCoachPotato->addItem(tr("Active"),QVariant(1));
    bxCoachPotato->addItem(tr("Inactive"),QVariant(0));
    //bxCoachPotato->setText(tr("Are you a coach potato?"));
    // Переделать список с аллергией.
    bxAllergy = new QComboBox;
    bxAllergy->addItem(tr("Fish"),QVariant(1));
    bxAllergy->addItem(tr("Oranges"),QVariant(2));
    //bxAllergy->setText(tr(" have some allergy"));
    title = new QLabel;
    title->setText(tr("Please, enter information about you:"));
    l1 = new QLabel;
    l1->setText(tr("Age, years:"));
    l2 = new QLabel;
    l2->setText(tr("Height, cm:"));
    l3 = new QLabel;
    l3->setText(tr("Weight, kg:"));
    l4 = new QLabel;
    l4->setText(tr("Sport activities, times in a week:"));
    l5 = new QLabel;
    l5->setText(tr("You are:"));
    l6 = new QLabel;
    l6->setText(tr("What products are you cannot stand:"));
    bEnter = new QPushButton;
    bEnter->setText(tr("Next"));
    QObject::connect(bEnter,SIGNAL(clicked()),this,SLOT(process_data()));
    lay->addWidget(title,0,0,1,2);
    lay->addWidget(l1,1,0,1,1);
    lay->addWidget(bxAge,1,1,1,1);
    lay->addWidget(l2,2,0,1,1);
    lay->addWidget(bxHeight,2,1,1,1);
    lay->addWidget(l3,3,0,1,1);
    lay->addWidget(bxMass,3,1,1,1);
    lay->addWidget(l4,4,0,1,1);
    lay->addWidget(bxSport,4,1,1,1);
    lay->addWidget(l5,5,0,1,1);
    lay->addWidget(bxCoachPotato,5,1,1,1);
    lay->addWidget(l6,6,0,1,1);
    lay->addWidget(bxAllergy,6,1,1,1);
    lay->addWidget(bEnter,7,1,1,1);
}
anketa::~anketa(){}
void anketa::process_data(){
    lifestyle=false;
    age = bxAge->value();
    height = bxHeight->value();
    weight = bxMass->value();
    sports = bxSport->value();
    if (bxCoachPotato->currentIndex()==0){lifestyle=true;} else {lifestyle=false;}
    qDebug()<<"Vars was inited:"<<endl<<"Age: "<<age<<endl<<"Height: "<<height<<endl<<"Weight: "<<weight<<endl<<"Sports: "<<sports<<endl<<"Active: "<<lifestyle<<endl;
}

