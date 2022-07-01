#ifndef GVF_TRAJ_ELLIPSE_H
#define GVF_TRAJ_ELLIPSE_H

#include "gvf_trajectory.h"

class GVF_traj_ellipse : public GVF_trajectory
{
    Q_OBJECT
public:
    GVF_traj_ellipse(QString id, Point2DLatLon origin, QList<float> param, int8_t _s, float _ke, QList<float> gvf_settings);

private:
    float a;
    float b;
    float alpha;
    int8_t s;
    float ke;

    void param_points();
    void vector_field();
};

#endif // GVF_TRAJ_ELLIPSE_H