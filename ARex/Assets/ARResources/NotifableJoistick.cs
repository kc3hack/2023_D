using UnityEngine;
using UnityEngine.EventSystems;
using UniRx;
using System;

public class NotifableJoystick : Joystick
{
    public IObservable<Unit> PressedDown { get { return PressedDownSubject.AsObservable(); } }
    Subject<Unit> PressedDownSubject = new Subject<Unit>();
    public IObservable<bool> PressedUp { get { return PressedUpSubject.AsObservable(); } }
    Subject<bool> PressedUpSubject = new Subject<bool>();
    bool isPressing = false;
    public override void OnPointerDown(PointerEventData eventData)
    {
        PressedDownSubject.OnNext(Unit.Default);
        isPressing = true;
        base.OnPointerDown(eventData);
    }
    public override void OnPointerUp(PointerEventData eventData)
    {
        if (isPressing)
        {
            PressedUpSubject.OnNext(true);
            isPressing = false;
        }
        base.OnPointerUp(eventData);
    }
    protected override void HandleInput(float magnitude, Vector2 normalised, Vector2 radius, Camera cam)
    {
        base.HandleInput(magnitude, normalised, radius, cam);
        if (magnitude >= DeadZone && isPressing)
        {
            PressedUpSubject.OnNext(false);
            isPressing = false;
        }
    }
}