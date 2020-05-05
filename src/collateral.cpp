#include <amount.h>
#include <util.h>

CAmount CollateralRequired()
{
    const CAmount nCollateralRequired = 20000 * COIN;
    return nCollateralRequired;
}