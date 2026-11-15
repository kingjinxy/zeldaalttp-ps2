	THUMB_FUNC_START sub_080BF680
sub_080BF680: @ 0x080BF680
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r0, #0
	mov r9, r0
	ldr r0, _080BF758  @ =gRam
	ldr r1, _080BF75C  @ =0x00000979
	add r1, r1, r0
	mov r12, r1
	ldr r2, _080BF760  @ =0x00000978
	add r5, r0, r2
	ldrb r3, [r1]
	mov r2, #0
	ldrsb r2, [r1, r2]
	ldrb r4, [r5]
	mov r1, #0
	ldrsb r1, [r5, r1]
	add r7, r0, #0
	cmp r2, r1
	bge _080BF6B4
	mov r0, #1
	mov r9, r0
	mov r1, r12
	strb r4, [r1]
	strb r3, [r5]
_080BF6B4:
	ldr r2, _080BF764  @ =0x00000975
	add r1, r7, r2
	mov r0, #0
	strb r0, [r1]
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	strb r0, [r2]
	add r3, r3, #1
	add r0, r7, r3
	ldrb r4, [r0]
	add r6, r1, #0
	ldrb r5, [r5]
	mov r8, r5
	mov r0, r12
	ldrb r1, [r0]
	add r5, r1, #0
_080BF6D6:
	ldrb r0, [r6]
	add r0, r0, r8
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, r5
	bcc _080BF6EE
	sub r0, r3, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080BF6EE:
	strb r3, [r6]
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _080BF6D6
	mov r1, r9
	cmp r1, #0
	beq _080BF712
	mov r3, #150
	lsl r3, r3, #4
	add r2, r7, r3
	ldrb r3, [r2]
	ldr r0, _080BF768  @ =0x00000961
	add r1, r7, r0
	ldrb r0, [r1]
	strb r0, [r2]
	strb r3, [r1]
_080BF712:
	add r1, r7, #0
	ldr r2, _080BF76C  @ =0x00000964
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080BF730
	mov r3, #150
	lsl r3, r3, #4
	add r1, r1, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	strb r0, [r1]
_080BF730:
	ldr r1, _080BF770  @ =0x00000965
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080BF74A
	ldr r2, _080BF768  @ =0x00000961
	add r1, r7, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	neg r0, r0
	strb r0, [r1]
_080BF74A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BF758:
	.4byte gRam
_080BF75C:
	.4byte 0x00000979
_080BF760:
	.4byte 0x00000978
_080BF764:
	.4byte 0x00000975
_080BF768:
	.4byte 0x00000961
_080BF76C:
	.4byte 0x00000964
_080BF770:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080BF680

