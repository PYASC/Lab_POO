#ifndef SMART_PHONE_H
#define SMART_PHONE_H

#include "electronic.h"

#include <string>

class smart_phone : public electronic
{
protected:
    /// if more than threshold phones are sold -> discount
    const int threshold = INT_MAX;
public:
    smart_phone(const std::string& n, const std::string& desc, const int& nr, const double& p, int tre=0);
    virtual ~smart_phone();

    double sell(const int& nr);
    void supply(const int& nr);
    void present_product();
    double gen_bonus_income(const int& nr_hours=0);

};

#endif // SMART_PHONE_H