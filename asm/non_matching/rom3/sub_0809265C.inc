	THUMB_FUNC_START sub_0809265C
sub_0809265C: @ 0x0809265C
	push {r4-r6,lr}
	mov r3, #128
	lsl r3, r3, #5
	and r3, r3, r1
	lsl r3, r3, #1
	mov r6, #128
	lsl r6, r6, #4
	and r6, r6, r1
	mov r5, #64
	and r5, r5, r1
	lsl r5, r5, #6
	mov r4, #32
	and r4, r4, r1
	lsl r4, r4, #5
	mov r2, #240
	lsl r2, r2, #3
	and r2, r2, r1
	asr r2, r2, #1
	orr r3, r3, r6
	orr r3, r3, r5
	orr r3, r3, r4
	orr r3, r3, r2
	mov r2, #31
	and r2, r2, r1
	orr r3, r3, r2
	lsl r3, r3, #1
	ldr r1, _080926D0  @ =gUnknown_02018000
	add r4, r3, r1
	ldr r2, _080926D4  @ =gUnknown_08155B4E
	lsl r1, r0, #1
	add r1, r1, r2
	ldrh r1, [r1]
	strh r1, [r4]
	ldr r1, _080926D8  @ =gUnknown_02018002
	add r4, r3, r1
	add r1, r0, #1
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	strh r1, [r4]
	ldr r1, _080926DC  @ =gUnknown_02018040
	add r4, r3, r1
	add r1, r0, #2
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	strh r1, [r4]
	ldr r1, _080926E0  @ =gUnknown_02018042
	add r3, r3, r1
	add r0, r0, #3
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r3]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080926D0:
	.4byte gUnknown_02018000
_080926D4:
	.4byte gUnknown_08155B4E
_080926D8:
	.4byte gUnknown_02018002
_080926DC:
	.4byte gUnknown_02018040
_080926E0:
	.4byte gUnknown_02018042
	THUMB_FUNC_END sub_0809265C

