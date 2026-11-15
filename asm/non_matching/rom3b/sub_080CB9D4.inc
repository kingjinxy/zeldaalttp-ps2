	THUMB_FUNC_START sub_080CB9D4
sub_080CB9D4: @ 0x080CB9D4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r4, _080CBA3C  @ =gRam
	ldr r1, _080CBA40  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080CBA36
	ldr r3, _080CBA44  @ =0x00000E75
	add r0, r4, r3
	add r0, r2, r0
	ldrb r1, [r0]
	mov r5, #1
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080CBA36
	lsl r0, r2, #1
	ldr r2, _080CBA48  @ =0x00001192
	add r1, r4, r2
	add r0, r0, r1
	ldrh r3, [r0]
	mov r0, #128
	and r0, r0, r3
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, #0
	bne _080CBA36
	ldr r0, _080CBA4C  @ =0x00000964
	add r2, r4, r0
	strb r3, [r2]
	ldr r3, _080CBA50  @ =0x00000965
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080CBA54  @ =0x00000B36
	add r0, r4, r1
	ldrh r1, [r0]
	lsl r1, r1, #1
	ldr r3, _080CBA58  @ =gUnknown_02006B80
	add r1, r1, r3
	add r0, r5, #0
	ldrb r2, [r2]
	lsl r0, r0, r2
	ldrb r2, [r1]
	orr r0, r0, r2
	strb r0, [r1]
_080CBA36:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CBA3C:
	.4byte gRam
_080CBA40:
	.4byte 0x000009B2
_080CBA44:
	.4byte 0x00000E75
_080CBA48:
	.4byte 0x00001192
_080CBA4C:
	.4byte 0x00000964
_080CBA50:
	.4byte 0x00000965
_080CBA54:
	.4byte 0x00000B36
_080CBA58:
	.4byte gUnknown_02006B80
	THUMB_FUNC_END sub_080CB9D4

