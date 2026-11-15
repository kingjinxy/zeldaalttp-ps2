	THUMB_FUNC_START sub_08105BD0
sub_08105BD0: @ 0x08105BD0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08105D1C  @ =gRam
	ldr r2, _08105D20  @ =0x00000F62
	add r1, r3, r2
	add r1, r0, r1
	ldrb r5, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	strb r5, [r1]
	ldr r6, _08105D24  @ =0x00000F72
	add r1, r3, r6
	add r1, r0, r1
	ldrb r2, [r1]
	add r4, r4, #1
	add r1, r3, r4
	strb r2, [r1]
	add r6, r6, #16
	add r1, r3, r6
	add r1, r0, r1
	ldrb r4, [r1]
	ldr r2, _08105D28  @ =0x00000964
	add r1, r3, r2
	strb r4, [r1]
	ldr r6, _08105D2C  @ =0x000010A2
	add r1, r3, r6
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r6, _08105D30  @ =0x00000965
	add r1, r3, r6
	strb r2, [r1]
	ldr r1, _08105D34  @ =0x00000979
	add r2, r3, r1
	mov r1, #5
	strb r1, [r2]
	ldr r1, _08105D38  @ =gUnknown_0817BE90
	add r0, r0, r1
	ldrb r6, [r0]
	ldr r1, _08105D3C  @ =gUnknown_0200EC18
	add r0, r6, r1
	ldrb r0, [r0]
	sub r0, r0, r5
	ldr r5, _08105D40  @ =0x00000968
	add r1, r3, r5
	strb r0, [r1]
	ldr r1, _08105D44  @ =gUnknown_0200ED18
	add r0, r6, r1
	ldrb r0, [r0]
	sub r0, r0, r4
	ldr r4, _08105D48  @ =0x00000969
	add r1, r3, r4
	strb r0, [r1]
	add r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r12, r3
	mov r5, #128
	mov r9, r5
	ldr r0, _08105D4C  @ =0x00000974
	add r0, r0, r12
	mov r10, r0
	mov r8, r2
_08105C58:
	ldr r0, _08105D40  @ =0x00000968
	add r0, r0, r12
	ldrb r4, [r0]
	add r5, r4, #0
	add r0, r4, #0
	mov r1, r9
	and r0, r0, r1
	cmp r0, #0
	beq _08105C72
	mvn r0, r4
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_08105C72:
	mov r0, #15
	and r0, r0, r6
	sub r0, r0, #2
	ldr r2, _08105D50  @ =gUnknown_0817BEC8
	add r0, r0, r2
	ldrb r2, [r0]
	add r0, r4, #0
	mul r0, r2, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #0
	lsl r0, r5, #24
	cmp r0, #0
	bge _08105C98
	mvn r0, r4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #255
_08105C98:
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r12
	ldrh r0, [r0]
	add r0, r0, r4
	lsl r1, r1, #8
	add r3, r0, r1
	mov r7, #151
	lsl r7, r7, #4
	add r7, r7, r12
	strh r3, [r7]
	ldr r0, _08105D48  @ =0x00000969
	add r0, r0, r12
	ldrb r4, [r0]
	add r5, r4, #0
	add r0, r4, #0
	mov r1, r9
	and r0, r0, r1
	cmp r0, #0
	beq _08105CC8
	mvn r0, r4
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
_08105CC8:
	add r0, r4, #0
	mul r0, r2, r0
	asr r0, r0, #8
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #0
	lsl r0, r5, #24
	cmp r0, #0
	bge _08105CE2
	mvn r0, r4
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #255
_08105CE2:
	ldr r0, _08105D28  @ =0x00000964
	add r0, r0, r12
	ldrh r0, [r0]
	add r0, r0, r4
	lsl r1, r1, #8
	add r0, r0, r1
	mov r2, r10
	strh r0, [r2]
	ldr r4, _08105D3C  @ =gUnknown_0200EC18
	add r0, r6, r4
	ldrb r4, [r0]
	ldr r5, _08105D54  @ =gUnknown_0200EC19
	add r0, r6, r5
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r4, r4, r0
	mov r1, #0
	ldrsh r0, [r7, r1]
	cmp r4, r0
	beq _08105D6C
	sub r0, r4, r3
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08105D58
	sub r0, r4, #1
	b _08105D5A
_08105D1C:
	.4byte gRam
_08105D20:
	.4byte 0x00000F62
_08105D24:
	.4byte 0x00000F72
_08105D28:
	.4byte 0x00000964
_08105D2C:
	.4byte 0x000010A2
_08105D30:
	.4byte 0x00000965
_08105D34:
	.4byte 0x00000979
_08105D38:
	.4byte gUnknown_0817BE90
_08105D3C:
	.4byte gUnknown_0200EC18
_08105D40:
	.4byte 0x00000968
_08105D44:
	.4byte gUnknown_0200ED18
_08105D48:
	.4byte 0x00000969
_08105D4C:
	.4byte 0x00000974
_08105D50:
	.4byte gUnknown_0817BEC8
_08105D54:
	.4byte gUnknown_0200EC19
_08105D58:
	add r0, r4, #1
_08105D5A:
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r5, _08105D9C  @ =gUnknown_0200EC18
	add r0, r6, r5
	strb r4, [r0]
	ldr r0, _08105DA0  @ =gUnknown_0200EC19
	add r1, r6, r0
	lsr r0, r4, #8
	strb r0, [r1]
_08105D6C:
	ldr r1, _08105DA4  @ =gUnknown_0200ED18
	add r0, r6, r1
	ldrb r4, [r0]
	ldr r2, _08105DA8  @ =gUnknown_0200ED19
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r4, r4, r0
	ldr r1, _08105DAC  @ =0x00000974
	add r1, r1, r12
	mov r5, #0
	ldrsh r0, [r1, r5]
	cmp r4, r0
	beq _08105DC4
	ldrh r0, [r1]
	sub r0, r4, r0
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _08105DB0
	sub r0, r4, #1
	b _08105DB2
_08105D9C:
	.4byte gUnknown_0200EC18
_08105DA0:
	.4byte gUnknown_0200EC19
_08105DA4:
	.4byte gUnknown_0200ED18
_08105DA8:
	.4byte gUnknown_0200ED19
_08105DAC:
	.4byte 0x00000974
_08105DB0:
	add r0, r4, #1
_08105DB2:
	lsl r0, r0, #16
	lsr r4, r0, #16
	ldr r5, _08105DE8  @ =gUnknown_0200ED18
	add r0, r6, r5
	strb r4, [r0]
	ldr r0, _08105DEC  @ =gUnknown_0200ED19
	add r1, r6, r0
	lsr r0, r4, #8
	strb r0, [r1]
_08105DC4:
	add r0, r6, #2
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _08105DDA
	b _08105C58
_08105DDA:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08105DE8:
	.4byte gUnknown_0200ED18
_08105DEC:
	.4byte gUnknown_0200ED19
	THUMB_FUNC_END sub_08105BD0

