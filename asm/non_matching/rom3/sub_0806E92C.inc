	THUMB_FUNC_START sub_0806E92C
sub_0806E92C: @ 0x0806E92C
	push {r4-r6,lr}
	mov r2, #22
	ldr r1, _0806E9A0  @ =gUnknown_0814CAD4
	ldr r4, _0806E9A4  @ =gRam
	ldr r3, _0806E9A8  @ =0x00000ABA
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806E94C
	mov r2, #23
	mov r1, #0
_0806E94C:
	ldr r3, _0806E9AC  @ =0x000009B4
	add r0, r4, r3
	strb r2, [r0]
	ldr r2, _0806E9B0  @ =0x000009B5
	add r0, r4, r2
	strb r1, [r0]
	bl sub_0806D598
	mov r6, #23
	ldr r0, _0806E9B4  @ =0x000009DE
	add r3, r4, r0
	ldrh r5, [r3]
	add r0, r5, #1
	strh r0, [r3]
	ldr r2, _0806E9B8  @ =0x00001712
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	mov r2, #60
	ldr r1, _0806E9BC  @ =0x00000B0A
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806E988
	mov r6, #25
	sub r0, r5, #1
	strh r0, [r3]
	mov r2, #50
_0806E988:
	ldr r3, _0806E9C0  @ =0x00000B0C
	add r0, r4, r3
	strh r2, [r0]
	cmp r6, #23
	bne _0806E9C8
	ldr r0, _0806E9C4  @ =0x00000504
	add r1, r4, r0
	mov r0, #50
	bl sub_0812A324
	b _0806E9D2
	.byte 0x00
	.byte 0x00
_0806E9A0:
	.4byte gUnknown_0814CAD4
_0806E9A4:
	.4byte gRam
_0806E9A8:
	.4byte 0x00000ABA
_0806E9AC:
	.4byte 0x000009B4
_0806E9B0:
	.4byte 0x000009B5
_0806E9B4:
	.4byte 0x000009DE
_0806E9B8:
	.4byte 0x00001712
_0806E9BC:
	.4byte 0x00000B0A
_0806E9C0:
	.4byte 0x00000B0C
_0806E9C4:
	.4byte 0x00000504
_0806E9C8:
	ldr r2, _0806EAB0  @ =0x00000504
	add r1, r4, r2
	mov r0, #52
	bl sub_0812A324
_0806E9D2:
	ldr r1, _0806EAB4  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r3, r1, r0
	mov r0, #0
	strh r0, [r3]
	ldr r2, _0806EAB8  @ =0x000009AD
	add r0, r1, r2
	ldrb r6, [r0]
	add r2, r2, #99
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	beq _0806EA08
	mov r2, #32
	cmp r6, #19
	bne _0806E9F8
	sub r2, r2, #64
_0806E9F8:
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrh r1, [r0]
	add r1, r1, r2
	strh r1, [r0]
	mov r0, #1
	strh r0, [r3]
_0806EA08:
	ldr r1, _0806EABC  @ =gUnknown_08153538
	ldr r3, _0806EAC0  @ =0x00000B32
	add r2, r4, r3
	ldrh r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	sub r3, r3, #20
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _0806EAC4  @ =gUnknown_0815353B
	ldrh r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r2, #161
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	cmp r1, #0
	beq _0806EA4E
	mov r2, #32
	cmp r6, #19
	bne _0806EA36
	sub r2, r2, #64
_0806EA36:
	mov r3, #182
	lsl r3, r3, #5
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806EA4E:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #0
	bne _0806EA80
	mov r2, #12
	cmp r6, #19
	bne _0806EA74
	sub r2, r2, #20
	ldr r3, _0806EAC8  @ =0x00000B0A
	add r0, r4, r3
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806EA74
	sub r2, r2, #16
_0806EA74:
	mov r0, #182
	lsl r0, r0, #5
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, r2
	strh r0, [r1]
_0806EA80:
	ldr r2, _0806EACC  @ =0x00000B48
	add r1, r4, r2
	mov r0, #1
	strh r0, [r1]
	ldr r3, _0806EAB0  @ =0x00000504
	add r1, r4, r3
	mov r0, #70
	bl sub_0812A324
	bl sub_0806FE5C
	bl sub_0808AB34
	bl sub_08079338
	ldr r0, _0806EAD0  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806EAB0:
	.4byte 0x00000504
_0806EAB4:
	.4byte gRam
_0806EAB8:
	.4byte 0x000009AD
_0806EABC:
	.4byte gUnknown_08153538
_0806EAC0:
	.4byte 0x00000B32
_0806EAC4:
	.4byte gUnknown_0815353B
_0806EAC8:
	.4byte 0x00000B0A
_0806EACC:
	.4byte 0x00000B48
_0806EAD0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806E92C

