	THUMB_FUNC_START sub_080BFCAC
sub_080BFCAC: @ 0x080BFCAC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r8, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080BFD1C  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r5
	mov r9, r0
	ldr r2, _080BFD20  @ =0x00000958
	add r1, r5, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #223
	bls _080BFCD8
	b _080BFE04
_080BFCD8:
	ldr r3, _080BFD24  @ =0x00000964
	add r7, r5, r3
	ldr r1, _080BFD28  @ =0x00000952
	add r0, r5, r1
	ldrh r1, [r7]
	ldrh r0, [r0]
	sub r0, r1, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #255
	bls _080BFCF0
	b _080BFE04
_080BFCF0:
	ldr r2, _080BFD2C  @ =0x000009B2
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080BFD30
	lsl r0, r1, #16
	asr r0, r0, #19
	strh r0, [r7]
	mov r3, #0
	ldrsh r0, [r7, r3]
	lsl r0, r0, #3
	mov r2, r9
	mov r3, #0
	ldrsh r1, [r2, r3]
	bl sub_080691D8
	lsl r0, r0, #16
	lsr r4, r0, #16
	b _080BFD66
	.byte 0x00
	.byte 0x00
_080BFD1C:
	.4byte gRam
_080BFD20:
	.4byte 0x00000958
_080BFD24:
	.4byte 0x00000964
_080BFD28:
	.4byte 0x00000952
_080BFD2C:
	.4byte 0x000009B2
_080BFD30:
	ldr r1, _080BFDCC  @ =0x00000E47
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r0, r6, #0
	bl sub_080C781C
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080BFDD0  @ =0x00001812
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BFD66
	mov r3, #0
	ldrsh r0, [r7, r3]
	mov r2, r9
	mov r3, #0
	ldrsh r1, [r2, r3]
	mov r2, #1
	bl sub_080928A4
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #8
	bne _080BFD66
	mov r4, #8
_080BFD66:
	ldr r2, _080BFDD4  @ =gRam
	ldr r1, _080BFDD8  @ =0x0000187A
	add r0, r2, r1
	add r0, r6, r0
	strb r4, [r0]
	mov r3, r8
	strb r4, [r3]
	ldr r1, _080BFDDC  @ =gUnknown_081719F8
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r1, _080BFDE0  @ =0x0000097D
	add r3, r2, r1
	strb r0, [r3]
	ldr r1, _080BFDE4  @ =0x00000E15
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #2
	bne _080BFD9E
	mov r0, r8
	ldrb r1, [r0]
	mov r0, #240
	and r0, r0, r1
	cmp r0, #192
	bne _080BFD9E
	mov r0, #0
	strb r0, [r3]
_080BFD9E:
	ldr r1, _080BFDE8  @ =0x00000A74
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BFE08
	ldr r3, _080BFDE0  @ =0x0000097D
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080BFE04
	cmp r0, #1
	beq _080BFE4C
	cmp r0, #2
	bne _080BFDEC
	bl sub_080C7948
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080BFE5C
	.byte 0x00
	.byte 0x00
_080BFDCC:
	.4byte 0x00000E47
_080BFDD0:
	.4byte 0x00001812
_080BFDD4:
	.4byte gRam
_080BFDD8:
	.4byte 0x0000187A
_080BFDDC:
	.4byte gUnknown_081719F8
_080BFDE0:
	.4byte 0x0000097D
_080BFDE4:
	.4byte 0x00000E15
_080BFDE8:
	.4byte 0x00000A74
_080BFDEC:
	cmp r0, #3
	bne _080BFE08
	mov r1, #195
	lsl r1, r1, #5
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	mov r3, r8
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080BFE4C
_080BFE04:
	mov r0, #0
	b _080BFE5C
_080BFE08:
	ldr r1, _080BFE40  @ =0x00000A7E
	add r0, r2, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080BFE04
	mov r0, #0
	strb r0, [r1]
	ldr r3, _080BFE44  @ =0x0000097D
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bne _080BFE04
	mov r0, #6
	strb r0, [r1]
	ldr r0, _080BFE48  @ =0x00000A74
	add r1, r2, r0
	add r1, r6, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
	b _080BFE04
_080BFE40:
	.4byte 0x00000A7E
_080BFE44:
	.4byte 0x0000097D
_080BFE48:
	.4byte 0x00000A74
_080BFE4C:
	mov r0, #0
	mov r1, r8
	strb r0, [r1]
	ldr r3, _080BFE68  @ =0x00001626
	add r1, r2, r3
	mov r0, #3
	strb r0, [r1]
	mov r0, #1
_080BFE5C:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
_080BFE68:
	.4byte 0x00001626
	THUMB_FUNC_END sub_080BFCAC

