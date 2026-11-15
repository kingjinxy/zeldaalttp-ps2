	THUMB_FUNC_START sub_080FDBE0
sub_080FDBE0: @ 0x080FDBE0
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080FDC18  @ =gRam
	ldr r0, _080FDC1C  @ =0x000009B5
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	ldr r3, _080FDC20  @ =0x0000050C
	add r2, r5, r3
	ldrh r0, [r2]
	mov r3, #128
	lsl r3, r3, #4
	add r1, r3, #0
	eor r0, r0, r1
	mov r6, #0
	strh r0, [r2]
	bl sub_08075804
	ldr r0, _080FDC24  @ =0x00000FA2
	add r5, r5, r0
	add r4, r4, r5
	strb r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FDC18:
	.4byte gRam
_080FDC1C:
	.4byte 0x000009B5
_080FDC20:
	.4byte 0x0000050C
_080FDC24:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FDBE0

