	THUMB_FUNC_START sub_080A3E68
sub_080A3E68: @ 0x080A3E68
	push {lr}
	ldr r2, _080A3E80  @ =gRam
	ldr r1, _080A3E84  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080A3E90
	ldr r1, _080A3E88  @ =gUnknown_08168D70
	ldr r3, _080A3E8C  @ =0x000009DA
	b _080A3EA8
_080A3E80:
	.4byte gRam
_080A3E84:
	.4byte 0x000009B2
_080A3E88:
	.4byte gUnknown_08168D70
_080A3E8C:
	.4byte 0x000009DA
_080A3E90:
	ldr r1, _080A3EA0  @ =0x0000165E
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080A3EA4
	mov r0, #61
	b _080A3EB2
	.byte 0x00
	.byte 0x00
_080A3EA0:
	.4byte 0x0000165E
_080A3EA4:
	ldr r1, _080A3EC4  @ =gUnknown_08168C70
	ldr r3, _080A3EC8  @ =0x000009C6
_080A3EA8:
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
_080A3EB2:
	bl sub_080AF4FC
	ldr r0, _080A3ECC  @ =gRam
	ldr r1, _080A3ED0  @ =0x000016E9
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	pop {r0}
	bx r0
_080A3EC4:
	.4byte gUnknown_08168C70
_080A3EC8:
	.4byte 0x000009C6
_080A3ECC:
	.4byte gRam
_080A3ED0:
	.4byte 0x000016E9
	THUMB_FUNC_END sub_080A3E68

