#ifndef SIMPLE_H
#define SIMPLE_H

#include <QDialog>
#include "simpleBuilding.h"

namespace Ui {
class simple;
}

class simple : public QDialog
{
    Q_OBJECT

public:
    explicit simple(QWidget *parent = nullptr);
    ~simple();
    int compute(bool with_giu = false, int p = 0);
    struct profile_result {
        int p;
        size_t memory_used;
        double time_elapsed;
    };
    profile_result run_profiler(int p);
    void write_profile_in_file();
    bool is_prime(int n);

private slots:
    void on_pushButton_clicked();

private:
    Ui::simple *ui;
    simpleBuilding add;
    simpleBuilding multi;
    simpleBuilding substac;
    simpleBuilding div;

};

#endif // SIMPLE_H
