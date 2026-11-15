	THUMB_FUNC_START sub_080003E0
sub_080003E0:
	ldrh r2, [r0, #50]
	ldrh r3, [r1, #50]
	sub r2, r2, r3
	add r3, r2, #0
	add r2, r2, #8
	cmp r2, #17
	bcc _08000410
	ldrh r2, [r1, #54]
	ldrh r1, [r0, #54]
	add r2, r2, #3
	sub r1, r1, r2
	mov r2, #0
	add r1, r1, #8
	cmp r1, #17
	bcs _08000408
	lsl r3, r3, #1
	bcs _08000406
	mov r2, #128
	b _08000408
_08000406:
	mov r2, #32
_08000408:
	ldr r1, [r0, #96]
	orr r1, r1, r2
	str r1, [r0, #96]
	mov pc, lr
_08000410:
	ldrh r2, [r0, #54]
	ldrh r3, [r1, #54]
	add r3, r3, #3
	mov r1, #0
	sub r2, r2, r3
	bpl _08000424
	add r2, r2, #8
	bpl _0800042A
	mov r1, #64
	b _0800042A
_08000424:
	sub r2, r2, #8
	bmi _0800042A
	mov r1, #16
_0800042A:
	ldr r2, [r0, #96]
	orr r2, r2, r1
	str r2, [r0, #96]
	mov pc, lr
	THUMB_FUNC_END sub_080003E0

