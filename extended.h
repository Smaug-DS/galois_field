#ifndef EXTENDED_H
#define EXTENDED_H

#include <QDialog>
#include <vector>
#include "extendedBuilding.h"

namespace Ui {
class extended;
}

class extended : public QDialog
{
    Q_OBJECT

public:
    explicit extended(QWidget *parent = nullptr);
    ~extended();
    void init_table(qint64 length, qint64 n);
    void fill_real_exp(qint64 length);
    void fill_poly_vector(qint64 n, std::vector<qint64>& result, qint64 counterForLoop);
    qint64 compute(bool with_gui = false, qint64 p = 0, qint64 n = 0);

    struct profile_result {
        qint64 p;
        qint64 n;
        qint64 memory_used;
        double time_elapsed;
    };
    profile_result run_profiler(qint64 p, qint64 n);
    void write_profile_in_file();

public:
    extendedBuilding len;
    extendedBuilding irred;

private slots:
    void on_pushButton_clicked();

private:
    Ui::extended *ui;
};

#endif // EXTENDED_H
