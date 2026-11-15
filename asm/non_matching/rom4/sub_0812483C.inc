	THUMB_FUNC_START sub_0812483C
sub_0812483C: @ 0x0812483C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	mov r6, #23
	ldr r0, _08124890  @ =gRam
	mov r8, r0
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r8
	mov r10, r1
	ldr r2, _08124894  @ =0x00000964
	add r2, r2, r8
	mov r9, r2
	ldr r7, _08124898  @ =gUnknown_03003E74
_0812485E:
	ldr r3, _0812489C  @ =gUnknown_020068B8
	add r2, r6, r3
	ldrb r0, [r2]
	cmp r0, #255
	beq _081248FE
	ldr r4, _081248A0  @ =gUnknown_02006930
	add r1, r6, r4
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _081248A4
	mov r0, #4
	strb r0, [r1]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _081248A4
	mov r0, #255
	strb r0, [r2]
	b _081248FE
_08124890:
	.4byte gRam
_08124894:
	.4byte 0x00000964
_08124898:
	.4byte gUnknown_03003E74
_0812489C:
	.4byte gUnknown_020068B8
_081248A0:
	.4byte gUnknown_02006930
_081248A4:
	ldr r1, _08124918  @ =gUnknown_020068D0
	add r0, r6, r1
	ldrb r0, [r0]
	mov r2, r10
	strb r0, [r2]
	ldr r3, _0812491C  @ =gUnknown_020068E8
	add r0, r6, r3
	ldrb r1, [r0]
	ldr r0, _08124920  @ =0x00000961
	add r0, r0, r8
	strb r1, [r0]
	ldr r4, _08124924  @ =gUnknown_02006900
	add r0, r6, r4
	ldrb r0, [r0]
	mov r1, r9
	strb r0, [r1]
	ldr r2, _08124928  @ =gUnknown_02006918
	add r0, r6, r2
	ldrb r0, [r0]
	ldr r3, _0812492C  @ =gUnknown_03002B95
	strb r0, [r3]
	sub r4, r4, #72
	add r0, r6, r4
	ldrb r5, [r0]
	ldrh r0, [r7]
	ldrh r1, [r1]
	mov r3, r10
	ldrh r2, [r3]
	ldr r3, _08124930  @ =gUnknown_081804B8
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _08124934  @ =gUnknown_081804BB
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #48
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
_081248FE:
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _0812485E
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08124918:
	.4byte gUnknown_020068D0
_0812491C:
	.4byte gUnknown_020068E8
_08124920:
	.4byte 0x00000961
_08124924:
	.4byte gUnknown_02006900
_08124928:
	.4byte gUnknown_02006918
_0812492C:
	.4byte gUnknown_03002B95
_08124930:
	.4byte gUnknown_081804B8
_08124934:
	.4byte gUnknown_081804BB
	THUMB_FUNC_END sub_0812483C

