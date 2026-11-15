	THUMB_FUNC_START sub_080BFC34
sub_080BFC34: @ 0x080BFC34
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080BFC90  @ =gRam
	ldr r2, _080BFC94  @ =0x00000E3D
	add r1, r3, r2
	add r1, r0, r1
	ldrb r4, [r1]
	ldr r5, _080BFC98  @ =0x00000DC5
	add r1, r3, r5
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r1, _080BFC9C  @ =gUnknown_08171AF8
	add r1, r4, r1
	ldrb r1, [r1]
	add r2, r2, r1
	add r5, r5, #20
	add r1, r3, r5
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	mov r5, #150
	lsl r5, r5, #4
	add r1, r3, r5
	strh r2, [r1]
	ldr r2, _080BFCA0  @ =0x00000DCF
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r1, _080BFCA4  @ =gUnknown_08171B0C
	add r4, r4, r1
	ldrb r1, [r4]
	add r2, r2, r1
	ldr r4, _080BFCA8  @ =0x00000DE3
	add r1, r3, r4
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	add r5, r5, #4
	add r3, r3, r5
	strh r2, [r3]
	pop {r4,r5}
	pop {r0}
	bx r0
_080BFC90:
	.4byte gRam
_080BFC94:
	.4byte 0x00000E3D
_080BFC98:
	.4byte 0x00000DC5
_080BFC9C:
	.4byte gUnknown_08171AF8
_080BFCA0:
	.4byte 0x00000DCF
_080BFCA4:
	.4byte gUnknown_08171B0C
_080BFCA8:
	.4byte 0x00000DE3
	THUMB_FUNC_END sub_080BFC34

