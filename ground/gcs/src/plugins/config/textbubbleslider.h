/**
******************************************************************************
*
* @file       textbubbleslider.h
* @author     Tau Labs, http://taulabs.org Copyright (C) 2013.
* @brief      Creates a slider with a text bubble showing the slider value
* @see        The GNU Public License (GPL) Version 3
* @defgroup   Config
* @{
*
*****************************************************************************/
/*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful, but
* WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
* or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
* for more details.
*
* You should have received a copy of the GNU General Public License along
* with this program; if not, see <http://www.gnu.org/licenses/>
*/

#ifndef TEXTBUBBLESLIDER_H
#define TEXTBUBBLESLIDER_H

#include <QSlider>

class TextBubbleSlider : public QSlider
{
    Q_OBJECT

public:
    explicit TextBubbleSlider(QWidget *parent = 0);
    explicit TextBubbleSlider(QSlider *, QWidget *parent = 0);
    void construct();
    ~TextBubbleSlider();

    void setMinimum(int);
    void setMaximum(int);
    void setHidden(bool);

public slots:
    void setIndicatorValue(int us);

protected:
    void paintEvent ( QPaintEvent * event );
    qreal sliderPosFromValue(const int val);

private:
    void setMaxPixelWidth();

    QFont font;
    int maximumFontWidth;
    int maximumFontHeight;
    int slideHandleWidth;
    int slideHandleMargin;
    bool hidden;
    int indicatorValue;
};

#endif // TEXTBUBBLESLIDER_H
