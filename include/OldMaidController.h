#include <vector>
#include <algorithm>

#include "OldMaidView.h"
#include "OldMaidModel.h"

#ifndef OLDMAIDCONTROLLER_H
#define OLDMAIDCONTROLLER_H

using namespace std;

class OldMaidController
{
    public:
        OldMaidController(const OldMaid model, const OldMaidView view) {
            this->setModel(model);
            this->setView(view);
        };
        ~OldMaidController() {};

        void setModel(const OldMaid model) {
            this->model = model;
        };
        void setView(const OldMaidView view) {
            this->view = view;
        };
        OldMaidView getview() {
            return view;
        };
        void oldMaidGameLoop();
        void oldMaidMenu();
        void initOldMaid();
        void shuffleAndDeal();

    protected:

    private:
        OldMaid model;
        OldMaidView view;
};

#endif // OLDMAIDCONTROLLER_H
