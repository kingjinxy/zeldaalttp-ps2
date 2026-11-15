	THUMB_FUNC_START sub_080FE864
sub_080FE864: @ 0x080FE864
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #24
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl GetRandomInt
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r1, #3
	bl __umodsi3
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp]
	mov r0, #0
	mov r10, r0
	mov r1, #0
	str r1, [sp, #4]
	ldr r0, _080FE940  @ =gRam
	ldr r5, _080FE944  @ =0x00000EE2
	add r2, r0, r5
	ldr r1, _080FE948  @ =0x00000ED2
	add r3, r0, r1
	ldr r5, _080FE94C  @ =0x00001142
	add r1, r0, r5
	add r2, r4, r2
	str r2, [sp, #8]
	add r2, r4, r3
	str r2, [sp, #12]
	add r5, r4, r1
	str r5, [sp, #16]
	mov r12, r1
	add r7, r3, #0
	ldr r2, _080FE950  @ =0x00000F02
	add r1, r0, r2
	ldr r5, _080FE954  @ =0x00000EF2
	add r0, r0, r5
	add r1, r1, r4
	mov r9, r1
	add r4, r4, r0
	mov r8, r4
	add r6, r0, #0
_080FE8C2:
	ldr r0, _080FE958  @ =gUnknown_03003222
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #136
	bne _080FE920
	ldr r0, [sp, #4]
	add r1, r0, #0
	add r1, r1, #1
	str r1, [sp, #4]
	ldr r2, [sp]
	cmp r0, r2
	bne _080FE920
	ldrb r1, [r7, #16]
	ldrb r2, [r7]
	mov r5, r12
	ldrb r3, [r5]
	ldrb r4, [r6, #16]
	ldrb r0, [r6]
	str r0, [sp, #20]
	ldr r5, [sp, #8]
	ldrb r0, [r5]
	strb r0, [r7, #16]
	ldr r5, [sp, #12]
	ldrb r0, [r5]
	strb r0, [r7]
	ldr r5, [sp, #16]
	ldrb r0, [r5]
	mov r5, r12
	strb r0, [r5]
	mov r5, r9
	ldrb r0, [r5]
	strb r0, [r6, #16]
	mov r5, r8
	ldrb r0, [r5]
	strb r0, [r6]
	ldr r0, [sp, #8]
	strb r1, [r0]
	ldr r1, [sp, #12]
	strb r2, [r1]
	ldr r2, [sp, #16]
	strb r3, [r2]
	mov r5, r9
	strb r4, [r5]
	mov r0, sp
	ldrb r1, [r0, #20]
	mov r0, r8
	strb r1, [r0]
_080FE920:
	mov r2, #1
	add r12, r12, r2
	add r7, r7, #1
	add r6, r6, #1
	add r10, r10, r2
	mov r5, r10
	cmp r5, #15
	ble _080FE8C2
	add sp, sp, #24
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FE940:
	.4byte gRam
_080FE944:
	.4byte 0x00000EE2
_080FE948:
	.4byte 0x00000ED2
_080FE94C:
	.4byte 0x00001142
_080FE950:
	.4byte 0x00000F02
_080FE954:
	.4byte 0x00000EF2
_080FE958:
	.4byte gUnknown_03003222
	THUMB_FUNC_END sub_080FE864

