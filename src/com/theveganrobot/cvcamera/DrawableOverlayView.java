
package com.theveganrobot.cvcamera;

import java.util.ArrayList;

import android.content.Context;
import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import android.graphics.Canvas;
import android.graphics.Color;
import android.view.MotionEvent;
import android.view.View;

class DrawableOverlayView extends View {
    private Bitmap bitmap;
    private boolean mEventCaptureEnable;
    private ArrayList<Point> mPoints;
    private Point mCurrPoint;

    public DrawableOverlayView(Context context) {
        super(context);
        bitmap = BitmapFactory.decodeResource(context.getResources(), R.drawable.androidmarker);
        mPoints = new ArrayList<Point>();
        setFocusable(true);
    }

    @Override
    protected void onDraw(Canvas canvas) {
        super.onDraw(canvas);
        canvas.drawColor(Color.TRANSPARENT);
        
        if (null != mCurrPoint) {
            canvas.drawBitmap(bitmap, mCurrPoint.mX, mCurrPoint.mY, null);
        }
        
        for (Point p : mPoints) {
            canvas.drawBitmap(bitmap, p.mX, p.mY, null);
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

        switch (event.getAction()) {
            case MotionEvent.ACTION_DOWN:
                mCurrPoint = new Point((int) event.getX(), (int) event.getY());
                break;
            case MotionEvent.ACTION_MOVE:
                mCurrPoint.mX = (int) event.getX();
                mCurrPoint.mY = (int) event.getY();
                break;
            case MotionEvent.ACTION_UP:
                mPoints.add(mCurrPoint);
                mCurrPoint = null;
                break;
        }
        invalidate();
        return true;
    }
    
    
    public void clear() {
        mCurrPoint = null;
        mPoints = new ArrayList<Point>();
        invalidate();
    }
    
    public void movePoints(int x, int y) {
        for (Point p : mPoints) {
            p.mX += x;
            p.mY += y;
        }
    }

    private class Point {
        protected int mX, mY;

        Point(int x, int y) {
            mX = x;
            mY = y;
        }
    }
}
