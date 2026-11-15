	THUMB_FUNC_START sub_080C9AAC
sub_080C9AAC: @ 0x080C9AAC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	lsl r1, r1, #24
	lsr r6, r1, #24
	lsl r2, r2, #24
	lsr r7, r2, #24
	lsl r2, r7, #24
	cmp r2, #0
	blt _080C9ADE
	ldr r4, _080C9AE4  @ =gRam
	ldr r0, _080C9AE8  @ =0x00000FA2
	add r3, r4, r0
_080C9AC8:
	asr r5, r2, #24
	add r1, r5, r3
	ldrb r0, [r1]
	cmp r0, #0
	beq _080C9AEC
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r2, r7, #24
	cmp r2, #0
	bge _080C9AC8
_080C9ADE:
	mov r0, #1
	neg r0, r0
	b _080C9C0C
_080C9AE4:
	.4byte gRam
_080C9AE8:
	.4byte 0x00000FA2
_080C9AEC:
	ldr r3, _080C9B9C  @ =0x00000FF2
	add r0, r4, r3
	add r0, r5, r0
	mov r3, r12
	strb r3, [r0]
	mov r0, #9
	strb r0, [r1]
	ldr r1, _080C9BA0  @ =0x00000EE2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BA4  @ =0x00000F02
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BA8  @ =0x00000ED2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BAC  @ =0x00000EF2
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BB0  @ =0x00001142
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BB4  @ =0x00000D23
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BB8  @ =0x00000D2B
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BBC  @ =0x00000D33
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldr r1, _080C9BC0  @ =0x00000D3B
	add r0, r4, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r4, r3
	strb r1, [r0]
	lsr r0, r2, #24
	bl sub_080CEB84
	ldr r1, _080C9BC4  @ =0x000009B2
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C9BD0
	lsl r0, r5, #1
	ldr r2, _080C9BC8  @ =0x00001192
	add r1, r4, r2
	add r0, r0, r1
	ldr r1, _080C9BCC  @ =0x0000FFFF
	b _080C9BDA
	.byte 0x00
	.byte 0x00
_080C9B9C:
	.4byte 0x00000FF2
_080C9BA0:
	.4byte 0x00000EE2
_080C9BA4:
	.4byte 0x00000F02
_080C9BA8:
	.4byte 0x00000ED2
_080C9BAC:
	.4byte 0x00000EF2
_080C9BB0:
	.4byte 0x00001142
_080C9BB4:
	.4byte 0x00000D23
_080C9BB8:
	.4byte 0x00000D2B
_080C9BBC:
	.4byte 0x00000D33
_080C9BC0:
	.4byte 0x00000D3B
_080C9BC4:
	.4byte 0x000009B2
_080C9BC8:
	.4byte 0x00001192
_080C9BCC:
	.4byte 0x0000FFFF
_080C9BD0:
	lsl r0, r5, #1
	ldr r3, _080C9C14  @ =0x00001192
	add r1, r4, r3
	add r0, r0, r1
	mov r1, #255
_080C9BDA:
	strh r1, [r0]
	ldr r2, _080C9C18  @ =gRam
	lsl r0, r7, #24
	asr r0, r0, #24
	ldr r3, _080C9C1C  @ =0x000010F2
	add r1, r2, r3
	add r3, r0, r1
	add r1, r6, r1
	ldrb r1, [r1]
	mov r4, #0
	strb r1, [r3]
	ldr r3, _080C9C20  @ =0x00000FB2
	add r1, r2, r3
	add r3, r0, r1
	add r1, r6, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r3, _080C9C24  @ =0x00000E85
	add r1, r2, r3
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _080C9C28  @ =0x00001002
	add r2, r2, r1
	add r2, r0, r2
	strb r4, [r2]
_080C9C0C:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C9C14:
	.4byte 0x00001192
_080C9C18:
	.4byte gRam
_080C9C1C:
	.4byte 0x000010F2
_080C9C20:
	.4byte 0x00000FB2
_080C9C24:
	.4byte 0x00000E85
_080C9C28:
	.4byte 0x00001002
	THUMB_FUNC_END sub_080C9AAC

