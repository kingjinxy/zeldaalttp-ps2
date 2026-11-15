	THUMB_FUNC_START sub_080C2C4C
sub_080C2C4C: @ 0x080C2C4C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r6, _080C2C98  @ =gRam
	ldr r1, _080C2C9C  @ =0x00001152
	add r0, r6, r1
	add r0, r4, r0
	ldrb r3, [r0]
	ldr r0, _080C2CA0  @ =0x00001162
	add r2, r6, r0
	add r2, r4, r2
	lsl r0, r3, #4
	mov r1, #255
	and r0, r0, r1
	ldrb r1, [r2]
	add r0, r0, r1
	add r5, r0, #0
	strb r5, [r2]
	lsr r1, r3, #4
	mov r0, #128
	and r3, r3, r0
	cmp r3, #0
	beq _080C2C80
	mov r0, #240
	orr r1, r1, r0
_080C2C80:
	ldr r2, _080C2CA4  @ =0x00001142
	add r0, r6, r2
	add r2, r4, r0
	ldrb r3, [r2]
	mov r0, #128
	lsl r0, r0, #1
	and r0, r0, r5
	cmp r0, #0
	beq _080C2CA8
	add r0, r3, #1
	add r0, r0, r1
	b _080C2CAA
_080C2C98:
	.4byte gRam
_080C2C9C:
	.4byte 0x00001152
_080C2CA0:
	.4byte 0x00001162
_080C2CA4:
	.4byte 0x00001142
_080C2CA8:
	add r0, r3, r1
_080C2CAA:
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C2C4C

	.byte 0x00
	.byte 0x00
