	THUMB_FUNC_START sub_080F6B50
sub_080F6B50: @ 0x080F6B50
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080F6C94
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F6B8C
	ldr r2, _080F6B94  @ =gRam
	ldr r1, _080F6B98  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080F6B86
	ldr r0, _080F6B9C  @ =0x00000FC2
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F6B86:
	add r0, r5, #0
	bl sub_080C4F98
_080F6B8C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6B94:
	.4byte gRam
_080F6B98:
	.4byte 0x00000996
_080F6B9C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F6B50

