#ifndef UI_DISPATCHER_H
#define UI_DISPATCHER_H

#include <QObject>
#include "waypoint.h"
#include "point2dlatlon.h"
#include "PprzToolbox.h"
#include "PprzApplication.h"

class Setting;

class DispatcherUi : public PprzTool
{
    Q_OBJECT

public:
    explicit DispatcherUi(PprzApplication* app, PprzToolbox* toolbox);
    static DispatcherUi* get() {
        return pprzApp()->toolbox()->dispatcherUi();
    }

    QString getSelectedAcId() { return selected_ac_id;}

signals:
    void ac_selected(QString);
    void ac_deleted(QString);
    void new_ac_config(QString);
    void move_waypoint_ui(Waypoint*, QString ac_id);   //wp moved from UI
    void settingUpdated(QString ac_id, Setting*, float value);
    void showHiddenWaypoints(bool show);
    void mapRotated(double);    // map view rotation in degrees
    //void create_waypoint(Waypoint*);

public slots:

private:
    QString selected_ac_id;

};

#endif // UI_DISPATCHER_H
