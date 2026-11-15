	THUMB_FUNC_START sub_080BCC04
sub_080BCC04: @ 0x080BCC04
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r4, _080BCD20  @ =gRam
	ldr r0, _080BCD24  @ =0x000009AD
	add r5, r4, r0
	ldrb r1, [r5]
	str r1, [sp]
	ldr r6, _080BCD28  @ =0x000016C4
	add r2, r4, r6
	ldrh r0, [r2]
	str r0, [sp, #4]
	mov r1, #182
	lsl r1, r1, #5
	add r3, r4, r1
	ldrh r6, [r3]
	str r6, [sp, #8]
	ldr r1, _080BCD2C  @ =gUnknown_08173F38
	ldr r6, _080BCD30  @ =0x00000996
	add r0, r4, r6
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	lsr r0, r0, #2
	ldr r1, _080BCD34  @ =0x00001D50
	add r0, r0, r1
	mov r1, #0
	strh r0, [r2]
	mov r0, #213
	lsl r0, r0, #5
	strh r0, [r3]
	strb r1, [r5]
	bl sub_080CE350
	mov r2, sp
	ldrb r2, [r2]
	strb r2, [r5]
	mov r6, #15
	mov r8, r4
	mov r9, r5
	ldr r0, _080BCD38  @ =0x00000FA2
	add r0, r0, r8
	mov r10, r0
_080BCC62:
	ldr r0, _080BCD3C  @ =0x00000FF2
	add r0, r0, r8
	add r7, r6, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080BCCB8
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r0, _080BCD40  @ =0x00001012
	add r0, r0, r8
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r1, _080BCD44  @ =0x000015DC
	add r1, r1, r8
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r1, r9
	ldrb r5, [r1]
	mov r2, #0
	strb r2, [r1]
	mov r0, r10
	add r1, r4, r0
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r1, r9
	strb r5, [r1]
	mov r2, r10
	add r0, r6, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BCCB8
	strb r0, [r7]
_080BCCB8:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BCC62
	ldr r5, _080BCD20  @ =gRam
	ldr r6, _080BCD24  @ =0x000009AD
	add r4, r5, r6
	mov r0, #0
	strb r0, [r4]
	bl sub_080CE324
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r4]
	ldr r1, _080BCD28  @ =0x000016C4
	add r0, r5, r1
	mov r2, sp
	ldrh r2, [r2, #4]
	strh r2, [r0]
	mov r6, #182
	lsl r6, r6, #5
	add r0, r5, r6
	mov r1, sp
	ldrh r1, [r1, #8]
	strh r1, [r0]
	ldr r2, _080BCD48  @ =0x00000A02
	add r0, r5, r2
	ldrb r1, [r0]
	ldr r6, _080BCD4C  @ =0x00000A03
	add r0, r5, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #150
	lsl r0, r0, #1
	cmp r1, r0
	bne _080BCD10
	ldr r0, _080BCD50  @ =0x00001032
	add r1, r5, r0
	mov r0, #192
	strb r0, [r1]
	ldr r2, _080BCD54  @ =0x00000F52
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
_080BCD10:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BCD20:
	.4byte gRam
_080BCD24:
	.4byte 0x000009AD
_080BCD28:
	.4byte 0x000016C4
_080BCD2C:
	.4byte gUnknown_08173F38
_080BCD30:
	.4byte 0x00000996
_080BCD34:
	.4byte 0x00001D50
_080BCD38:
	.4byte 0x00000FA2
_080BCD3C:
	.4byte 0x00000FF2
_080BCD40:
	.4byte 0x00001012
_080BCD44:
	.4byte 0x000015DC
_080BCD48:
	.4byte 0x00000A02
_080BCD4C:
	.4byte 0x00000A03
_080BCD50:
	.4byte 0x00001032
_080BCD54:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080BCC04

