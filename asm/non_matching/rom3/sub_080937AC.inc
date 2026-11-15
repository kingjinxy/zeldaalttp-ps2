	THUMB_FUNC_START sub_080937AC
sub_080937AC: @ 0x080937AC
	push {r4,r5,lr}
	ldr r4, _080937F0  @ =gRam
	ldr r0, _080937F4  @ =0x000017D4
	add r1, r4, r0
	mov r5, #0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080937F8  @ =0x000016CC
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080937FC  @ =0x000017CE
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08093800  @ =0x00001750
	add r0, r4, r1
	strb r5, [r0]
	add r2, r2, #17
	add r0, r4, r2
	strb r5, [r0]
	add r1, r1, #102
	add r0, r4, r1
	strb r5, [r0]
	bl sub_08092B0C
	ldr r2, _08093804  @ =0x00001808
	add r0, r4, r2
	strb r5, [r0]
	ldr r0, _08093808  @ =0x00001719
	add r4, r4, r0
	strb r5, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080937F0:
	.4byte gRam
_080937F4:
	.4byte 0x000017D4
_080937F8:
	.4byte 0x000016CC
_080937FC:
	.4byte 0x000017CE
_08093800:
	.4byte 0x00001750
_08093804:
	.4byte 0x00001808
_08093808:
	.4byte 0x00001719
	THUMB_FUNC_END sub_080937AC

