	THUMB_FUNC_START sub_080FAF80
sub_080FAF80: @ 0x080FAF80
	push {lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080FAFB8  @ =gRam
	ldr r0, _080FAFBC  @ =0x00001172
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FAFC0  @ =0x000009C6
	add r0, r2, r1
	ldrh r0, [r0]
	ldr r1, _080FAFC4  @ =gUnknown_02002280
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080FAFB2
	ldr r1, _080FAFC8  @ =0x00000FA2
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
_080FAFB2:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FAFB8:
	.4byte gRam
_080FAFBC:
	.4byte 0x00001172
_080FAFC0:
	.4byte 0x000009C6
_080FAFC4:
	.4byte gUnknown_02002280
_080FAFC8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FAF80

