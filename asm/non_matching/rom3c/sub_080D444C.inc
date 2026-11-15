	THUMB_FUNC_START sub_080D444C
sub_080D444C: @ 0x080D444C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r4, _080D449C  @ =gRam
	ldr r0, _080D44A0  @ =0x00001152
	add r1, r4, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldrb r0, [r1]
	add r3, r0, #0
	sub r3, r3, #16
	mov r0, #128
	and r3, r3, r0
	cmp r3, #0
	bne _080D4478
	ldr r1, _080D44A4  @ =0x00000F52
	add r0, r4, r1
	add r0, r2, r0
	strb r3, [r0]
_080D4478:
	ldr r0, _080D44A8  @ =0x00001052
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D44AC  @ =0x00000F92
	add r2, r4, r1
	add r2, r5, r2
	lsl r0, r0, #24
	lsr r0, r0, #25
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D449C:
	.4byte gRam
_080D44A0:
	.4byte 0x00001152
_080D44A4:
	.4byte 0x00000F52
_080D44A8:
	.4byte 0x00001052
_080D44AC:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D444C

