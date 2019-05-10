#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <opencv2/core.hpp>
#include <QThread>
#include <QMutex>
#include <QDir>
class QImage;
class QString;
class AdjustMenu;
class FilterMenu;
class TemperatureMenu;
class TransformMenu;
class ColorSliceMenu;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QThread workerThread; //get rid of this

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

signals:
    void setImage(const QImage*);
    void distributeImageBufferAddresses(const cv::Mat*, cv::Mat*);
    void setDefaultTracking(bool);

protected:
    QMutex mutex_m;

private slots:
    void imageOpenOperationFailed();
    void updateImageInformation(const QImage *image);
    void initializeWorkerThreadData();
    void updateHistogram();
    void getImagePath();
    void loadHistogramTool();
    void cancelPreview();
    void applyPreviewToMaster();
    void displayPreview();
    bool loadImageIntoMemory(QString imagePath);

private:
    void clearImageBuffers();
    Ui::MainWindow *ui;
    QDir userImagePath_m;
    cv::Mat masterRGBImage_m;
    cv::Mat previewRGBImage_m;
    QImage imageWrapper_m;

    //menus
    AdjustMenu *adjustMenu_m;
    FilterMenu *filterMenu_m;
    TemperatureMenu *temperatureMenu_m;
    TransformMenu *transformMenu_m;
    ColorSliceMenu *colorSliceMenu_m;
};

#endif // MAINWINDOW_H
