	THUMB_FUNC_START sub_080F81BC
sub_080F81BC: @ 0x080F81BC
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080F81E0  @ =gRam
	ldr r1, _080F81E4  @ =0x000009B2
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080F81E8
	add r1, r1, #246
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	b _080F81F6
	.byte 0x00
	.byte 0x00
_080F81E0:
	.4byte gRam
_080F81E4:
	.4byte 0x000009B2
_080F81E8:
	ldr r1, _080F8210  @ =0x000009C6
	add r0, r3, r1
	ldrh r0, [r0]
	ldr r1, _080F8214  @ =gUnknown_02002280
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #64
_080F81F6:
	and r0, r0, r1
	cmp r0, #0
	beq _080F8206
	ldr r1, _080F8218  @ =0x00000F92
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #4
	strb r1, [r0]
_080F8206:
	add r0, r2, #0
	bl sub_080F7B24
	pop {r0}
	bx r0
_080F8210:
	.4byte 0x000009C6
_080F8214:
	.4byte gUnknown_02002280
_080F8218:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080F81BC

