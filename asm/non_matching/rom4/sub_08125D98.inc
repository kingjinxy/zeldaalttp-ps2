	THUMB_FUNC_START sub_08125D98
sub_08125D98: @ 0x08125D98
	push {r4-r6,lr}
	ldr r5, _08125DA0  @ =gRam
	b _08125E1E
	.byte 0x00
	.byte 0x00
_08125DA0:
	.4byte gRam
_08125DA4:
	cmp r2, r0
	beq _08125E0C
	ldr r0, _08125DF8  @ =0x00001BD2
	add r2, r5, r0
	strb r1, [r2]
	sub r0, r3, #1
	add r0, r0, r4
	ldrb r0, [r0]
	ldr r4, _08125DFC  @ =0x00001BD1
	add r1, r5, r4
	strb r0, [r1]
	add r4, r4, #7
	add r0, r5, r4
	strb r3, [r0]
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r1, _08125E00  @ =0x00001BCF
	add r4, r5, r1
	mov r1, #0
	ldrsb r1, [r4, r1]
	sub r0, r0, r1
	lsl r0, r0, #8
	mov r1, #0
	ldrsb r1, [r2, r1]
	mov r2, #0
	ldrsb r2, [r6, r2]
	sub r1, r1, r2
	bl Div
	ldr r2, _08125E04  @ =0x00001BD6
	add r1, r5, r2
	strh r0, [r1]
	ldrb r0, [r4]
	lsl r0, r0, #8
	mov r1, #128
	ldr r3, _08125E08  @ =0x00001BD4
	add r2, r5, r3
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #0
	b _08125E72
	.byte 0x00
	.byte 0x00
_08125DF8:
	.4byte 0x00001BD2
_08125DFC:
	.4byte 0x00001BD1
_08125E00:
	.4byte 0x00001BCF
_08125E04:
	.4byte 0x00001BD6
_08125E08:
	.4byte 0x00001BD4
_08125E0C:
	sub r0, r3, #1
	add r0, r0, r4
	ldrb r1, [r0]
	ldr r4, _08125E48  @ =0x00001BCF
	add r0, r5, r4
	strb r1, [r0]
	ldr r1, _08125E4C  @ =0x00001BD8
	add r0, r5, r1
	strb r3, [r0]
_08125E1E:
	ldr r2, _08125E50  @ =0x00001BC4
	add r0, r5, r2
	ldrb r1, [r0]
	sub r1, r1, #1
	strb r1, [r0]
	mov r0, #128
	and r1, r1, r0
	cmp r1, #0
	bne _08125E70
	ldr r3, _08125E4C  @ =0x00001BD8
	add r0, r5, r3
	ldrb r3, [r0]
	ldr r4, _08125E54  @ =0x00001B90
	add r0, r5, r4
	ldrb r0, [r0]
	cmp r3, r0
	beq _08125E58
	add r0, r3, #2
	lsl r0, r0, #24
	lsr r3, r0, #24
	b _08125E5A
_08125E48:
	.4byte 0x00001BCF
_08125E4C:
	.4byte 0x00001BD8
_08125E50:
	.4byte 0x00001BC4
_08125E54:
	.4byte 0x00001B90
_08125E58:
	mov r3, #2
_08125E5A:
	add r0, r5, #0
	ldr r1, _08125E78  @ =0x00001B90
	add r4, r0, r1
	add r1, r3, r4
	ldr r2, _08125E7C  @ =0x00001BD0
	add r6, r0, r2
	ldrb r1, [r1]
	add r2, r1, #0
	ldrb r0, [r6]
	cmp r2, r0
	bcs _08125DA4
_08125E70:
	mov r0, #1
_08125E72:
	pop {r4-r6}
	pop {r1}
	bx r1
_08125E78:
	.4byte 0x00001B90
_08125E7C:
	.4byte 0x00001BD0
	THUMB_FUNC_END sub_08125D98

