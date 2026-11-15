	THUMB_FUNC_START sub_080EBBE8
sub_080EBBE8: @ 0x080EBBE8
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080EBC28  @ =gUnknown_08178248
	ldr r5, _080EBC2C  @ =gRam
	ldr r0, _080EBC30  @ =0x00000F92
	add r5, r5, r0
	add r5, r4, r5
	ldrb r2, [r5]
	lsl r0, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, _080EBC34  @ =gUnknown_0817827C
	add r2, r2, r0
	ldrb r2, [r2]
	add r0, r4, #0
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	ldrb r0, [r5]
	cmp r0, #12
	bne _080EBC22
	ldr r0, _080EBC38  @ =gUnknown_03003E74
	ldrh r0, [r0]
	bl sub_08115AD0
_080EBC22:
	pop {r4,r5}
	pop {r0}
	bx r0
_080EBC28:
	.4byte gUnknown_08178248
_080EBC2C:
	.4byte gRam
_080EBC30:
	.4byte 0x00000F92
_080EBC34:
	.4byte gUnknown_0817827C
_080EBC38:
	.4byte gUnknown_03003E74
	THUMB_FUNC_END sub_080EBBE8

