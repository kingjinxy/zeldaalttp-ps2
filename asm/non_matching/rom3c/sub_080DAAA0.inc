	THUMB_FUNC_START sub_080DAAA0
sub_080DAAA0: @ 0x080DAAA0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r6, r0, #0
	ldr r4, _080DAB1C  @ =gRam
	ldr r1, _080DAB20  @ =0x00000FC2
	add r0, r4, r1
	add r7, r6, r0
	ldrb r5, [r7]
	cmp r5, #0
	bne _080DAB14
	ldr r2, _080DAB24  @ =0x000009AC
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #26
	beq _080DAAC8
	mov r0, #162
	lsl r0, r0, #1
	bl sub_080C95C0
_080DAAC8:
	ldr r0, _080DAB28  @ =0x00000F52
	add r1, r4, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #80
	strb r0, [r7]
	ldr r2, _080DAB2C  @ =0x000009B5
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080DAB30  @ =0x000009D4
	add r1, r4, r0
	mov r0, #48
	strb r0, [r1]
	ldr r1, _080DAB34  @ =0x00000CF8
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _080DAB38  @ =0x00000CFA
	add r0, r4, r2
	strh r5, [r0]
	ldr r0, _080DAB3C  @ =0x0000051E
	add r1, r4, r0
	mov r0, #185
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r2, _080DAB40  @ =0x0000051A
	add r1, r4, r2
	mov r0, #63
	strh r0, [r1]
	ldr r1, _080DAB44  @ =0x00000998
	add r0, r4, r1
	mov r1, #10
	strb r1, [r0]
	ldr r2, _080DAB48  @ =0x00000999
	add r0, r4, r2
	strb r1, [r0]
_080DAB14:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DAB1C:
	.4byte gRam
_080DAB20:
	.4byte 0x00000FC2
_080DAB24:
	.4byte 0x000009AC
_080DAB28:
	.4byte 0x00000F52
_080DAB2C:
	.4byte 0x000009B5
_080DAB30:
	.4byte 0x000009D4
_080DAB34:
	.4byte 0x00000CF8
_080DAB38:
	.4byte 0x00000CFA
_080DAB3C:
	.4byte 0x0000051E
_080DAB40:
	.4byte 0x0000051A
_080DAB44:
	.4byte 0x00000998
_080DAB48:
	.4byte 0x00000999
	THUMB_FUNC_END sub_080DAAA0

