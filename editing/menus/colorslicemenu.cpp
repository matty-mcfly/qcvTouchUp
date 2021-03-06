#include "colorslicemenu.h"
#include "ui_colorslicemenu.h"
#include "mousewheeleatereventfilter.h"
#include "focusindetectoreventfilter.h"
#include <QButtonGroup>
#include <QBitmap>
#include <QImage>

ColorSliceMenu::ColorSliceMenu(QWidget *parent) :
    QScrollArea(parent),
    ui(new Ui::ColorSliceMenu)
{
    ui->setupUi(this);
    MouseWheelEaterEventFilter *wheelFilter = new MouseWheelEaterEventFilter(this);
    FocusInDetectorEventFilter *brushFocusFilter = new FocusInDetectorEventFilter(this);
    FocusInDetectorEventFilter *wandFocusFilter = new FocusInDetectorEventFilter(this);

    imageMask_m = nullptr;

    //fix radio buttons to work in separate group boxes (for asthetics)
    buttonGroup_m = new QButtonGroup(this);
    buttonGroup_m->addButton(ui->radioButton_EnableBrush);
    buttonGroup_m->addButton(ui->radioButton_EnableWand);

    //setup colorslicemenu options
    //focus in should be a signal from the widget

    //setup brush options
    ui->spinBox_Brush->installEventFilter(wheelFilter);
    ui->horizontalSlider_Brush->installEventFilter(wheelFilter);
    ui->spinBox_Brush->installEventFilter(brushFocusFilter);
    ui->horizontalSlider_Brush->installEventFilter(brushFocusFilter);

    //setup wand options
    ui->spinBox_Wand->installEventFilter(wheelFilter);
    ui->horizontalSlider_Wand->installEventFilter(wheelFilter);
    ui->spinBox_Wand->installEventFilter(wandFocusFilter);
    ui->horizontalSlider_Wand->installEventFilter(wandFocusFilter);
}

//autogenerated destructor
ColorSliceMenu::~ColorSliceMenu()
{
    delete ui;
}

void ColorSliceMenu::initializeMenu()
{

}

//stores a pointer to the image that is loaded for image data needed by this object. For external use only.
void ColorSliceMenu::setImageReference(const QImage *image)
{
    imageReference_m = image;
}

void ColorSliceMenu::receiveCoordinate(QPoint clickCenterPoint)
{

}

void ColorSliceMenu::selectNeighborsOfPoint(int hueVariance)
{

}

void ColorSliceMenu::checkAndUpdateOverlayState()
{

}

void ColorSliceMenu::generateBrushCursor()
{
    QBitmap(ui->spinBox_Brush->value(), ui->spinBox_Brush->value());

}
