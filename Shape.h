#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
    public:
        Shape();
        virtual ~Shape();
        int [3] Getcolor;() { return color;; }
        void Setcolor;(int [3] val) { color; = val; }
    protected:
    private:
        int [3] color;;

};

#endif // SHAPE_H
