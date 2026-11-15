	THUMB_FUNC_START sub_080CD8BC
sub_080CD8BC: @ 0x080CD8BC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _080CD93C  @ =gRam
	ldr r1, _080CD940  @ =0x0000122C
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	ldr r4, _080CD944  @ =0x00001268
	add r1, r3, r4
	add r1, r2, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	orr r0, r0, r1
	ldr r6, _080CD948  @ =0x00000952
	add r1, r3, r6
	ldrh r1, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	mov r4, #255
	lsl r4, r4, #8
	and r0, r0, r4
	cmp r0, #0
	bne _080CD92C
	ldr r6, _080CD94C  @ =0x0000120E
	add r0, r3, r6
	add r0, r2, r0
	ldrb r1, [r0]
	add r6, r6, #60
	add r0, r3, r6
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _080CD950  @ =0x00000958
	add r0, r3, r2
	ldrh r0, [r0]
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	add r0, r1, #0
	and r0, r0, r4
	cmp r0, #0
	beq _080CD958
_080CD92C:
	ldr r4, _080CD954  @ =0x000011D2
	add r0, r3, r4
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	mov r0, #1
	b _080CD962
	.byte 0x00
	.byte 0x00
_080CD93C:
	.4byte gRam
_080CD940:
	.4byte 0x0000122C
_080CD944:
	.4byte 0x00001268
_080CD948:
	.4byte 0x00000952
_080CD94C:
	.4byte 0x0000120E
_080CD950:
	.4byte 0x00000958
_080CD954:
	.4byte 0x000011D2
_080CD958:
	sub r1, r1, #16
	ldr r6, _080CD968  @ =0x00000964
	add r0, r3, r6
	strh r1, [r0]
	mov r0, #0
_080CD962:
	pop {r4-r6}
	pop {r1}
	bx r1
_080CD968:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080CD8BC

