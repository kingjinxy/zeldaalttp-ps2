	THUMB_FUNC_START sub_080AFE48
sub_080AFE48: @ 0x080AFE48
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r5, #1
	ldr r4, _080AFED4  @ =gRam
	ldr r2, _080AFED8  @ =0x000009AD
	add r0, r4, r2
	ldrb r2, [r0]
	cmp r2, #0
	bne _080AFECE
	lsl r0, r1, #1
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	strb r0, [r1]
	ldr r3, _080AFEDC  @ =0x00001A4B
	add r0, r4, r3
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	cmp r0, r1
	beq _080AFE7C
	mov r5, #0
_080AFE7C:
	ldr r0, _080AFEE0  @ =0x00001749
	add r1, r4, r0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _080AFEE4  @ =0x00001748
	add r0, r4, r1
	strb r2, [r0]
	add r0, r5, #0
	bl sub_080AF79C
	ldr r2, _080AFEE8  @ =0x00001A44
	add r0, r4, r2
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r3, _080AFEEC  @ =0x00001732
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080AFEF0  @ =0x00001A42
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080AFEF4  @ =0x00001733
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080AFEF8  @ =0x00001A3E
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080AFBEC
_080AFECE:
	pop {r4,r5}
	pop {r0}
	bx r0
_080AFED4:
	.4byte gRam
_080AFED8:
	.4byte 0x000009AD
_080AFEDC:
	.4byte 0x00001A4B
_080AFEE0:
	.4byte 0x00001749
_080AFEE4:
	.4byte 0x00001748
_080AFEE8:
	.4byte 0x00001A44
_080AFEEC:
	.4byte 0x00001732
_080AFEF0:
	.4byte 0x00001A42
_080AFEF4:
	.4byte 0x00001733
_080AFEF8:
	.4byte 0x00001A3E
	THUMB_FUNC_END sub_080AFE48

