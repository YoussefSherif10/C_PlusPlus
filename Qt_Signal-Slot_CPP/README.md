# Qt_Signal-Slot_CPP

This is a very basic Qt project that shows how to handle user events and bind items together.

I placed the three widgets in turn (that is, from top to bottom) into a vertical layout. To do this the QSpinBox class contributes the spin box element, and the QSlider is correspondingly responsible for the slider.
To ensure synchronization of the widgets, I used four connect() calls. if the value of the spin box changes, then the label and the slider must be updated;
if the status of the slider varies, the label and the spin box need to be brought up-to-date. (Note that because the spinBox, label, and slider variables are already pointer variables that reference the widgets, we don’t have to take their addresses using the & operator).

A new value for the label is set using the QLabel::setNum(int) slot, a function that is called with an integer value as an argument. The spin box and the slider are handled similarly using the slots QSpinBox::setValue(int) and QSlider::setValue(int).

Qt does not specify the order in which this happens. Either the label or the slider can be updated first, and the exact behavior may be unpredictable.
