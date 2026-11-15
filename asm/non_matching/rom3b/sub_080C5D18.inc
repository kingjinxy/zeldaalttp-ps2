	THUMB_FUNC_START sub_080C5D18
sub_080C5D18: @ 0x080C5D18
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080C5D80  @ =gRam
	ldr r1, _080C5D84  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #161
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080C5D98
	add r0, r4, #0
	bl sub_080C36D8
	ldr r1, _080C5D88  @ =0x0000097D
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _080C5D98
	add r0, r4, #0
	bl sub_080C3028
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080C5D8C  @ =0x0000097C
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #71
	bhi _080C5D98
	ldr r1, _080C5D90  @ =0x00001012
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	cmp r2, #0
	bne _080C5D94
	bl sub_080CF388
	b _080C5D98
	.byte 0x00
	.byte 0x00
_080C5D80:
	.4byte gRam
_080C5D84:
	.4byte 0x000010F2
_080C5D88:
	.4byte 0x0000097D
_080C5D8C:
	.4byte 0x0000097C
_080C5D90:
	.4byte 0x00001012
_080C5D94:
	bl sub_080CF3A0
_080C5D98:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080C5D18

	.byte 0x00
	.byte 0x00
