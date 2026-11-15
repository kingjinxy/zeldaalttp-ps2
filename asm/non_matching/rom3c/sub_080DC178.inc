	THUMB_FUNC_START sub_080DC178
sub_080DC178: @ 0x080DC178
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	bl sub_0809E3CC
	cmp r0, #0
	bne _080DC1E8
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC1E8
	ldr r0, _080DC1BC  @ =gBottle1
	ldr r1, _080DC1C0  @ =gBottle2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _080DC1C4  @ =gBottle3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _080DC1C8  @ =gBottle4
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #1
	bhi _080DC1D0
	ldr r1, _080DC1CC  @ =0x00000107
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	b _080DC1E8
_080DC1BC:
	.4byte gBottle1
_080DC1C0:
	.4byte gBottle2
_080DC1C4:
	.4byte gBottle3
_080DC1C8:
	.4byte gBottle4
_080DC1CC:
	.4byte 0x00000107
_080DC1D0:
	ldr r2, _080DC1F0  @ =gRam
	ldr r0, _080DC1F4  @ =0x00000F52
	add r1, r2, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080DC1F8  @ =0x00001770
	add r2, r2, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080DC1E8:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080DC1F0:
	.4byte gRam
_080DC1F4:
	.4byte 0x00000F52
_080DC1F8:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080DC178

