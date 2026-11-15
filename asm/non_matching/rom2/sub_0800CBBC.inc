	THUMB_FUNC_START sub_0800CBBC
sub_0800CBBC: @ 0x0800CBBC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp]
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _0800CC94  @ =gUnknown_03000204
	ldrb r0, [r0]
	lsl r3, r0, #2
	add r3, r3, r0
	lsl r3, r3, #6
	lsl r4, r1, #16
	asr r0, r4, #15
	ldr r5, _0800CC98  @ =gUnknown_0202A0F0
	add r0, r0, r5
	add r7, r3, r0
	add r6, r7, #0
	mov r12, r1
	lsr r4, r4, #16
	ldr r1, _0800CC9C  @ =gUnknown_02038000
	mov r9, r1
	lsl r2, r2, #16
	ldr r3, _0800CCA0  @ =0xFFFF0000
	add r2, r2, r3
	lsr r0, r2, #16
	mov r8, r0
	asr r2, r2, #16
	mov r1, #1
	neg r1, r1
	cmp r2, r1
	beq _0800CC72
	ldr r2, [sp]
	lsl r0, r2, #16
	asr r5, r0, #16
	mov r10, r1
_0800CC0C:
	mov r3, r9
	ldrh r0, [r3]
	mov r1, #2
	add r9, r9, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	sub r1, r5, r0
	lsl r1, r1, #16
	add r0, r5, r0
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsr r3, r1, #16
	cmp r1, #0
	bge _0800CC2A
	mov r3, #0
_0800CC2A:
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r0, #239
	ble _0800CC34
	mov r2, #240
_0800CC34:
	lsl r4, r4, #16
	lsr r0, r4, #16
	cmp r0, #159
	bhi _0800CC40
	strb r2, [r6]
	strb r3, [r6, #1]
_0800CC40:
	mov r0, r12
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #159
	bhi _0800CC4E
	strb r2, [r7]
	strb r3, [r7, #1]
_0800CC4E:
	sub r6, r6, #2
	add r7, r7, #2
	ldr r2, _0800CCA0  @ =0xFFFF0000
	add r0, r4, r2
	lsr r4, r0, #16
	mov r3, #128
	lsl r3, r3, #9
	add r0, r1, r3
	lsr r0, r0, #16
	mov r12, r0
	mov r1, r8
	lsl r0, r1, #16
	add r0, r0, r2
	lsr r2, r0, #16
	mov r8, r2
	asr r0, r0, #16
	cmp r0, r10
	bne _0800CC0C
_0800CC72:
	ldr r3, _0800CC94  @ =gUnknown_03000204
	ldrb r1, [r3]
	lsl r0, r1, #2
	add r0, r0, r1
	lsl r0, r0, #6
	ldr r1, _0800CCA4  @ =gUnknown_0202A0F2
	add r0, r0, r1
	ldr r2, _0800CCA8  @ =gUnknown_03000BC0
	str r0, [r2, #4]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0800CC94:
	.4byte gUnknown_03000204
_0800CC98:
	.4byte gUnknown_0202A0F0
_0800CC9C:
	.4byte gUnknown_02038000
_0800CCA0:
	.4byte 0xFFFF0000
_0800CCA4:
	.4byte gUnknown_0202A0F2
_0800CCA8:
	.4byte gUnknown_03000BC0
	THUMB_FUNC_END sub_0800CBBC

