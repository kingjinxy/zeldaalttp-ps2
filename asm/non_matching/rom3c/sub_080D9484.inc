	THUMB_FUNC_START sub_080D9484
sub_080D9484: @ 0x080D9484
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #32
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080D9934
	ldr r1, _080D9560  @ =gRam
	ldr r2, _080D9564  @ =0x00000FE2
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	mov r10, r0
	cmp r0, #0
	bne _080D954E
	ldr r6, _080D9568  @ =0x00000F62
	add r6, r6, r1
	mov r9, r6
	add r9, r9, r7
	mov r0, #1
	mov r2, r9
	strb r0, [r2]
	ldr r6, _080D956C  @ =0x00001132
	add r6, r6, r1
	mov r8, r6
	add r8, r8, r7
	mov r2, r10
	mov r0, r8
	strb r2, [r0]
	ldr r6, _080D9570  @ =0x00000E75
	add r3, r1, r6
	add r3, r7, r3
	strb r2, [r3]
	ldr r0, _080D9574  @ =0x00000EE2
	add r2, r1, r0
	add r2, r7, r2
	ldrb r6, [r2]
	str r6, [sp, #4]
	add r0, r0, #32
	add r6, r1, r0
	add r6, r7, r6
	str r6, [sp, #28]
	ldrb r6, [r6]
	str r6, [sp, #8]
	sub r0, r0, #48
	add r5, r1, r0
	add r5, r7, r5
	ldrb r6, [r5]
	str r6, [sp, #12]
	add r0, r0, #32
	add r4, r1, r0
	add r4, r7, r4
	ldrb r6, [r4]
	str r6, [sp, #16]
	ldr r0, _080D9578  @ =0x00001622
	ldrb r6, [r0, r1]
	strb r6, [r2]
	add r0, r0, #1
	ldrb r6, [r0, r1]
	ldr r0, [sp, #28]
	strb r6, [r0]
	ldr r6, _080D957C  @ =0x00001624
	ldrb r0, [r6, r1]
	strb r0, [r5]
	add r6, r6, #1
	add r1, r1, r6
	ldrb r0, [r1]
	strb r0, [r4]
	mov r0, sp
	add r1, r7, #0
	str r2, [sp, #20]
	str r3, [sp, #24]
	bl sub_080C4948
	mov r1, r10
	mov r0, r9
	strb r1, [r0]
	mov r0, #9
	mov r6, r8
	strb r0, [r6]
	mov r0, #4
	ldr r3, [sp, #24]
	strb r0, [r3]
	mov r0, sp
	ldrb r0, [r0, #16]
	strb r0, [r4]
	mov r1, sp
	ldrb r1, [r1, #12]
	strb r1, [r5]
	mov r6, sp
	ldrb r0, [r6, #8]
	ldr r6, [sp, #28]
	strb r0, [r6]
	ldr r2, [sp, #20]
	mov r1, sp
	ldrb r1, [r1, #4]
	strb r1, [r2]
_080D954E:
	add sp, sp, #32
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D9560:
	.4byte gRam
_080D9564:
	.4byte 0x00000FE2
_080D9568:
	.4byte 0x00000F62
_080D956C:
	.4byte 0x00001132
_080D9570:
	.4byte 0x00000E75
_080D9574:
	.4byte 0x00000EE2
_080D9578:
	.4byte 0x00001622
_080D957C:
	.4byte 0x00001624
	THUMB_FUNC_END sub_080D9484

