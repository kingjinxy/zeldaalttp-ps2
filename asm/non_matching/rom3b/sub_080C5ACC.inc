	THUMB_FUNC_START sub_080C5ACC
sub_080C5ACC: @ 0x080C5ACC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	str r0, [sp]
	mov r9, r1
	lsl r2, r2, #24
	lsr r6, r2, #24
	mov r7, #0
	mov r0, #0
	mov r10, r0
	ldr r3, _080C5B5C  @ =gRam
	ldr r1, _080C5B60  @ =0x000010D2
	add r0, r3, r1
	add r0, r6, r0
	strb r7, [r0]
	ldr r2, _080C5B64  @ =0x00001622
	add r0, r3, r2
	ldrb r1, [r0]
	ldr r4, _080C5B68  @ =0x00001623
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _080C5B6C  @ =0x00000952
	add r0, r3, r2
	ldrh r0, [r0]
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r2, r1, #16
	mov r4, #150
	lsl r4, r4, #4
	add r0, r3, r4
	strb r2, [r0]
	lsr r1, r1, #24
	add r4, r4, #1
	add r0, r3, r4
	strb r1, [r0]
	add r2, r2, #64
	lsl r2, r2, #16
	ldr r0, _080C5B70  @ =0x016F0000
	cmp r2, r0
	bls _080C5B80
	ldr r1, _080C5B74  @ =0x00001624
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _080C5B78  @ =0x00001625
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r4, r4, #9
	add r0, r3, r4
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r2, _080C5B7C  @ =0x00000968
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	sub r1, r1, r0
	add r4, r4, #12
	add r0, r3, r4
	strb r1, [r0]
	lsr r1, r1, #8
	sub r2, r2, #3
	add r0, r3, r2
	strb r1, [r0]
	b _080C5C7A
	.byte 0x00
	.byte 0x00
_080C5B5C:
	.4byte gRam
_080C5B60:
	.4byte 0x000010D2
_080C5B64:
	.4byte 0x00001622
_080C5B68:
	.4byte 0x00001623
_080C5B6C:
	.4byte 0x00000952
_080C5B70:
	.4byte 0x016F0000
_080C5B74:
	.4byte 0x00001624
_080C5B78:
	.4byte 0x00001625
_080C5B7C:
	.4byte 0x00000968
_080C5B80:
	ldr r4, _080C5C48  @ =0x00001142
	add r0, r3, r4
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r1, _080C5C4C  @ =0x00000968
	add r2, r3, r1
	strb r0, [r2]
	ldr r4, _080C5C50  @ =0x00000969
	add r0, r3, r4
	strb r7, [r0]
	ldr r0, _080C5C54  @ =0x00001624
	add r0, r0, r3
	mov r8, r0
	ldrb r1, [r0]
	ldr r4, _080C5C58  @ =0x00001625
	add r4, r4, r3
	mov r12, r4
	ldrb r0, [r4]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r4, _080C5C5C  @ =0x00000958
	add r0, r3, r4
	ldrh r5, [r0]
	sub r1, r1, r5
	lsl r1, r1, #16
	lsr r4, r1, #16
	ldrb r0, [r2]
	sub r0, r4, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080C5C60  @ =0x00000964
	add r1, r3, r2
	strb r0, [r1]
	lsr r0, r0, #8
	add r2, r2, #1
	add r1, r3, r2
	strb r0, [r1]
	ldr r1, _080C5C64  @ =0x000009B2
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080C5C20
	add r2, r2, #72
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C5C20
	add r1, r1, #47
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C5C20
	mov r0, #255
	and r0, r0, r5
	cmp r0, #16
	ble _080C5C20
	cmp r0, #80
	bgt _080C5C20
	add r2, r2, #125
	add r0, r3, r2
	mov r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	bne _080C5C20
	mov r2, r8
	ldrb r1, [r2]
	mov r4, r12
	ldrb r0, [r4]
	lsl r0, r0, #8
	orr r1, r1, r0
	lsl r0, r5, #16
	asr r0, r0, #24
	lsl r0, r0, #8
	mov r2, #16
	orr r0, r0, r2
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r4, r1, #16
_080C5C20:
	lsl r0, r4, #16
	mov r1, #128
	lsl r1, r1, #15
	add r0, r0, r1
	ldr r1, _080C5C68  @ =0x016F0000
	cmp r0, r1
	bls _080C5C3E
	ldr r2, _080C5C6C  @ =0x00001132
	add r0, r3, r2
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080C5C70
_080C5C3E:
	mov r0, #0
	mov r4, r9
	strb r0, [r4]
	b _080C5C74
	.byte 0x00
	.byte 0x00
_080C5C48:
	.4byte 0x00001142
_080C5C4C:
	.4byte 0x00000968
_080C5C50:
	.4byte 0x00000969
_080C5C54:
	.4byte 0x00001624
_080C5C58:
	.4byte 0x00001625
_080C5C5C:
	.4byte 0x00000958
_080C5C60:
	.4byte 0x00000964
_080C5C64:
	.4byte 0x000009B2
_080C5C68:
	.4byte 0x016F0000
_080C5C6C:
	.4byte 0x00001132
_080C5C70:
	mov r0, #1
	mov r10, r0
_080C5C74:
	mov r1, r10
	cmp r1, #0
	beq _080C5CA6
_080C5C7A:
	ldr r4, _080C5CF4  @ =gRam
	ldr r2, _080C5CF8  @ =0x000010D2
	add r1, r4, r2
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080C5CFC  @ =0x00000E75
	add r0, r4, r1
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080C5C9E
	add r0, r6, #0
	bl sub_080CB1E0
_080C5C9E:
	mov r7, #1
	mov r2, r9
	strb r7, [r2]
	add r3, r4, #0
_080C5CA6:
	ldr r4, _080C5D00  @ =0x00001122
	add r1, r3, r4
	add r1, r6, r1
	ldr r2, _080C5D04  @ =0x00000D94
	add r0, r3, r2
	add r0, r6, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	eor r1, r1, r0
	ldr r4, _080C5D08  @ =0x00000969
	add r0, r3, r4
	mov r2, #0
	strb r1, [r0]
	ldr r1, _080C5D0C  @ =0x00000968
	add r0, r3, r1
	strb r2, [r0]
	sub r4, r4, #9
	add r0, r3, r4
	ldrb r1, [r0]
	ldr r4, _080C5D10  @ =0x000015E8
	add r0, r3, r4
	strb r1, [r0]
	ldr r1, _080C5D14  @ =0x00000964
	add r0, r3, r1
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r3, r4
	strb r1, [r0]
	ldr r0, [sp]
	strb r2, [r0]
	add r0, r7, #0
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
_080C5CF4:
	.4byte gRam
_080C5CF8:
	.4byte 0x000010D2
_080C5CFC:
	.4byte 0x00000E75
_080C5D00:
	.4byte 0x00001122
_080C5D04:
	.4byte 0x00000D94
_080C5D08:
	.4byte 0x00000969
_080C5D0C:
	.4byte 0x00000968
_080C5D10:
	.4byte 0x000015E8
_080C5D14:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080C5ACC

