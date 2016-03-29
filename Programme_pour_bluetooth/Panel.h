#ifndef PANEL_H
#define PANEL_H


class Panel
{
    public:
        Panel();
        virtual ~Panel();
        void allOn();
        void allOff();
        void ledOn(int x, int y);
    protected:
    private:
};

#endif // PANEL_H
