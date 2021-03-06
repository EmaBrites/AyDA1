#ifndef PUNTO_H
#define PUNTO_H


class Punto
{
    public:
        Punto();
        Punto(float x,float y);
        float coordx() const;
        float coordY() const;
        float distancia(const Punto & otroPunto)const;
        bool operator==(const Punto & otroPunto)const;
        void modificarPunto(float x,float y);
        virtual ~Punto();

    protected:

    private:
        float x,y;
};

#endif // PUNTO_H
