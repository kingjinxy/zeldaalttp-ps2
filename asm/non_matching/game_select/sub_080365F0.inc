	THUMB_FUNC_START sub_080365F0
sub_080365F0: @ 0x080365F0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0803660C
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	bl sub_0802C8E4
	mov r0, #173
	bl play_sound
	b _08036610
_0803660C:
	sub r0, r0, #1
	strb r0, [r4, #23]
_08036610:
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _08036620
	add r0, r4, #0
	mov r1, #3
	bl 0x080037EC
	b _08036626
_08036620:
	add r0, r4, #0
	bl GetNextFrame
_08036626:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080365F0

