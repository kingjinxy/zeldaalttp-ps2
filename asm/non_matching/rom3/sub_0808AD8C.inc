	THUMB_FUNC_START sub_0808AD8C
sub_0808AD8C: @ 0x0808AD8C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _0808AE98  @ =gRam
	ldr r3, _0808AE9C  @ =0x00000BD4
	add r1, r2, r3
	strh r0, [r1]
	ldr r4, _0808AEA0  @ =0x00000BF2
	add r0, r2, r4
	ldr r5, _0808AEA4  @ =0x00000952
	add r1, r2, r5
	ldrh r3, [r0]
	ldrh r0, [r1]
	sub r3, r3, r0
	ldr r6, _0808AEA8  @ =0x00000BC8
	add r0, r2, r6
	strh r3, [r0]
	ldr r7, _0808AEAC  @ =0x00000BF8
	add r0, r2, r7
	ldrh r1, [r0]
	mov r4, #0
	ldrsh r0, [r0, r4]
	add r4, r2, #0
	cmp r0, #0
	beq _0808ADC8
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
_0808ADC8:
	lsl r0, r1, #16
	asr r0, r0, #16
	add r2, r0, r3
	ldr r5, _0808AEB0  @ =0x00000964
	add r1, r4, r5
	strh r2, [r1]
	sub r0, r3, r0
	mov r6, #150
	lsl r6, r6, #4
	add r2, r4, r6
	strh r0, [r2]
	mov r1, #0
	lsl r0, r0, #16
	cmp r0, #0
	blt _0808ADF4
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0808ADF4
	mov r1, #255
_0808ADF4:
	lsl r0, r1, #16
	asr r2, r0, #16
	mov r3, #255
	and r2, r2, r3
	mov r7, #150
	lsl r7, r7, #4
	add r0, r4, r7
	strh r2, [r0]
	ldr r1, _0808AEB0  @ =0x00000964
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _0808AE16
	mov r1, #255
_0808AE16:
	lsl r0, r1, #16
	asr r0, r0, #16
	and r0, r0, r3
	lsl r0, r0, #8
	ldr r5, _0808AEB4  @ =0x0000096C
	add r3, r4, r5
	orr r0, r0, r2
	strh r0, [r3]
	ldr r6, _0808AEB8  @ =0x0000096D
	add r0, r4, r6
	ldrb r0, [r0]
	ldr r7, _0808AEBC  @ =0x00000978
	add r5, r4, r7
	strb r0, [r5]
	ldrb r1, [r3]
	ldr r2, _0808AEC0  @ =0x00000979
	add r0, r4, r2
	strb r1, [r0]
	add r6, r6, #7
	add r2, r4, r6
	ldrh r0, [r2]
	lsl r1, r0, #1
	strh r1, [r3]
	lsl r0, r0, #17
	asr r0, r0, #16
	cmp r0, #191
	bgt _0808AE50
	mov r0, #192
	strh r0, [r3]
_0808AE50:
	ldrh r0, [r3]
	ldrh r2, [r2]
	sub r0, r0, r2
	mov r7, #151
	lsl r7, r7, #4
	add r1, r4, r7
	strh r0, [r1]
	sub r2, r2, r0
	ldr r0, _0808AEC4  @ =0x00000968
	add r1, r4, r0
	strh r2, [r1]
	mov r9, r4
	mov r10, r0
	add r6, r1, #0
	mov r8, r5
	ldr r0, _0808AEC8  @ =0x000001BF
	mov r12, r0
	add r5, r3, #0
_0808AE74:
	ldrh r2, [r6]
	mov r3, #0
	ldrsh r1, [r6, r3]
	cmp r1, #0
	blt _0808AEF2
	mov r7, #189
	lsl r7, r7, #4
	add r0, r4, r7
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r0, #0
	blt _0808AED0
	cmp r1, r0
	bge _0808AED0
	lsl r0, r2, #17
	lsr r0, r0, #16
	ldr r1, _0808AECC  @ =0x0000F0FC
	b _0808AEDA
_0808AE98:
	.4byte gRam
_0808AE9C:
	.4byte 0x00000BD4
_0808AEA0:
	.4byte 0x00000BF2
_0808AEA4:
	.4byte 0x00000952
_0808AEA8:
	.4byte 0x00000BC8
_0808AEAC:
	.4byte 0x00000BF8
_0808AEB0:
	.4byte 0x00000964
_0808AEB4:
	.4byte 0x0000096C
_0808AEB8:
	.4byte 0x0000096D
_0808AEBC:
	.4byte 0x00000978
_0808AEC0:
	.4byte 0x00000979
_0808AEC4:
	.4byte 0x00000968
_0808AEC8:
	.4byte 0x000001BF
_0808AECC:
	.4byte 0x0000F0FC
_0808AED0:
	ldrh r0, [r6]
	lsl r0, r0, #17
	lsr r0, r0, #16
	mov r7, r8
	ldrh r1, [r7]
_0808AEDA:
	lsl r2, r0, #16
	asr r0, r2, #16
	cmp r0, r12
	bgt _0808AEF2
	ldr r0, _0808AF0C  @ =0x0000FFFF
	cmp r1, r0
	bne _0808AEEA
	ldr r1, _0808AF10  @ =0x0000F0FC
_0808AEEA:
	asr r0, r2, #16
	ldr r2, _0808AF14  @ =gUnknown_02001600
	add r0, r0, r2
	strh r1, [r0]
_0808AEF2:
	ldr r3, _0808AF18  @ =0x00000BD4
	add r0, r4, r3
	ldrh r2, [r5]
	mov r7, #0
	ldrsh r1, [r5, r7]
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r1, r0
	blt _0808AF1C
	lsl r0, r2, #17
	lsr r0, r0, #16
	ldr r1, _0808AF10  @ =0x0000F0FC
	b _0808AF38
_0808AF0C:
	.4byte 0x0000FFFF
_0808AF10:
	.4byte 0x0000F0FC
_0808AF14:
	.4byte gUnknown_02001600
_0808AF18:
	.4byte 0x00000BD4
_0808AF1C:
	cmp r1, #192
	ble _0808AF2E
	ldr r7, _0808AF74  @ =0x00000BD8
	add r1, r4, r7
	ldrh r0, [r1]
	cmp r0, #0
	beq _0808AF2E
	sub r0, r0, #1
	strh r0, [r1]
_0808AF2E:
	ldrh r0, [r5]
	lsl r0, r0, #17
	lsr r0, r0, #16
	mov r2, r8
	ldrh r1, [r2]
_0808AF38:
	lsl r2, r0, #16
	asr r0, r2, #16
	cmp r0, r12
	bgt _0808AF50
	ldr r3, _0808AF78  @ =0x0000FFFF
	cmp r1, r3
	bne _0808AF48
	ldr r1, _0808AF7C  @ =0x0000F0FC
_0808AF48:
	asr r0, r2, #16
	ldr r7, _0808AF80  @ =gUnknown_02001600
	add r0, r0, r7
	strh r1, [r0]
_0808AF50:
	ldr r0, _0808AF84  @ =0x00000974
	add r0, r0, r9
	mov r2, r9
	add r2, r2, r10
	mov r3, #0
	ldrsh r1, [r0, r3]
	ldrh r3, [r2]
	mov r7, #0
	ldrsh r0, [r2, r7]
	cmp r1, r0
	beq _0808AF88
	add r0, r3, #1
	strh r0, [r2]
	ldrh r0, [r5]
	sub r0, r0, #1
	strh r0, [r5]
	b _0808AE74
	.byte 0x00
	.byte 0x00
_0808AF74:
	.4byte 0x00000BD8
_0808AF78:
	.4byte 0x0000FFFF
_0808AF7C:
	.4byte 0x0000F0FC
_0808AF80:
	.4byte gUnknown_02001600
_0808AF84:
	.4byte 0x00000974
_0808AF88:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0808AD8C

	.byte 0x00
	.byte 0x00
