#ifndef ANKETA_H
#define ANKETA_H
#include <QtGui>
class anketa:public QWidget {

        Q_OBJECT
public:
    explicit anketa(QWidget *parent = 0);
    virtual ~anketa();
    int age,sports,height;
    double weight;
    bool lifestyle;
public slots:

private slots:
    void process_data();
private:
    QGridLayout *lay;
    QSpinBox *bxAge,*bxSport,*bxHeight;
    QDoubleSpinBox *bxMass;
    QComboBox *bxCoachPotato,*bxAllergy;
    QLabel *l1,*l2,*l3,*l4,*l5,*l6,*title;
    QPushButton *bEnter;
};
#endif // ANKETA_H

