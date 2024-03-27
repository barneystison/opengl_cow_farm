#ifndef MYQGLWIDGET_H
#define MYQGLWIDGET_H

#include <QGLWidget>
#include <GL/glu.h>
class MyQGLWidget : public QGLWidget
{
    Q_OBJECT
public:
    explicit MyQGLWidget(QWidget *parent = nullptr);
    GLuint texGround,thelist[10],texMercator,texCow,texMarc,texmarkus;
    GLUquadricObj* ground,*cow,*common_obj;
    GLfloat  m_scale,m_trans,m_rota, eyey,eyer,eye,bellAngle,bellSpeed,angle,legAngle,legSpeed,cowAngle,cowSpeed,cowRadius;
    int lightflag;

public:
    void setEnv();
    void drawCow(GLfloat position_x,GLfloat position_y,GLfloat position_z,GLfloat scale,GLfloat speed);
    void drawFence1();
    void drawCubebyPolygons(GLfloat position_x,GLfloat position_y,GLfloat position_z,GLfloat scale);
    void drawBillboard(GLfloat position_x,GLfloat position_y,GLfloat position_z,GLfloat scale,GLuint texture);
    void drawFence();
    void loadTexture();
    void timereven();
    void drawWindmill(GLfloat position_x,GLfloat position_y,GLfloat position_z,GLfloat scale);
    void drawCloud(GLfloat position_x,GLfloat position_y,GLfloat position_z,GLfloat scale);
    void drawSun(GLfloat position_x,GLfloat position_y,GLfloat position_z,GLfloat scale);
protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

signals:

};

#endif // MYQGLWIDGET_H
