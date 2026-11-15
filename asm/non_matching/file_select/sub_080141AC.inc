	THUMB_FUNC_START sub_080141AC
sub_080141AC: @ 0x080141AC
	push {r4,lr}
	lsl r0, r0, #24
	ldr r1, _080141E4  @ =gUnknown_03006C80
	lsr r0, r0, #22
	add r1, r1, #12
	add r0, r0, r1
	ldr r4, [r0]
	mov r3, #0
	mov r2, #3
_080141BE:
	lsl r0, r2, #24
	asr r2, r0, #24
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r0, [r0]
	sub r0, r0, r4
	cmp r0, r3
	ble _080141D0
	add r3, r0, #0
_080141D0:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r0, #0
	bge _080141BE
	add r0, r3, #0
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080141E4:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_080141AC

