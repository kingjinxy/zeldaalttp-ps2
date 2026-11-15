	THUMB_FUNC_START sub_080BC93C
sub_080BC93C: @ 0x080BC93C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r4, _080BCA38  @ =gRam
	ldr r0, _080BCA3C  @ =0x000009AD
	add r5, r4, r0
	ldrb r1, [r5]
	str r1, [sp]
	ldr r2, _080BCA40  @ =0x000016C4
	add r1, r4, r2
	ldrh r0, [r1]
	str r0, [sp, #4]
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldrh r0, [r2]
	str r0, [sp, #8]
	mov r3, #0
	ldr r0, _080BCA44  @ =0x00001370
	strh r0, [r1]
	mov r0, #180
	lsl r0, r0, #3
	strh r0, [r2]
	strb r3, [r5]
	bl sub_080CE350
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r5]
	mov r0, #0
	bl sub_080CCE5C
	mov r6, #15
	add r7, r4, #0
	mov r9, r5
	ldr r2, _080BCA48  @ =0x00000FA2
	add r2, r2, r7
	mov r10, r2
_080BC98E:
	ldr r1, _080BCA4C  @ =0x00000FF2
	add r0, r7, r1
	add r0, r0, r6
	mov r8, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BC9F8
	ldr r2, _080BCA50  @ =0x00000FD2
	add r0, r7, r2
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _080BC9AC
	sub r0, r0, #1
	strb r0, [r1]
_080BC9AC:
	lsl r4, r6, #24
	lsr r4, r4, #24
	ldr r1, _080BCA54  @ =0x00001012
	add r0, r7, r1
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #2
	ldr r2, _080BCA58  @ =0x000015DC
	add r1, r7, r2
	strb r4, [r1]
	bl sub_080CF370
	add r0, r4, #0
	bl sub_080C1F70
	mov r0, r9
	ldrb r5, [r0]
	mov r1, #0
	strb r1, [r0]
	mov r2, r10
	add r1, r4, r2
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	bl SpriteActive_MainLong
	mov r0, r9
	strb r5, [r0]
	mov r1, r10
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BC9F8
	mov r2, r8
	strb r0, [r2]
_080BC9F8:
	sub r6, r6, #1
	cmp r6, #0
	bge _080BC98E
	ldr r4, _080BCA38  @ =gRam
	ldr r0, _080BCA3C  @ =0x000009AD
	add r5, r4, r0
	mov r0, #0
	strb r0, [r5]
	bl sub_080CE324
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r5]
	ldr r2, _080BCA40  @ =0x000016C4
	add r0, r4, r2
	mov r1, sp
	ldrh r1, [r1, #4]
	strh r1, [r0]
	sub r2, r2, #4
	add r4, r4, r2
	mov r0, sp
	ldrh r0, [r0, #8]
	strh r0, [r4]
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BCA38:
	.4byte gRam
_080BCA3C:
	.4byte 0x000009AD
_080BCA40:
	.4byte 0x000016C4
_080BCA44:
	.4byte 0x00001370
_080BCA48:
	.4byte 0x00000FA2
_080BCA4C:
	.4byte 0x00000FF2
_080BCA50:
	.4byte 0x00000FD2
_080BCA54:
	.4byte 0x00001012
_080BCA58:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080BC93C

