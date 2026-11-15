	THUMB_FUNC_START sub_080EA11C
sub_080EA11C: @ 0x080EA11C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080EA14C  @ =gRam
	ldr r3, _080EA150  @ =0x00000FC2
	add r0, r1, r3
	add r3, r2, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EA158
	ldr r4, _080EA154  @ =0x00000F52
	add r0, r1, r4
	add r0, r2, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #96
	strb r0, [r3]
	add r0, r2, #0
	mov r1, #16
	bl sub_080C35FC
	b _080EA168
_080EA14C:
	.4byte gRam
_080EA150:
	.4byte 0x00000FC2
_080EA154:
	.4byte 0x00000F52
_080EA158:
	ldr r3, _080EA170  @ =0x00000F92
	add r1, r1, r3
	add r1, r2, r1
	ldr r2, _080EA174  @ =gUnknown_08177CC4
	lsr r0, r0, #26
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080EA168:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA170:
	.4byte 0x00000F92
_080EA174:
	.4byte gUnknown_08177CC4
	THUMB_FUNC_END sub_080EA11C

