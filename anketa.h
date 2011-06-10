#ifndef ANKETA_H
#define ANKETA_H
#include <QtGui>
class anketa:public QWidget {

        Q_OBJECT
public:
    explicit anketa(QWidget *parent = 0);
    virtual ~anketa();
public slots:

private slots:

private:
    QGridLayout *lay;
    QSpinBox *bxAge,*bxSport,*bxHeight;
    QDoubleSpinBox *bxMass;
    QCheckBox *bxCoachPotato,*bxAllergy;
    QLabel *l1,*l2,*l3,*l4;
};
#endif // ANKETA_H

