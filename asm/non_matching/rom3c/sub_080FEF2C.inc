	THUMB_FUNC_START sub_080FEF2C
sub_080FEF2C: @ 0x080FEF2C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r6, _080FEF6C  @ =gRam
	ldr r0, _080FEF70  @ =0x00001052
	add r1, r6, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #3
	and r0, r0, r1
	add r4, r0, #0
	cmp r4, #0
	bne _080FEF58
	add r0, r2, #0
	mov r1, #12
	bl sub_080CF0AC
_080FEF58:
	ldr r1, _080FEF74  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	ldr r1, _080FEF78  @ =gUnknown_0817AB66
	add r1, r4, r1
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080FEF6C:
	.4byte gRam
_080FEF70:
	.4byte 0x00001052
_080FEF74:
	.4byte 0x00000F92
_080FEF78:
	.4byte gUnknown_0817AB66
	THUMB_FUNC_END sub_080FEF2C

