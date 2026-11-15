	THUMB_FUNC_START sub_08102BD4
sub_08102BD4: @ 0x08102BD4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _08102C18  @ =gRam
	ldr r1, _08102C1C  @ =0x00000FC2
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _08102C0A
	ldr r0, _08102C20  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #255
	strb r0, [r3]
	ldr r1, _08102C24  @ =0x00000FD2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #32
	strb r1, [r0]
_08102C0A:
	add r0, r5, #0
	bl sub_08102C28
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08102C18:
	.4byte gRam
_08102C1C:
	.4byte 0x00000FC2
_08102C20:
	.4byte 0x00000F52
_08102C24:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_08102BD4

