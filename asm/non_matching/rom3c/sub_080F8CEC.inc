	THUMB_FUNC_START sub_080F8CEC
sub_080F8CEC: @ 0x080F8CEC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	ldr r7, _080F8DD4  @ =gRam
	ldr r1, _080F8DD8  @ =0x00000F52
	add r0, r7, r1
	ldr r2, [sp, #4]
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _080F8D10
	b _080F8F4A
_080F8D10:
	ldr r3, _080F8DDC  @ =0x000010D2
	add r0, r7, r3
	add r0, r2, r0
	ldrb r0, [r0]
	str r0, [sp, #8]
	cmp r0, #0
	beq _080F8D20
	b _080F8F4A
_080F8D20:
	ldr r5, _080F8DE0  @ =0x00000F62
	add r5, r5, r7
	mov r9, r5
	add r9, r9, r2
	mov r0, r9
	ldrb r0, [r0]
	str r0, [sp, #12]
	add r1, r1, #32
	add r0, r7, r1
	add r0, r2, r0
	ldrb r4, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r6, r7, r2
	ldrh r0, [r6]
	add r0, r0, #4
	strh r0, [r6]
	ldr r3, _080F8DE4  @ =0x00000964
	add r3, r3, r7
	mov r8, r3
	ldrh r0, [r3]
	add r0, r0, #3
	strh r0, [r3]
	ldr r5, _080F8DE8  @ =gUnknown_03003E74
	mov r10, r5
	ldrh r0, [r5]
	add r0, r0, #5
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r6]
	ldrh r2, [r3]
	ldr r5, _080F8DEC  @ =gUnknown_03002B99
	mov r3, #0
	ldrsb r3, [r5, r3]
	lsl r3, r3, #8
	add r3, r3, #254
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r5, [sp, #8]
	str r5, [sp]
	bl sub_080C6004
	mov r1, r10
	ldrh r0, [r1]
	ldr r2, [sp, #12]
	lsl r5, r2, #24
	asr r5, r5, #24
	ldrh r6, [r6]
	add r5, r5, r6
	lsl r5, r5, #16
	lsr r5, r5, #16
	lsl r4, r4, #24
	asr r4, r4, #24
	mov r3, r8
	ldrh r3, [r3]
	add r4, r4, r3
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldr r1, _080F8DEC  @ =gUnknown_03002B99
	mov r3, #0
	ldrsb r3, [r1, r3]
	lsl r3, r3, #8
	add r3, r3, #254
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r2, [sp, #8]
	str r2, [sp]
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C6004
	ldr r3, _080F8DF0  @ =0x00000FB2
	add r0, r7, r3
	ldr r5, [sp, #4]
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r2, _080F8DF4  @ =0x00000975
	add r0, r7, r2
	strb r1, [r0]
	mov r3, r9
	ldrb r1, [r3]
	ldr r5, _080F8DF8  @ =0x0000097C
	add r0, r7, r5
	strb r1, [r0]
	lsl r0, r1, #24
	cmp r0, #0
	blt _080F8DFC
	add r2, r2, #3
	add r0, r7, r2
	b _080F8E02
_080F8DD4:
	.4byte gRam
_080F8DD8:
	.4byte 0x00000F52
_080F8DDC:
	.4byte 0x000010D2
_080F8DE0:
	.4byte 0x00000F62
_080F8DE4:
	.4byte 0x00000964
_080F8DE8:
	.4byte gUnknown_03003E74
_080F8DEC:
	.4byte gUnknown_03002B99
_080F8DF0:
	.4byte 0x00000FB2
_080F8DF4:
	.4byte 0x00000975
_080F8DF8:
	.4byte 0x0000097C
_080F8DFC:
	neg r1, r1
	ldr r3, _080F8E24  @ =0x00000978
	add r0, r7, r3
_080F8E02:
	strb r1, [r0]
	ldr r2, _080F8E28  @ =gRam
	ldr r5, _080F8E2C  @ =0x00000F72
	add r0, r2, r5
	ldr r7, [sp, #4]
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _080F8E30  @ =0x0000097D
	add r0, r2, r3
	strb r1, [r0]
	lsl r0, r1, #24
	cmp r0, #0
	blt _080F8E38
	ldr r5, _080F8E34  @ =0x00000979
	add r0, r2, r5
	b _080F8E3E
	.byte 0x00
	.byte 0x00
_080F8E24:
	.4byte 0x00000978
_080F8E28:
	.4byte gRam
_080F8E2C:
	.4byte 0x00000F72
_080F8E30:
	.4byte 0x0000097D
_080F8E34:
	.4byte 0x00000979
_080F8E38:
	neg r1, r1
	ldr r7, _080F8E90  @ =0x00000979
	add r0, r2, r7
_080F8E3E:
	strb r1, [r0]
	mov r0, #1
	mov r8, r0
	mov r3, #3
	ldr r6, _080F8E94  @ =gRam
	mov r10, r6
	ldr r1, _080F8E98  @ =0x00000969
	add r1, r1, r6
	mov r9, r1
_080F8E50:
	ldr r2, _080F8E9C  @ =0x00000978
	add r0, r6, r2
	mov r2, #0
	ldrsb r2, [r0, r2]
	ldr r1, _080F8EA0  @ =gUnknown_0817A240
	lsl r3, r3, #24
	asr r0, r3, #24
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r2, #0
	mul r0, r1, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F8E90  @ =0x00000979
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mul r0, r1, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r7, _080F8EA4  @ =gUnknown_03002BAC
	mov r0, #0
	ldrsb r0, [r7, r0]
	str r3, [sp, #16]
	cmp r0, #0
	blt _080F8EA8
	add r1, r4, #0
	b _080F8EB0
	.byte 0x00
	.byte 0x00
_080F8E90:
	.4byte 0x00000979
_080F8E94:
	.4byte gRam
_080F8E98:
	.4byte 0x00000969
_080F8E9C:
	.4byte 0x00000978
_080F8EA0:
	.4byte gUnknown_0817A240
_080F8EA4:
	.4byte gUnknown_03002BAC
_080F8EA8:
	mvn r0, r4
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
_080F8EB0:
	ldr r0, _080F8EC4  @ =0x0000097D
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	blt _080F8EC8
	add r4, r2, #0
	b _080F8ED0
	.byte 0x00
	.byte 0x00
_080F8EC4:
	.4byte 0x0000097D
_080F8EC8:
	mvn r0, r2
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_080F8ED0:
	ldr r0, _080F8F5C  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r8
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r3, #150
	lsl r3, r3, #4
	add r2, r6, r3
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r5, _080F8F60  @ =0x00000964
	add r3, r6, r5
	lsl r2, r4, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080F8F64  @ =gUnknown_0817A244
	ldr r7, _080F8F68  @ =0x00000975
	add r3, r6, r7
	mov r5, #0
	ldrsb r5, [r3, r5]
	add r4, r5, r4
	ldrb r3, [r4]
	ldr r4, _080F8F6C  @ =gUnknown_0817A24C
	add r5, r5, r4
	ldrb r4, [r5]
	mov r7, r9
	mov r5, #0
	ldrsb r5, [r7, r5]
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	mov r0, r8
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r1, [sp, #16]
	mov r2, #255
	lsl r2, r2, #24
	add r0, r1, r2
	lsr r3, r0, #24
	cmp r0, #0
	bge _080F8E50
	ldr r0, [sp, #4]
	mov r1, #0
	mov r2, #5
	bl sub_080C6350
_080F8F4A:
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F8F5C:
	.4byte gUnknown_03003E74
_080F8F60:
	.4byte 0x00000964
_080F8F64:
	.4byte gUnknown_0817A244
_080F8F68:
	.4byte 0x00000975
_080F8F6C:
	.4byte gUnknown_0817A24C
	THUMB_FUNC_END sub_080F8CEC

