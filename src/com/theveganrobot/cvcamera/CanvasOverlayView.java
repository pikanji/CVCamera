
package com.theveganrobot.cvcamera;

import java.util.ArrayList;

import android.content.Context;
import android.graphics.Canvas;
import android.graphics.Color;
import android.graphics.Paint;
import android.graphics.Paint.Join;
import android.view.MotionEvent;
import android.view.View;

class CanvasOverlayView extends View {
    private ArrayList<Drawing> mDrawings;
    private Drawing mCurrDrawing;
    private boolean mEventCaptureEnable;

    public CanvasOverlayView(Context context) {
        super(context);
        setFocusable(true);
        mDrawings = new ArrayList<Drawing>();
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        for (Drawing d : mDrawings) {
            if (d.mPoints.size() < 2) {
                continue;
            }

            Paint paint = new Paint();
            int color = d.mColor;
            int a = (color >> 24) & 0xFF;
            int r = (color >> 16) & 0xFF;
            int g = (color >> 8) & 0xFF;
            int b = color & 0xFF;
            paint.setColor(Color.argb(a, r, g, b));
            paint.setStrokeWidth(d.mLineWidth);
            paint.setStrokeCap(Paint.Cap.ROUND);

            ArrayList<Point> points = d.mPoints;
            Point p0 = points.get(0);
            Point p1;
            for (int i = 1; i < points.size(); i++) {
                p1 = points.get(i);
                canvas.drawLine(p0.mX, p0.mY, p1.mX, p1.mY, paint);
                p0 = p1;
            }
        }
    }
    
    public void setEventCaptureEnable(boolean enable) {
        mEventCaptureEnable = enable;
    }

    @Override
    public boolean onTouchEvent(MotionEvent event) {
        if (!mEventCaptureEnable) {
            return false;
        }
        
        Point point = new Point((int) event.getX(), (int) event.getY());
        switch (event.getAction()) {
            case MotionEvent.ACTION_DOWN:
                mCurrDrawing = new Drawing(point);
                mDrawings.add(mCurrDrawing);
                break;
            case MotionEvent.ACTION_MOVE:
                mCurrDrawing.mPoints.add(point);
                break;
        }
        invalidate();
        return true;
    }

    private class Point {
        protected int mX, mY;

        Point(int x, int y) {
            mX = x;
            mY = y;
        }
    }

    private class Drawing {
        protected ArrayList<Point> mPoints;
        protected int mColor;
        protected int mLineWidth;

        Drawing(Point point) {
            mColor = mSelectedColor;
            mLineWidth = mSelectedWidth;
            mPoints = new ArrayList<Point>();
            mPoints.add(point);
        }
    }

    private int mSelectedColor = 0xFFFFFFFF;

    protected ColorPickerDialog.OnColorChangedListener getOnColorChangedListener() {
        return new ColorPickerDialog.OnColorChangedListener() {
            public void colorChanged(int color) {
                mSelectedColor = color;
            }
        };
    }
    
    private int mSelectedWidth = 0;

    protected void setLineWidth(int width) {
        mSelectedWidth = width;
    }
}
