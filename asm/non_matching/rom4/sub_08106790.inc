	THUMB_FUNC_START sub_08106790
sub_08106790: @ 0x08106790
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r7, _08106824  @ =gRam
	ldr r1, _08106828  @ =0x00000FC2
	add r0, r7, r1
	add r0, r0, r6
	mov r10, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08106816
	ldr r2, _0810682C  @ =0x00000FB2
	add r0, r7, r2
	add r4, r6, r0
	ldrb r0, [r4]
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r7
	mov r9, r1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	add r1, r1, #1
	cmp r1, #4
	bhi _08106816
	ldrb r2, [r4]
	cmp r1, r2
	beq _08106816
	strb r1, [r4]
	ldr r0, _08106830  @ =0x00000F52
	add r0, r0, r7
	mov r8, r0
	add r5, r6, r0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r1, r9
	mov r4, #0
	ldrsb r4, [r1, r4]
	cmp r4, #1
	bne _08106816
	bl GetRandomInt
	and r4, r4, r0
	lsl r0, r4, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08106816
	mov r2, r8
	ldrb r0, [r2]
	cmp r0, #1
	bhi _08106816
	ldr r2, _08106834  @ =0x00000F92
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	mov r0, #3
	strb r0, [r5]
	mov r0, #127
	mov r1, r10
	strb r0, [r1]
_08106816:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08106824:
	.4byte gRam
_08106828:
	.4byte 0x00000FC2
_0810682C:
	.4byte 0x00000FB2
_08106830:
	.4byte 0x00000F52
_08106834:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_08106790

