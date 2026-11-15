	THUMB_FUNC_START sub_080BF3F0
sub_080BF3F0: @ 0x080BF3F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #16
	str r1, [sp]
	lsr r1, r1, #16
	mov r9, r1
	lsl r2, r2, #16
	str r2, [sp, #4]
	lsr r2, r2, #16
	mov r10, r2
	lsl r3, r3, #24
	lsr r3, r3, #24
	str r3, [sp, #8]
	ldr r3, _080BF4A4  @ =gRam
	ldr r1, _080BF4A8  @ =0x00000DCF
	add r0, r3, r1
	add r0, r0, r5
	mov r8, r0
	ldrb r2, [r0]
	ldr r4, _080BF4AC  @ =0x00000DE3
	add r0, r3, r4
	add r0, r0, r5
	mov r12, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	mov r0, r9
	sub r2, r0, r2
	lsl r2, r2, #16
	sub r1, r1, #10
	add r0, r3, r1
	add r7, r5, r0
	ldrb r1, [r7]
	sub r4, r4, #10
	add r0, r3, r4
	add r6, r5, r0
	ldrb r0, [r6]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, r10
	sub r1, r0, r1
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsr r4, r2, #16
	str r4, [sp, #12]
	mov r0, #128
	lsl r0, r0, #9
	add r2, r2, r0
	lsr r2, r2, #16
	add r4, r3, #0
	cmp r2, #2
	bhi _080BF4B8
	lsl r0, r1, #16
	asr r2, r0, #16
	mov r0, #2
	neg r0, r0
	cmp r2, r0
	ble _080BF4B8
	cmp r2, #1
	bgt _080BF4B8
	mov r1, #0
	mov r3, r9
	mov r2, r8
	strb r3, [r2]
	ldr r2, [sp]
	lsr r0, r2, #24
	mov r3, r12
	strb r0, [r3]
	mov r0, r10
	strb r0, [r7]
	ldr r2, [sp, #4]
	lsr r0, r2, #24
	strb r0, [r6]
	ldr r3, _080BF4B0  @ =0x00000DED
	add r0, r4, r3
	add r0, r5, r0
	strb r1, [r0]
	ldr r2, _080BF4B4  @ =0x00000DF7
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
	mov r0, #1
	b _080BF55E
	.byte 0x00
	.byte 0x00
_080BF4A4:
	.4byte gRam
_080BF4A8:
	.4byte 0x00000DCF
_080BF4AC:
	.4byte 0x00000DE3
_080BF4B0:
	.4byte 0x00000DED
_080BF4B4:
	.4byte 0x00000DF7
_080BF4B8:
	ldr r3, _080BF4D4  @ =0x00000961
	add r0, r4, r3
	mov r2, sp
	ldrb r2, [r2, #8]
	strb r2, [r0]
	lsl r0, r1, #16
	asr r0, r0, #16
	add r3, r3, #27
	add r1, r4, r3
	strb r0, [r1]
	cmp r0, #0
	blt _080BF4D8
	mov r1, #0
	b _080BF4DA
_080BF4D4:
	.4byte 0x00000961
_080BF4D8:
	mov r1, #1
_080BF4DA:
	ldr r2, _080BF50C  @ =0x00000964
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080BF510  @ =0x0000097C
	add r1, r4, r3
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080BF4F0
	neg r0, r0
	strb r0, [r1]
_080BF4F0:
	ldrb r1, [r1]
	ldr r2, _080BF514  @ =0x00000978
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, [sp, #12]
	lsl r0, r3, #16
	asr r0, r0, #16
	add r2, r2, #5
	add r1, r4, r2
	strb r0, [r1]
	cmp r0, #0
	blt _080BF518
	mov r2, #0
	b _080BF51A
_080BF50C:
	.4byte 0x00000964
_080BF510:
	.4byte 0x0000097C
_080BF514:
	.4byte 0x00000978
_080BF518:
	mov r2, #1
_080BF51A:
	add r0, r4, #0
	ldr r3, _080BF570  @ =0x00000965
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _080BF574  @ =0x0000097D
	add r1, r0, r2
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080BF532
	neg r0, r0
	strb r0, [r1]
_080BF532:
	ldrb r1, [r1]
	ldr r3, _080BF578  @ =0x00000979
	add r0, r4, r3
	strb r1, [r0]
	bl sub_080BF680
	ldr r1, _080BF57C  @ =0x00000DED
	add r0, r4, r1
	add r0, r5, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080BF580  @ =0x00000DF7
	add r0, r4, r3
	add r0, r5, r0
	add r2, r2, #1
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, #0
_080BF55E:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080BF570:
	.4byte 0x00000965
_080BF574:
	.4byte 0x0000097D
_080BF578:
	.4byte 0x00000979
_080BF57C:
	.4byte 0x00000DED
_080BF580:
	.4byte 0x00000DF7
	THUMB_FUNC_END sub_080BF3F0

